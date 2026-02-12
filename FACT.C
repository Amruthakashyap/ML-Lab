#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,t=0;
long f=1;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
t=t+3;
f=f*i;
t=t+2;
}
printf("the factorial of %d is %ld",n,f);
printf("the total time taken is %d",t);
getch();
}