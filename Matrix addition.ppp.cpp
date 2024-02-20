// write a program that display the sum of  two 2*2 matrix?

#include<>stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter the element for first matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("n\enter the element for second matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf(" %d\t",c[i][j]);
		}
	}
  return  0;
}
