#include<stdio.h>
int main()
{
    int a,b,max;

    printf("Enter the 2 number : ");
    scanf("%d-%d",&a,&b);

    max = (a>b)?a:b;

    printf("your max : %d\n",max);
    return 0;
}