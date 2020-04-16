#include<stdio.h>
#include<conio.h>
 int main()
 {
 int num1,num2;
 printf("enter the first number:");
 scanf("%d",&num1);
  printf("enter the second number:");
 scanf("%d",&num2);
 printf("lcm=%d",lcm(num1,num2));
 return 0;
}
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if (m%a==0 &&m%b==0)
	return m;
	else
	return lcm(a,b);
}
