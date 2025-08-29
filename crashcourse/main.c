#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p = 5;
    int* a = &p;
    int** pptr = &a;
    printf("p is %d, a's address is %u\n", p, a);
    printf("a's address is %u\n", a);
    printf("pptr's value is %u", **pptr);
    return 0;
}
