//MINHA BIBLIOTECA

#ifndef _SHIGILIB_H_
#define _SHIGILIB_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Manipulacao de arquivos
FILE *archive;
FILE *sik;

//Declarando as variaveis
char chat_name[100];
char user[100];
char user0[100];
char password[100];
char message[100];
char auth[100];
char txt[] = ".txt";
char c;

int z = 1;
int input;
int i, j;
int cadastro = 0;
int answer = 0;
int zz = 1;
int h = 0;

void update();
void a();

void one()
{
	if(cadastro == 0)
    {
    	printf("\nCADASTRE-SE PRIMEIRO!\n");
    	return;
    }
    
    else
    {
        printf("\nOla %s! Insira sua senha para continuar\n", user0);
        fgets(auth,101,stdin);
    
        if(strcmp(auth, password) == 0)
        {
            printf("Digite o nome da conversa:\n ");
            h = 0;
                  
            fgets(chat_name,101,stdin);
            chat_name[strlen(chat_name)-1] = '\0';

            strcat(chat_name, txt); //Para criar a extensao ".txt"

            archive = fopen(chat_name,"a+");       
            
            fprintf(archive,"\n%sJSYWTZ sf htsajwxf\n", user);
            //ENTROU na conversa
            
            fclose(archive);

            update();

                z = 1;
                while(z == 1)
                {
                    if(h == 0)
                    {
                        printf("\n__________________________\n");
                    }
                    printf("****SHIGI CRIPTOCHAT****\n");
                    if(h == 0)
                    {
                        printf("Voce esta na conversa: %s\n", chat_name);
                    }
                    printf("1: Atualizar Conversa\n");
                    printf("2: Enviar Mensagem\n");
                    printf("0: Sair da Conversa\n");
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
                            z = 0;
                            archive = fopen(chat_name,"a+");       
                            fprintf(archive,"\n%sXFNZ if htsajwxf\n", user);
                            //SAIU da conversa
                            
                            fclose(archive);
                            break;
                        }

                        case 1:
                        {
                            update();       
                            break;
                        }

                        case 2:
                        {
                            a();       
                            break;
                        }
                        
                        default:
                        if(input > 1)
                        {
                            printf("****Opcao Invalida, tentar novamente****\n");
                        }        
                    }
                }
        }
          
        else
        {
            zz = 1;
            while(zz == 1)
            {
                printf("\n_________________\n");
                printf("\nEsqueceu a senha?\n");
                printf("1 - Redefinir senha\n");
                printf("0 - Sair\n");
                printf("_________________\n");
                scanf("%d", &answer);
                if(answer == 1)
                {
                    printf("Insira uma Senha\n");
                    getchar();
                    fgets(password,101,stdin);
                    printf("\nSenha REDEFINIDA com sucesso!\n");
                    break;
                }
                else if(answer == 0)
                {
                    zz = 0;
                    break;
                }
            } 
        }
    }
}

void two()
{
	if(cadastro == 0)
    {
    	printf("\nCADASTRE-SE PRIMEIRO!\n");
    	return;
    }
    
    else
    {
        printf("\nOla %s! Insira sua senha para continuar\n", user0);
        fgets(auth,101,stdin);
        
        if(strcmp(auth, password) == 0)
        {
            printf("Qual conversa voce quer deletar?\n ");
                  
            fgets(chat_name,101,stdin);
            chat_name[strlen(chat_name)-1] = '\0';

            strcat(chat_name, txt); //Para criar a extensao ".txt"
            
            remove(chat_name);
            printf("\n______________________________\n");
            printf("\nConversa DELETADA com Sucesso!\n");
            printf("______________________________\n");
        }

        else
        {
            while(zz == 1)
            {
                printf("\n_________________\n");
                printf("\nEsqueceu a senha?\n");
                printf("1 - Redefinir senha\n");
                printf("0 - Sair\n");
                printf("_________________\n");
                scanf("%d", &answer);
                if(answer == 1)
                {
                    printf("Insira uma Senha\n");
                    getchar();
                    fgets(password,101,stdin);
                    printf("\nSenha REDEFINIDA com sucesso!\n");
                    break;
                }
                
                else if(answer == 0)
                {
                    zz = 0;
                    break;
                } 
            }        
        }
    }
}

void three()
{
	if(cadastro == 0)
    {
        printf("\n________________________\n");
        printf("\n****AREA DE CADASTRO****\n");
        printf("Insira um Username\n");
        fgets(user,101,stdin);
        printf("Insira uma Senha\n");
        fgets(password,101,stdin);
        printf("________________________\n");
        
        char clean[101];
        strcpy(clean, user);
      
        for(i = 0; clean[i] != '\0'; i++)
        {
            //Se for inserida uma letra maiscula o programa a torna minuscula
            if(clean[i] >= 'a' && clean[i] <= 'z' && clean[i] != '\n')
            {                
                clean[i] -= 32;
            }
            if(clean[i] == '\n')
            {                
                clean[i] = ' ';
            }
    }

    strcpy(user, clean);

    printf("\nOla %s! Seu cadastro foi feito com sucesso!\n", user);

    //Criptografar o user!
    char cod[102];
    strcpy(user0, user);
    strcpy(cod, user);
    for(j = 0; cod[j] != '\0'; j++)
    {
        //Números correspondentes a tabela ASCII
        if(cod[j] != 32 && cod[i] != '\n')
        {
            cod[j] += 5;
        }
        if((cod[j] > 90) && (cod[j] < 97) && (cod[j] != 32)  && (cod[i] != '\n'))
        {               
            cod[j] -= 26;
        }
        else if((cod[j] > 122) && (cod[j] != 32)  && (cod[i] != '\n'))
        {
            cod[j] -= 26;
        }
    }
    strcpy(user, cod);
    //

    cadastro = 1;
    }
    
    else if(cadastro == 1)
    {
        zz = 1;
        while(zz == 1)
            {
                printf("\n_______________________\n");
                printf("\nVoce ja esta cadastrado\n");
                printf("Deseja mudar seu Username?\n");
                printf("1 - SIM\n");
                printf("0 - NAO\n");
                printf("_______________________\n");
                scanf("%d", &answer);
                getchar();
                if(answer == 1)
                {
                    cadastro = 0;
                    three();
                    break;
                }
                
                else if(answer == 0)
                {
                    zz = 0;
                    break;
                }

                else if(answer > 1)
                {
                    printf("\n****Opcao Invalida, tentar novamente****\n");
                } 
            }  
    }
}

void four()
{
    printf("\n__________________________________\n");
    printf("\n****CREDITS****\n");
    printf("AUTHOR: Henrique Bergamo Shigihara\n");
    printf("\n__________________________________\n");
}


//Para ver as novas mensagens
void update()
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

//Append
void a()
{
	archive = fopen(chat_name,"a+");       
    printf("Digite a mensagem que deseja enviar: ");
                  
    fgets(message,101,stdin);
    
        //Criptografar a msg!
        char cod[102];
        strcpy(cod, message); //a string 'message' é copiada para 'cod'
        for(j = 0; cod[j] != '\0'; j++)
        {
            //Números correspondentes a tabela ASCII
            if(cod[j] != 32 && cod[i] != '\n')
            {
                cod[j] += 5;
            }
            if((cod[j] > 90) && (cod[j] < 97) && (cod[j] != 32)  && (cod[i] != '\n'))
            {               
                cod[j] -= 26;
            }
            else if((cod[j] > 122) && (cod[j] != 32)  && (cod[i] != '\n'))
            {
                cod[j] -= 26;
            }
        }
        strcpy(message, cod);
        // 
         
    fprintf(archive,"\n %sinlnytz?\n %s", user, message);
    //digitou:
           
    fclose(archive);

    update();
}

#endif
