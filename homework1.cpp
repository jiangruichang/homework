#include <cstdio>
#include <cstdlib>
#include <cstring>
int main()
{
  int f[10000],a[10000];
  int max=0;
  memset(f,0,sizeof(f));
  memset(a,0,sizeof(a));
  int i,j,k,n;
  scanf("%d",&n);
  for (i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for (i=1;i<=n;i++)
  {
    f[i]=f[i-1]+a[i];
    if (f[i]<0) f[i]=0;
    if (f[i]>max) max=f[i];
  }  
  printf("%d\n",max);
}
