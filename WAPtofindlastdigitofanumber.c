#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any number : ");
    scanf("%d",&a);
    b=a%10;
    printf("Last digit is %d",b);
    return 0;

}