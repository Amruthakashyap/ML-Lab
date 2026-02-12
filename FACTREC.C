#include<stdio.h>
#include<conio.h>
int t;
long long fact(n)
{
long a;
if(n==0)
{
t=t+2;
return 1;
}
else
{
t=t+2;
a=n*fact(n-1);
return a;
}
}
void main()
{
int n;
clrscr();
printf("Enter the elements");
scanf("%d",&n);
printf("the factorial of a number is %lld\n",fact(n));
printf("the time complexity is %d",t);
getch();
}