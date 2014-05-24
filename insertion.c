//insertion sort
#include<stdio.h>
main()
{
	int key,i,j,a[500],len;
	scanf("%d",&len);
	for(j=0;j<len;j++)
	scanf("%d",&a[j]);
	for(j=1;j<len;j++)
	{
		key=a[j];
		i=j-1;
		while(i>=0&&a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
			a[i+1]=key;
		}
		
	}
	for(j=0;j<len;j++)
	printf("%d\t",a[j]);
}
