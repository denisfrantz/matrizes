#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3], i, j;
	int soma, si, sdp, sds, scol;
	
	si = 0;
	sdp = 0;
	sds = 0;

	printf ("MATRIZ\n======\n");
	
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf ("%d", &matriz[i][j]);
			if (matriz[i][j] % 2 != 0)
			{
				si = si + matriz[i][j];
			}
		}
	}
	system ("cls");
	printf ("MATRIZ\n======\n");
	
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf ("%d ", matriz[i][j]);
		}
		printf ("\n");
	}
	
	for (j = 0; j <=2; j++)
	{
		scol = 0;
		for (i = 0; i <= 2; i++)
		{
			scol = scol + matriz[i][j];
		}
		printf ("\nSoma da coluna %d: %d", j+1, scol);
	}
	printf ("\n\nSoma dos numeros impares: %d", si);
	
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			if (i == j)
			{
				sdp = sdp + matriz[i][j];
			}
			if (i + j == 2)
			{
				sds = sds + matriz[i][j];
			}
		}
	}
	printf ("\n\nSoma da diagonal principal: %d", sdp);
	printf ("\nSoma da diagonal secundaria: %d", sds);
	
	if (sdp == sds)
	{
		printf ("\n\nA soma da diagonal principal e igual a soma da secundaria");
	}
	else 
	{
		printf ("\n\nA soma da diagonal principal e diferente da soma da secundaria");
	}
	getch();
	
	return 0;
}
