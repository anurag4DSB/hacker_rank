#include <stdio.h>

int	main()
{
	int n;
	scanf("%d", &n);
	long long sum;
	sum = 0;
	int arr[n];
	for(int arr_i = 0; arr_i < n; arr_i++)
	{
	  scanf("%d", &arr[arr_i]);
	}
	for(int arr_i = 0; arr_i < n; arr_i++)
	{
		sum += arr[arr_i];
	}
	printf("%lld", sum);
	return (0);
}
