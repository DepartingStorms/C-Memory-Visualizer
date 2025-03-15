#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Demo with various data types
    int i = 0;
    float f = 0.0001;
    char c = 'A';
    double d = 0.00001;

    printf("===== INTEGER =====\n");
    visualizeMemory(&i, sizeof(i));

    printf("===== FLOAT =====\n");
    visualizeMemory(&f, sizeof(f));

    printf("===== CHAR =====\n");
    visualizeMemory(&c, sizeof(c));

    printf("===== DOUBLE =====\n");
    visualizeMemory(&d, sizeof(d));

    visualizeMemoryLayout();
    array_visualization();


    return 0;
}