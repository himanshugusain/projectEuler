#include <stdio.h>

typedef unsigned long long ull;


ull fiboEvenSum(ull number)
{

	ull sum=0,curr_val=0;
	ull curr_minus_1=2;
	ull curr_minus_2=1;

	while(curr_val <= number)
	{
		curr_val=curr_minus_1 + curr_minus_2;
		curr_minus_2=curr_minus_1;
		curr_minus_1=curr_val;

		if ( 0 == (curr_val % 2))
		{
			sum += curr_val;
		}
	}

	return sum+2;

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
		printf("Input Number = %lld  Sum is = %lld\n",number,fiboEvenSum(number));
		test_num++;
	}
}
