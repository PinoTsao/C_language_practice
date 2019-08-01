/* Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...
 * f(n) = f(n-2) + f(n-1) */

#include <stdio.h>

unsigned int fi(unsigned int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fi(n-2) + fi(n-1);
}

int main()
{
    unsigned int n = 10; 

    printf("sum of fibonacci = %d\n", fi(n));
    return 0;
}
