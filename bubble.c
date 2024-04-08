#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\nAfter Sorting:\n");
for(i=0;i<n;i++)
printf("\t %d",a[i]);
}
void main()
{
int a[5],n,i;
clrscr();
printf("\nEnter total number of data:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the value:");
scanf("%d",&a[i]);
}
printf("\nBefore Sorting\n");
for(i=0;i<n;i++)
printf("\t %d",a[i]);
bubble_sort(a,n);
getch();
}
