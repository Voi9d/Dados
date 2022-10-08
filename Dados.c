#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
int main(int argc, char *argv[]){
	int opcao; //A opção escolhida
	int quantidade, i; //Cada tipo de case
	int quantos;//Quantos dados serão rolados.
	setlocale(LC_ALL, "Portuguese");	
	printf("Bem-vindo ao rolador de dado, por favor selecione uma das opções abaixo.\n");
	printf("1- Rolar dado de 6 dados.\n");
	printf("2- Rolar dado de 20 lados.\n");
	printf("3- Rolar dado de 4 lados.\n");
	printf("4- Rolar dado de 8 lados.\n");
	printf("5- Rolar dado de 12 lados.\n");
	printf("6- Rolar dado de 10 lados.\n");
	printf("\n");
	printf("7- Somar dados rolados.\n");
	printf("Digite 9 para sair.\n");
	scanf("%d", &opcao);
	system("cls");
	
	switch(opcao) {
		case 9:
			printf("Obrigado por usar-me, volte quando quiser.\n");
			break;
		case 2:
		printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
		scanf("%d", &quantidade);
		
		if(quantidade==1){
			srand(time(NULL));
			system("cls");
			printf("O resultado do dado foi: %d", rand() %20+1);
		}
		else{
			printf("Quantos dados você gostaria de rolar?\n");
			scanf("%d", &quantos);
				for(i = 0; i<quantos; i++){
					srand(time(NULL));
					printf("Os resultados são: %d ", rand() % 20);
				}
		}
		break;
		
		case 1:
		printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
		scanf("%d",&quantidade);
		if(quantidade==1){
			srand(time(NULL));
			printf("O resultado do dado é: %d", rand() % 6+1);
		}
		else{
			printf("Quantos dados você gostaria de rolar?\n");
			scanf("%d",&quantos);
				for(i = 0; i<quantos; i++){
					srand(time(NULL));
					printf("Os resultados são: %d ", rand()%6);
				}
		}
		break;
		
		case 3:
			printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
			scanf("%d",&quantidade);
			if(quantidade==1){
				srand(time(NULL));
				printf("O resultado do dado é: %d", rand() %4+1);
			}
			else{
				printf("Quantos dados você gostaria de rolar?\n");
				scanf("%d",&quantos);
					for(i=0; i<quantos; i++){
						srand(time(NULL));
						printf("Os resultados são: %d ", rand() %4+1);
					}
			}
			break;
	}
}
