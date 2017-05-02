#include <stdio.h>

int	main()
{
  int n;
  int sum;
  int sum_d1;
  int sum_d2;
  sum_d1 = 0;
  sum_d2 = 0;
  scanf("%d", &n);
  int a[n][n];
  for (int a_i = 0; a_i < n; a_i++)
    {
      for (int a_j = 0; a_j < n; a_j++)
	{
	  scanf("%d", &a[a_i][a_j]);
	  if (a_i == a_j)
	    {
	      sum_d1 += a[a_i][a_j];
	    }
	  if (a_i + a_j == (n - 1))
	    {
	      sum_d2 += a[a_i][a_j];
	    }
	}
    }
  sum = sum_d1 - sum_d2;
  if (sum < 0)
    sum *= -1;
  printf("%d", sum);
  return (0);
}
