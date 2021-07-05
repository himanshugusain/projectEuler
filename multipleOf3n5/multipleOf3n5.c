#include <stdio.h>

typedef unsigned long long ull;


ull multiplesOf3and5(ull number)
{
	ull sum=0,i;
	for(i=0;i<number;i++)
	{
		if (((0 == (i%3)) || (0 == (i%5))))
		{
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int test_cases;
	int test_num=1;

	printf("Enter number of test cases\n");
	scanf("%d",&test_cases);

	while(test_cases--)
	{
		printf("------------ Test %d -----------\n",test_num);
		ull number;
		printf("Enter the number \n");
		scanf("%lld",&number);
		printf("Input Number = %lld  Sum is = %lld\n",number,multiplesOf3and5(number));
		test_num++;
	}
}
