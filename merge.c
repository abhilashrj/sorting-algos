//merge sort
#include<stdio.h>
void merge(int a[],int p,int q,int r);
void merge_sort(int a[],int p,int r);
int main()
{
	int len,i,a[500];
	scanf("%d",&len);
	for(i=0;i<len;i++)
	scanf("%d",&a[i]);
	merge_sort(a,0,len-1);
	for(i=0;i<len;i++)
	printf("%d ",a[i]);
	return 0;
}
void merge(int a[],int p,int q,int r)
{

	int temp[r-p+1];
	int i,j,k,m;
	j=p;m=q+1;
	for(i=0;j<=q&&m<=r;i++)
	{
		if(a[j]<=a[m])
		{
			temp[i]=a[j];
			j++;
		}
		else
		{
			temp[i]=a[m];
			m++;
		}
	}
	if(j>q)
	{
		for(k=m;k<=r;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=j;k<=q;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	for(k=p,i=0;k<=r;k++,i++)
	a[k]=temp[i];
}
void merge_sort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
	
		q=((p+r)/2);
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}


