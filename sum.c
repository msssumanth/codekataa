
#include <stdio.h>
int main()
{
    int n,k,a[10],i,s=0;
    scanf("%d ",&n);
    scanf("%d ",&k);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=k-1;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
    

    return 0;
}
