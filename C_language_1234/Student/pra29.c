
#include<stdio.h>
int main()
{
    char ch='y';

    int a,b;

    do
    {
        printf("enter express : ");
        scanf("%d,%d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);

        printf("do you want continue [y-n]: ");
        scanf("%c",&ch);
        scanf("%c",&ch);
    }
    while(ch=='y' || ch=='Y');

    printf("nikal lode...");

    return 0;
}