#include<stdio.h>
void rotate(int a[],int d,int n);
void leftrotate(int a[],int n);
void rotate(int a[],int d,int n)
{
    int i;
    for(i=0;i<d;i++)
    {
        leftrotate(a,n);
    }
}
void leftrotate(int a[],int n)
{
    int i,temp;
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
        
    }
    a[i]=temp;
    
}
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rotate(a,3,n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}


