#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int temporada, episodio, temporadaTotal, episodioTotal;
	char continuar;
	
	do{
		printf("Quantas temporadas a série tem?\n");
		scanf("%d", &temporada);
		
		printf("Quantos episódios?\n");
		scanf("%d", &episodio);
		printf("\n");
		

		temporadaTotal = 1 + rand() % temporada;
		episodioTotal = 1 + rand() % episodio;
		
		printf("Temporada: %d", temporadaTotal);
		printf("\n");
		printf("Episódio: %d", episodioTotal);
		printf("\n");
		
		do{
			printf("\nContinuar? (S/N)\n");
			scanf(" %c", &continuar);
			if(continuar == 's' || continuar == 'S'){
				printf("\n\n");
				system("cls");
			}
		}while(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');
		
		if(continuar == 'N' || continuar == 'n'){
			return 0;
		}
	}while(continuar == 's' || continuar == 'S');
}
