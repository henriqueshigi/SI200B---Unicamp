//Henrique Bergamo Shigihara RA 236548
//2ºSemestre 2019 - SI200
//PJ5 - Máquinas de Estado 

//Incluindo a biblioteca
#include <stdio.h> //Padrao de entrada e saida

//Declarando as variaveis
int x = 1;
int y = 1;

//Input do usuário;
int input;
int input2; 

int main() //Cabeçalho da funçao principal
{

	while(x == 1) //Loop infinito, ate que o usuario aperte '0'
	{
		printf("\nSTATUS: DESLIGADA\n");
		printf("****SHIGI SMART TV****\n");
		printf("1: LIGAR\n");
		scanf("%d", &input);
		getchar(); //Pra não pular um case devido ao \n;
		
		switch(input)
		{
			case 1:
			{
				y = 1;
				while(y == 1)
	            {
	            	printf("\nSTATUS: LIGADA\n");
	            	printf("****SELECIONAR MODO****\n");
	            	printf("1: CANAIS DIGITAIS\n");
					printf("2: YOUTUBE\n");
					printf("3: NETFLIX\n");
					printf("0: DESLIGAR\n");
					scanf("%d", &input2);
					getchar(); //Pra não pular um case devido ao \n;
					switch(input2)
					{
						case 0:
						{
							y = 0;
							break;
						}

						case 1:
						{
							printf("\n****EXIBINDO CANAIS DIGITAIS****\n");
							
						    break;
						}

						case 2:
						{
							printf("\n****ACESSANDO O YOUTUBE****\n");
							
						    break;
						}

						case 3:
						{
							printf("\n****ACESSANDO O NETFLIX****\n");
							
						    break;
						}

						default:
						if(input2 > 3)
						{
							printf("\n****Opcao Invalida, tentar novamente****\n");
						}
					}
				}
			}

			default:
			if(input != 1)
			{
				printf("****Opcao Invalida, tentar novamente****\n");
			}
		}
	}
	
	return 0;
}
