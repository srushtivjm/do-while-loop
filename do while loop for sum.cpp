#include<stdio.h>
main()
{
	int a=1,n,sum;
	printf("Enter value of n=");
	scanf("%d",&n);
	
	do{
		printf("%d\n",a);
		sum=sum+a;
		a++;
		
	}while(a<=n);
	
	printf("Sum all alement=%d",sum);
}
