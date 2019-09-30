#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char texto [100];
	int tamanho;
	
		printf("Digite uma frase\n ");
		gets(texto);
		tamanho = strlen (texto);
		printf("Total de Letras : %d\n",tamanho);
		
	
	
	
	system("pause");
	return 0;
}
