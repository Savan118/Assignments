//WAP to print the sum of first and last digit

#include<stdio.h>
main()
{
	int n,FIRST,LAST,sum=0;
	
	printf("Enter the value::");
	scanf("%d",&n);
	
	LAST=n%10;  //Go to the last digit
		
	while(n>=10)
	{
		n/=10;	//start from last digit
	}
	FIRST=n; 
	sum=FIRST+LAST;

	printf("Sum of First and Last digit = %d",sum);
}

