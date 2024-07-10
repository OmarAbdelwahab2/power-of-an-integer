#include<stdio.h>
void main(void)
{
	while (1)
	{
		int base = 0, exponent = 0; double  result = 1.0;
		printf(" enter the base and the exponent respectivly");
		scanf_s(" %d %d", &base, &exponent);
		if (exponent >= 0)
		{
			for (int i = 0; i < exponent; i++)
			{
				result *= base;
			}
			printf(" the answer of %d power %d is %.0f\n", base, exponent, result);
		}
		else
		{
			for (int i = 0; i < -exponent; i++)
				result *= (1.0 / base);


			printf(" the answer of %d power %d is %.10f\n", base, exponent, result);
		}
	}
}