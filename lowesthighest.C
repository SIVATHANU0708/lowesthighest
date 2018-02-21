#include<stdio.h>
int main()
{
int n,a[10],i,j,temp;
printf("enter the no of element:");
scanf("%d",&n);
printf("enter the element:%d",n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d\t%d",a[1],a[i-1]);
return 0;
}
