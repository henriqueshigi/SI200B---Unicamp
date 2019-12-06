//Este programa traduz os arquivos ".txt" criptografados com cifra de césar

//Importando as Bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Manipulacao de arquivos
FILE *sik;

//Declarando as variaveis
int input;

char c;
char chat_name[100];
char txt[] = ".txt";

//Declarando a funcao
void translate();

int main()
{
    int x = 1; //Variavel para fazer o loop

    while(x == 1) //Loop infinito, ate que o usuario aperte '0'
    {
        printf("\n****SHIGI CRIPTOCHAT TRANSLATOR****\n");
        printf("1: Traduzir uma Conversa\n");
        printf("2: Creditos\n");
        printf("0: Sair do Programa\n");
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
                printf("Digite o nome da conversa que deseja traduzir:\n ");
                      
                fgets(chat_name,101,stdin);
                chat_name[strlen(chat_name)-1] = '\0';

                strcat(chat_name, txt); //Para criar a extensao ".txt"

                translate();

                break;
            }

            case 2:
            {
                printf("\n__________________________________\n");
                printf("\n****CREDITS****\n");
                printf("AUTHOR: Henrique Bergamo Shigihara\n");
                printf("\n__________________________________\n");

                break;
            }

            default:
            if(input > 2)
            {
                printf("\n****Opcao Invalida, tentar novamente****\n");
            }
        }
    }

    return 0;
}

void translate()
{
	sik = fopen(chat_name, "r");
    if(sik == NULL)
    {
        printf("Nao foi possivel abrir o arquivo\n\n");
        return; 
    }

    c = fgetc(sik);
    while(c != EOF)
    {
        //Números correspondentes a tabela ASCII
        if(c != 32 && c != '\n')
        {
            c -= 5;
        }
        if((c > 90) && (c < 97) && (c != 32)  && (c != '\n'))
        {               
            c += 26;
        }
        else if((c > 122) && (c != 32)  && (c != '\n'))
        {
            c += 26;
        }

        printf("%c", c); 
        c = fgetc(sik); 
    }

    fclose(sik);
    printf("\n");
}
