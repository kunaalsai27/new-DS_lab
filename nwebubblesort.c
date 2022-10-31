#include <stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements in array are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if (a[j]>a[i])
			{
			    temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
	}
	printf("\nthe elements after sorting are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
