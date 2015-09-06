#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
	int a[max],i,j,temp,pos,lim;
	printf("scan the size of array");
	scanf("%d",&lim);
	printf("enter array elements");
	for(i=0;i<lim;i++)
	{
		scanf("%d",&a[i]);
		
	}
	 for(i=0;i<(lim-1);i++)
	 {
	 	pos=i;
	 	for(j=i+1;j<lim;j++)
	 	{
	 		if(a[pos]>a[j])
	 		pos=j;
	    }
	 		 if(pos!=i)
              {
              	temp=a[i];
              	a[i]=a[pos];
              	a[pos]=temp;
			  }
		 
	 }
	 printf("sorted array is \n");
	 for(i=0;i<lim;i++)
	 {
	 	 printf("%d,",a[i]);
	 }
	 getch();
}

