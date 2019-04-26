#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,digit=0,rev=0;
	printf("Enter the number \n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	 digit=n%10;
	 n=n/10;
	 rev=rev*10+digit;
    }
	if (m==rev)
	{
		printf("The number %d is a palindrome",n);
	}
	else
	 printf("The number %d is not palindrome",n);
	getch();
}

