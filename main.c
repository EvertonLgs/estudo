#include <conio.h>
#include <stdio.h>
#include<math.h>

int main()
{
	
	int menu;
	
	printf("Digite um numero de 1 a 10: ");
	scanf("%d", &menu);
	fflush(stdin);
	
	
	while(menu > 0 && menu <= 10)
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
				
			case 9: // a fazer
				printf("Voce escolheu %d!", menu);
				break;	
				
				
			
			
			case 10: // a fazer  esse deu ruim
				printf("Voce escolheu %d!", menu);
				break;	
		
		
		
		}
		
		printf("\nDigite um numero de 1 a 10: ");
		scanf("%d", &menu);
		fflush(stdin); // essa fucao limpa o buffer do teclado.
	
		
	}
	printf("voce digitou 0 o programa sera finalizado adeus"); //mensagem de despedidas 
	getch();
	
	return 0;
}
