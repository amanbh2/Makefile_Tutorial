#include <stdio.h>
#include "../header/header.h"
#define SUCCESS 1
#define ERROR 0
int main()
{
    int a = 2, b = 3, c;

    // Calling addInteger() to add a & b
    c = addIntegers(a, b);

    printf("Addition of %d and %d is: %d", a, b, c);

    return SUCCESS;
}