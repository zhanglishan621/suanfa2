#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    int a,b,i,j;
    int s[100]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=1;j<=n;j++)
        {
            if(fabs(a-j)<=b)
                s[j-1]=i+1;
        }
    }
    for(j=0;j<n;j++)
        printf("%d ",s[j]);
    return 0;
}
