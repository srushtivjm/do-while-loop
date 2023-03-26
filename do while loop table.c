#include<stdio.h>
main()
{
	int a=1,n;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	do{
		printf("%dx%d=%d\n",n,a,n*a);
		a++;
		
	}while(a<=10);
	
}
