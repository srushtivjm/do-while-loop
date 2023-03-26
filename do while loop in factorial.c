#include<stdio.h>
main()
{
	int fact=1,n;
	printf("Enter value=");
	scanf("%d",&n);
	
	do{
		fact=fact*n;
		n--;
		
	}while(n>=1);
	printf("factorial=%d",fact);
}
