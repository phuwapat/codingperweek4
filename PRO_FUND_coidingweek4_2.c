#include<stdio.h>
int main()
{
    int num[3],x,y,z;
    printf("Enter number : ");
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    
    x = num[0] + num[1];
    y = num[0] + num[2];
    z = num[1] + num[2];
    if(x>y)
    {
        if(x>z)
        {
        printf("Sum of %d and %d is greatest",num[0],num[1]);
        }
    }
    if(y>x)
    {
        if(y>z)
        {
        printf("Sum of %d and %d is greatest",num[0],num[2]);
        }
    }
    if(z>y)
    {
        if(z>x)
        {
        printf("Sum of %d and %d is greatest",num[1],num[2]);
        }
    }
    else
    {
        printf("The number is equal.");
    }
    return 0;
}