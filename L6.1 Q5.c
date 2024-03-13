#include<stdio.h>

main()
{
	int i,n;
	printf("Enter value I=");
	scanf("%d",&i);
	printf("Enter value N=");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		if(n%4==0)
		{
			printf("%d\n",n);
		}
		n--;
	}
		
}