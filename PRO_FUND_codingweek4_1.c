#include<stdio.h>
int main()
{
    int num1,num2,num3,a,b,c;
    printf("Enter number.\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    a = num1 + num2;
    b = num1 + num3;
    c = num2 + num3;
    if(a>b)
    {
        if(a>c)
        {
            printf("Sum of %d and %d is greatest.",num1,num2);

        }
    }
    if(b>a)
    {
        if(b>c)
        {
           printf("Sum of %d and %d is greatest.",num1,num3); 
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("Sum of %d and %d is greatest.",num2,num3);
        }
    }
    else
    {
        printf("Every number is equal.");
    }
    return 0;
}