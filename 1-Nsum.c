#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter the value of n :");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
    }

    printf("%d",sum);
    return 0;

}
