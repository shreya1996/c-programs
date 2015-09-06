#include<conio.h>
#include<stdio.h>
#define max 100
void main()
{
	int a[max],lim,temp,i,j;
	printf("enter the limit of array");
	scanf("%d",&lim);
	printf("enter array elements");
	for(i=0;i<lim;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<lim;i++)
	{
		for(j=0;j<lim;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted array using bubble sort is\n");
	for(i=0;i<lim;i++)
	{
		printf("%d ",a[i]);
	}
getch();
}
