#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
int main(int argc, char *argv[]){
	int opcao; //A opção escolhida
	int quantidade, i; //Cada tipo de case
	int quantos;//Quantos dados serão rolados.
	int somar, soma1,dois;
	setlocale(LC_ALL, "Portuguese");
	system("color 3");
	printf("Bem-vindo ao rolador de dado, por favor selecione uma das opções abaixo.\n");
	printf("1- Rolar dado de 6 dados.\n");
	printf("2- Rolar dado de 20 lados.\n");
	printf("3- Rolar dado de 4 lados.\n");
	printf("4- Rolar dado de 8 lados.\n");
	printf("5- Rolar dado de 12 lados.\n");
	printf("6- Rolar dado de 10 lados.\n");
	printf("7- Somar dados rolados.\n");
	printf("Digite 9 para sair.\n");
	scanf("%d", &opcao);
	system("cls");
    srand(time(NULL));

	switch(opcao) {
		case 9:
		    system("cls");
			printf("Obrigado por me usar, volte quando quiser.\n");
			break;
		case 2:
		printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
		scanf("%d", &quantidade);

		if(quantidade==1){

			system("cls");
			printf("O resultado do dado foi: %d", rand() %20+1);
		}
		else{
			printf("Quantos dados você gostaria de rolar?\n");
			scanf("%d", &quantos);
			system("cls");
				for(i = 0; i<quantos; i++){
					printf("Os resultados são: %d ", rand() % 20+1);
				}
		}
		break;

		case 1:
		printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
		scanf("%d",&quantidade);
		if(quantidade==1){
			srand(time(NULL));
			system("cls");
			printf("O resultado do dado é: %d", rand() % 6+1);
		}
		else{
			printf("Quantos dados você gostaria de rolar?\n");
			scanf("%d",&quantos);
			system("cls");
				for(i = 0; i<quantos; i++){
					printf("Os resultados são: %d ", rand()%6+1);
				}
		}
		break;

		case 3:
			printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
			scanf("%d",&quantidade);
			if(quantidade==1){
                system("cls");
				printf("O resultado do dado é: %d", rand() %4+1);
			}
			else{
				printf("Quantos dados você gostaria de rolar?\n");
				scanf("%d",&quantos);
					for(i=0; i<quantos; i++){
                        system("cls");
                        printf("Os resultados são: %d ", rand() %4+1);
					}
			}
			break;
        case 4:
            printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
            scanf("%d", &quantidade);
            if(quantidade==1){
                system("cls");
                printf("O resultado do dado é: %d", rand() %8+1);
            }
            else{
                printf("Quantos dados você gostaria de rolar?\n");
                scanf("%d", &quantos);
                    for(i=0; i<quantos; i++){
                        system("cls");
                        printf("O resultado do dado é: %d ", rand() %8+1);
                    }
            }
            break;
        case 5:
            printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
            scanf("%d", &quantidade);
            if(quantidade==1){
                system("cls");
                printf("O resultado do dado é: %d", rand() %12+1);
            }
            else{
                printf("Quantos dados você gostaria de rolar?\n");
                scanf("%d", &quantos);
                system("cls");
                    for(i=0; i<quantos; i++){
                        printf("O resultado do dado é: %d ", rand() %12+1);

            }
	}break;
        case 6:
            printf("Você gostaria de rolar 1 dado ou mais de um?\n(1- Apenas um dado, 2- Mais de um dado)\n");
            scanf("%d", &quantidade);
            if(quantidade==1){
                system("cls");
                printf("O resultado do dado é: %d", rand() %10+1);
            }
            else{
                printf("Quantos dados você gostaria de rolar?\n");
                scanf("%d", &quantos);
                system("cls");
                    for(i=0; i<quantos; i++){
                        printf("Os resultados do dado é: %d ", rand() %10+1);

                    }
            }break;
        case 7:
            printf("Quantos dados você gostaria de somar?\n(1- Apenas 2 dados, 2- Mais de 2 dados)\n");
            scanf("%d", &quantidade);
            if(quantidade==1){
                system("cls");
                    for(i=0; i<2; i++){
                        printf("Quais os dois resultados?\n");
                        scanf("%d",&x);
                        soma1 = x + y;
                    }
            }

}}
