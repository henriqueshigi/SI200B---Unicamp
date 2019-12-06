//Henrique Bergamo Shigihara RA 236548
//2ºSemestre 2019 - SI200
//ENUNCIADO: PJ2
//Construir uma biblioteca de funções para uma aplicação de troca de mensagens
//Esse programa criptografa as mensagens (com cifra de cesar) que são gravadas nos arquivos txt, ou seja, so eh possivel ve-las atraves
//do programa

#include "criptochat.h" //Incluindo a minha biblioteca

int main() //Cabeçalho da funçao principal
{
	int x = 1; //Variavel para fazer o loop

	while(x == 1) //Loop infinito, ate que o usuario aperte '0'
	{
		if(h == 0)
		{
			printf("\n__________________________\n");
		}
		printf("\n****SHIGI CRIPTOCHAT****\n");
		printf("1: Entrar em uma Conversa\n");
		printf("2: Deletar uma Conversa\n");
		printf("3: Cadastrar-se\n");
		printf("4: Creditos\n");
		printf("0: Sair do Programa\n");
		if(h == 0)
		{
			printf("__________________________\n");
			h++;
		}
		scanf("%d", &input);
		getchar(); //Pra não pular um case devido ao \n;
		
		switch(input)
		{
			case 0:
			{
				x = 0;
				break;
			}

			case 1:
			{
				one();		

				break;
			}

			case 2:
			{
				two();

				break;

			}

			case 3:
			{
				three();
				
				break;
			}

			case 4:
			{
				four();
				
				break;
			}
			
			default:
			if(input > 4)
			{
				printf("\n****Opcao Invalida, tentar novamente****\n");
			}
				
		}

	}

	return 0;
}