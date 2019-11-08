#include<stdio.h>
#include<stdlib.h>
int fact (int n);
int main()
{
	int n,r,i=0,j,ans,bincoeff,a[10],b[10],c[10];
	do
	{
		printf("Enter the value of n and r");
		scanf("%d %d",&n,&r);
		a[i]=n;
		b[i]=r;
		bincoeff=fact(n)/(fact(r)*fact(n-r));
		c[i++]=bincoeff;
		printf("Do you want to continue");
		fflush(stdin);
		scanf("%d",&ans);
	}
	while(ans=1);
	printf("\n \t Bin coefficient \n");
	for(j=0;j<i;j++)
	printf("%d \t %d \t %d \n",a[j],b[j],c[j]);
}
int fact (int n)
{
	if(n==0)
	return (1);
	else
	return (n*fact(n-1));
}
