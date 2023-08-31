#include<stdio.h>
void main()
{
    int n;
    long int fact;  
    scanf("%d",&n);
    fact=1;
    int i=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The Factorial of %d is : %ld",n,fact);
}
