#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,i,n,c;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i==0)
{
printf("\n 0");
}
else if(i==1)
{
printf("\n 1");
}
else
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
}
getch();
}