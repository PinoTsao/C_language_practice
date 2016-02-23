/* Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...
 * F(n) = F(n - 2) + F(n - 1)*/

#include <stdio.h>

int fi(int x) 
{
    static ret = 0; 

    if (x <= 0) 
    {  
        return 0; 
    }  
    else if (x == 1) 
    {  
        return 1; 
    }  

    ret = fi(x - 2) + fi(x -1 ); 

    return ret;
}

int main()
{
    int result = 0; 

    result = fi(8);
    printf("result = %d\n", result);
}
