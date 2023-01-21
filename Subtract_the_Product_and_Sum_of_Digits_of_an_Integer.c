#include<stdio.h>
int main()
{
    int i,n,r=0,m=0,j=1;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        r=r+m;
        j=j*m;
        n/=10;
        
    }
    printf("%d",(j-r));
}