#include<stdio.h>
int main()
{

    int n,i,j,start,end;


    printf("Enter start-end : ");
    scanf("%d-%d",&start,&end);

    for(j=start;j<=end;j++)
    {

        n = j;
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);
        }

        printf("-----------------------\n");
    }
    return 0;
}