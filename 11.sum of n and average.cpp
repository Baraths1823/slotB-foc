#include<stdio.h>
int main()
{
	int n,i,num,sum=0;
	printf("number of terms=");
	scanf("%d",&n);
	printf("Enter %d numbers :\n",n);
	for(i=1;i<n;i++)
	{
		scanf("%d ",&num);
		sum=sum+num;
	}
	printf("Sum = %d \n",sum);
	printf("Average = %d",sum/n);
	return 0;
}

