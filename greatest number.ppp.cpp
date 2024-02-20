// write a program that accepts five number in array and dispay the greatest among it?

#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("enter any number\n" );
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=4;j++)
	{
		if(a[0]<a[j])
		a[0]=a[j];
	}
	printf("the greatest number is %d",a[0]);
  return  0;
}
