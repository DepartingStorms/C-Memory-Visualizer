#include <stdio.h>
#include <stdlib.h>
#include <memViz.h>

void visualizeMemory(void* ptr, size_t size) {
    unsigned char* byte_ptr = (unsigned char*)ptr;

    printf("Memory at address %p, size%zu bytes:\n", ptr, size);

    // Print hex representation
    printf("Hex: ");
    for (size_t i = 0; i < size; i++) {
        printf("%02x ", byte_ptr[i]);
    }
    printf("\n");

    // Print binary representation
    printf("Bin: ");
    for (size_t i = 0; i < size; i++) {
        for (int bit = 7; bit >= 0; bit--) {
            printf("%c", (byte_ptr[i] & (1 << bit)) ? '1' : '0');
        }
        printf(" ");
    }
    printf("\n\n");
}

void visualizeMemoryLayout() {
    int a = 0;
    int b = 1;
    int c = -1;

    char s[] = " ";

    printf("Address of a: %p, value: %d\n", &a, a);
    printf("Address of b: %p, value: %d\n", &b, b);
    printf("Address of c: %p, value: %d\n", &c, c);
    printf("Address of s: %p, value: %d\n", s, s);

    // Show the bytes of the string array
    printf("String memory layout:\n");
    visualizeMemory(s, sizeof(s)); // Will include null terminator

    // Address arithmetic
    printf("Difference between &a and &b: %ld bytes\n", (char*)&b - (char*)&a);
    printf("Difference between &b and &c: %ld bytes\n\n", (char*)&c - (char*)&b);
}

void array_visualization() {
    int array[5] = {10, 20, 30, 40, 50};

    printf("Array base address: %p\n", array);

    for (int i = 0; i < 5; i++) {
        printf("array[%d] address: %p, value: %d\n", i, &array[i], array[i]);
    }

    // Visualize the entire array's memory at once
    printf("Entire array memory:\n");
    visualizeMemory(array, sizeof(array));
}
