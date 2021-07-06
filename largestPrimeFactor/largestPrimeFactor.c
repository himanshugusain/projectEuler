#include <stdio.h>

typedef unsigned long long ull;


ull largestPrimeFactor(ull number)
{
	ull rem,i=2,largest=1;

	while(number != 1)
	{
		rem=number%i;
		if (rem == 0)
		{
			number=number/i;
			if (i > largest)
			{
				largest=i;
			}
			i=2;
		}else
		{
			i++;
		}
	}

	return largest;

}

int main()
{
	int test_cases;
	int test_num=1;
	ull number;

	printf("Enter number of test cases\n");
	scanf("%d",&test_cases);

	while(test_cases--)
	{
		printf("------------ Test %d -----------\n",test_num);
		printf("Enter the number \n");
		scanf("%lld",&number);
		printf("Input Number = %lld  largest prime factor is = %lld\n",number,largestPrimeFactor(number));
		test_num++;
	}
}
