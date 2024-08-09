#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3], i, j;

	i = 0;
	printf ("MATRIZ\n======\n");
	
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			scanf ("%d", &matriz[i][j]);
			j++;
		}
		i++;
	}
	system ("cls");
	i = 0;
	printf ("MATRIZ\n======\n"); 
	
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf ("%d ", matriz[i][j]);
			j++;
		}
		printf ("\n");
		i++;
	}
	
	return 0;
}
