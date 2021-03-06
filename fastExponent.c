#include <stdio.h>
#include<math.h>

long long int ExpoRecur(int a, int b)// everytime the function is called, the exponent is cut down in half
{
	if (b == 1)
	{
		return a;
	}
	else
	{
		if (b % 2 == 0)
		{
			long long int i = ExpoRecur(a, b / 2); // For an even number
			return i*i;
		}
		else
		{
			long long int i = ExpoRecur(a, (b - 1) / 2);// For an odd number
			return i*i*a;
		}
	}
	
}
int main()
{
	int a;
	int b;
	printf("For a^b , please enter the first integer.\n");
	scanf("%d",&a);
	printf("Please enter the second integer.\n");
	scanf("%d",&b);
	printf("The result of a^b is: %d\n",ExpoRecur(a, b)); 
	return 0;
}
