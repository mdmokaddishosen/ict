
#include<stdio.h>
main()
{
    int n,i,fact=1;
    printf("Enter a number :" );
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("factroial  %d! result is =%d",n,fact);

}
