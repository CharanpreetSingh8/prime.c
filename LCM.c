#include <stdio.h>

int prime(int a)
{
    for(int i = 2;; i++)
    {
        if (a == i)
        {}
        else if(a%i == 0)
        {
            return 0;
            break;
        }
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(prime(n) == 0)
    {
        printf("The %d is not prime.", n);
    }
    else
    {
        printf("The %d is prime.", n);
    }
    
    return 0;
}
