#include <conio.h>
#include <stdio.h>
#include<math.h>

int main()
{
	
	int menu;
	
	printf("Digite um numero de 1 a 15: ");
	scanf("%d", &menu);
	fflush(stdin);
	
	
	while(menu > 0 && menu <= 15)
	{
		
		switch(menu){
			
			
			case 1:
				// impar // par
				{ printf("Programa para dizer se um numero eh par ou nao\n");
						int par;
						printf("Digite um numero: \n");
						scanf("%d",&par);
						
						if( par % 2 == 0){
							printf("O numero e par\n");
						}
						else
							printf("O numero e impar\n");
					break;	
				}
			
			case 2:
				//oh potencia
				{ 
				
					printf("Digite apenas numeros e iremos exibir o resultado da potencia em notacao cientifica \n");
						float a;
						int b ;
						float c;
						
						printf("Digite um numero: \n");
						scanf("%f",&a);
						printf("Digite outro numero: \n");
						scanf("%d",&b);
						
						c = (float)pow(a,b);
						printf(" O valor da potencia e': %e\n",c);
					break;
				}
			case 3: //essa e raiz
				
				{ 
				
					printf("Digite apenas numeros e iremos exibir o resultado da raiz em notacao cientifica\n");
						float x;
						int y ;
						float z ;
						
						printf("Digite um valor: \n");
						scanf("%f",&x);
						printf("Digite outro valor: \n");
						scanf("%d",&y);
						
						z = (float)pow(x,1.0/y);
						printf("O valor da raiz quadrada e': %e",z);
					break;
				}
			
			case 4:
				
				{ 
					
					printf(" Esse e um ano bissexto ou nao\n");
						int ano;
						
						printf("Digite o ano:\n");
						scanf("%d",&ano);
						
						if ( ano % 4 == 0){
							printf("Esse ano e' bissexto\n");
						}
						else
							printf("Esse ano nao e' bissexto!\n");
					break;
				
				}
			
			case 5:
					{ 
					
						printf(" A media ponderada de um aluno\n");
						float prova1,prova2,prova3,media;
						
						printf(" Digite a primeira nota:\n");
						scanf("%f",&prova1);
						
						printf(" Digite a segunda nota:\n");
						scanf("%f",&prova2);
						
						printf(" Digite a terceira nota:\n");
						scanf("%f",&prova3);
						
						media = ((prova1*1)+(prova2*1)+(prova3*2))/4;
						printf(" A media das notas e :%2.f",media);
						
							if ( media >= 6){
							printf(" - O aluno esta aprovado!\n");
							}
							else
							printf(" - O aluno esta reprovado!");
						
						break;
					}
				
			
			case 6:
				
					{ 
					
						printf("Programa que ler duas nota do aluno e se for valida exibe na tela\n");
						float nota1, nota2, medianotas;
						
						do{
							printf(" Digite a primeira nota:\n");
							scanf("%f",&nota1);
						
							if(nota1 < 0 || nota1 > 10){
							printf(" Sua nota nao e valida!\n");
							}
							
						}while(nota1 < 0 || nota1 > 10);
						
						do{
							printf(" Digite a segunda nota:\n");
							scanf("%f",&nota2);
							
							if(nota2 < 0 || nota2 > 10){
							printf(" Sua nota nao e valida!\n");
							}
							
						}while(nota2 < 0 || nota2 > 10);
						
						medianotas = (nota1+nota2)/2;
						printf(" A media valida e %2.f",medianotas);
						
						break;
					
					}
				
			case 7:
				
				{ 
					printf(" O fatorial de um numero\n"); 
						int num,fat;
						printf("\nDigite um numero:\n");
						scanf("%d",&num);
							for(fat = 1; num > 1 ; num --){
							fat = fat * num;                        
							}
							printf("\nO fatorial e %d",fat);
					
					break;
				}
				
			case 8:
				
				{ 		
			
					printf("Programa para dizer se o numero eh primo ou nao\n");
						int numero,div;
						int resultado = 0;
						printf("\nDigite um numero:\n");
						scanf("%d",&numero);
							for( div = 2; div <= numero/2; div++){  
								if(numero % div == 0){              
									resultado++;
								}
							}
						if( resultado == 0){               
							printf("%d e um numero primo!\n",numero);
						}else{
							printf("%d nao e um numero primo!\n",numero);
							}		
					break;		
				}
				
			case 9: 
				printf("Everton Lucas Gomes Silva: \n");
				int matricula = 1920026807;
				printf("matricula %2x\n",matricula,matricula);
				break;	
				
				
			
			
		case 10:
					{ 
					
					printf("Programa para dizer a soma fibonacci de um numero\n");
						int fibn, i , soma, fib1 = 1 , fib2 = 1;
						printf("Digite um numero:\n");
						scanf("%d",&fibn);
							for(i = 3; i <= fibn; i++){
								soma = fib1+fib2;
								fib1 = fib2;
								fib2 = soma;
							}
						printf("O resultado pela soma de Fibonacci e %d",soma);
					break;
					}
		
					
		case 11:
			{
				
				printf("contador de vogais");
			int vog = 0, i = 0;
			char texto [100];
			printf("Digite um texto de 100 caracteres :");
			gets(texto);
		
			for(i= 0;i<sizeof(texto) && texto[i] != '\o'; i++){
			
				if (texto[i] == 'a'||texto [i] == 'e'||texto[i] == 'i'||texto [i] == 'o'||texto [i] == 'u'){
					vog++;
				}
					
				if (texto[i] == 'A'||texto [i] == 'E'||texto[i] == 'I'||texto [i] == 'O'||texto [i] == 'U'){
					vog++;
				}
			}
			printf("\n Total de vogais %d",vog);
			
		
			break;
			
			}
		
		case 12:
		
			{
				printf("Programa que fala se as frases sao igual");
	
				char text[60],text1[60];
				int i;
				
				printf("Digite uma frase :");
				fflush(stdout);
				fgets(text,60,stdin);
				
				printf("Digite a mesma frase :");
				fflush(stdout);
				fgets(text1,60,stdin);
				
				i=0;
					
					while(text[i] !=0 && text[i]==text1[i]){
						i++;
					}
					
					if (text[i] == 0 && text1[i]== 0){
						printf("as frase são iguais\n");
					}
					else{
					printf("as frases nao sao igual \n");
					}
					
					
					break;
		
			}
		
		case 13:
			
				{
					printf("comparacao de texto: \n");
					char texto[100];
					char texto1[100];
					int i=0;
					printf("Digite um texto de cem caracteres : ");
					gets(texto);
					for(i= 0;i<sizeof(texto) && texto[i] != '\o'; i++){
						texto1[i] = texto[i];
					}
					
					printf("%s", texto1);
		
		
					break;
				}
		case 14:
			
				{
					printf("programa que copia um texto pra outra variavel \n");
				
					char texto[100];
					char texto1[100];
					int i=0;
					printf("Digite um texto de cem caracteres : ");
					gets(texto);
					for(i= 0;i<sizeof(texto) && texto[i] != '\o'; i++){
						texto1[i] = texto[i];
					}
					
					printf("%s", texto1);
					break;
				}
		case 15:			
					
			{
				printf("programa que junta as frases :\n ");
				char text[30]= "Aula de ";
				char text1[50]="tecnicas de desenvolvimento de algoritimos.";
				strncat(text,text1,80);
				printf("%s\n",text);
				
				getch();
				system("pause");
					
					break;
			}
		
		}
		printf("\nDigite um numero de 1 a 15: ");
		scanf("%d", &menu);
		fflush(stdin); // essa fucao limpa o buffer do teclado.
	
		
	}
	printf("voce digitou 0 o programa sera finalizado adeus"); //mensagem de despedidas 
	getch();
	
	return 0;
}
