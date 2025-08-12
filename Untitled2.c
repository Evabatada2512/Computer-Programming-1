#include<stdio.h>
int main()
{
printf("Enter three numbers\n");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is greater number");
}
if(b>c)
{
printf("b is greater number");
}
else
{
printf("c is greater number");
}
return 0;
}
