#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3], i, j;
	int menor, maior;
	
	printf ("MATRIZ\n======\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf ("%d", &matriz[i][j]);
		}
	}
	system ("cls");
	printf ("MATRIZ\n======\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ", matriz[i][j]);
			if ((i == 0)&&(j == 0))
			{
				menor = matriz[i][j];
				maior = matriz[i][j];
			}
			else
			if (matriz[i][j] < menor)
			{
				menor = matriz[i][j]; 
			}
			if (matriz[i][j] > maior)
			{
				maior = matriz[i][j]; 
			}
		}
		printf ("\n");
	}
	printf ("\nMenor valor: &d", menor);
	printf ("\nMaior valor: &d", maior);
	
	return 0;
}
