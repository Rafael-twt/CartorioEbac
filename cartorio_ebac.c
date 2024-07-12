#include <stdio.h> // biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> // biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das strings

int registro()
{
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   
   printf("digite o cpf a ser cadastrado: ");
   scanf("%s", cpf);
   
   strcpy(arquivo,cpf); // responsavel por copiar os valores das strings
   
   FILE *file; // cria o arquivo 
   file = fopen(arquivo, "w"); // cria o arquivo
   fprintf(file,cpf); // salvo o arquivo 
   fclose(file); // fecha o arquivo
   
   file = fopen(arquivo,"a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   
   printf("Digite o cargo a ser cadastrado: ");
   scanf("%s",cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   system("pause");
   
    
}
int consulta()
{
	setlocale(LC_ALL,"Portuguese");
	
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel localizar o arquivo!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	
	system("pause");
	
	
	
	
	
	
	
}
int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	fclose(file);
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
	   else
	   {
	   	
	   		printf("\nUsu�rio deletado com sucesso\n\n");
	   		system("pause");
	   }
	   
	   	
	   		fclose(file);
		   
		   
		   
		
	   
	    	
}
int main()

{
	int opcao=0;  //Defininto variavel
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
	
	
	  setlocale(LC_ALL,"Portuguese");  // Definindo a linguagem 
	
	  printf("### Cart�rio da EBAC ###\n\n"); // Inicio do menu
	  printf("Escolha a op��o desejada do menu:\n\n");
	  printf("\t1 Registrar nome\n");
	  printf("\t2 Consultar nomes\n");
	  printf("\t3 Deletar nomes\n");
	  
	  printf("Op��o:"); // Fim da sele��o
	
	  scanf("%d", &opcao); // Armazenando a escolha do usuario
	
	  system("cls");
	   
	  switch(opcao)
	  {
	  	case 1:
		registro();
    	break;
    		
    	case 2:
    	consulta();
	    break;
	    
	    case 3:
		deletar();
	    break;
	    
	    
	    default:
	   	printf("Essa op��o n�o esta disponivel\n");
    	system("pause");
    	break;
	    	
	     	
			
	  }
	
	   
 }
}
