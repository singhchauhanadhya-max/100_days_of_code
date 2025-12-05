#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter number by the user");
    scanf("%d",&n);
    if(i<0)
    {
        printf("Factorial of negative does not exist");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d is %d",n,fact);
    }
    return 0;
}
