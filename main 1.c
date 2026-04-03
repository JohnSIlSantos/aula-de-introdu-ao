#include <stdio.h>
 
 int main(void) { 
 int x = 10, y = 5, z = 7, k = 7;
 
 printf("Os operadores relacionais sao usados para fazer comparacoes\n");
 printf("Quando o resultado da comparaçao eh FALSO retorna 0 (zero)\n");
 printf("Quando o resultado da comparaçao eh VERDADEIRO retornam 1 \n");
 
 printf("\nValor de x = %d   ", x);
 printf("valor de y = %d \n  ", y);
 printf("valor de z = %d  ", z);
 printf("valor de k = %d \n", k );
 
 printf("\nExemplo 1: x > y : %d", x > y); // retorna 1 pois é VERDADEIRO 
 printf("\nExemplo 2: x < y : %d\n", x < y); // retorna a zero pois é FALSO 
 
 printf("\nExemplo 3: z == k : %d", z == k); // retorna 1 pois é VERDADEIRO
 printf("\nExemplo 4: z != k : %d\n", z != k); // retorna a zero pois é FALSO 

printf("\nExemplo 5: z >= x : %d", z >= x); // retorna a zero pois é FALSO
printf("\nExemplo 6: z <= k : %d", z <= k); // retorna 1 pois é VERDADEIRO



int idade;
float altura;
char  inicial; 
char resposta;
/* Comando de saida */
puts("=== Cadastro simples em C ===");

/* Entrada de inteiro */ 
printf("Digite sua idade: ");
scanf("%d", &idade);

/*Entrada de real */ 
printf("Digite sua altura (exemplo: 1.75): ");
scanf("%f", &altura);

/* Entrada de caractere */ 
printf("Digite a inicial do seu nome: ");
scanf("%c", &inicial);

/*
Buffer do teclado:
após os scanfs anteriores, pode sobrar '\n' no Buffer.
O getc(stdin) abixo consome esse enter pendente .
*/
getc(stdin);

printf("voce gosta de programação? (s/n): ");
resposta = getc(stdin);
/* Comandos de atribuiçao */
idade = idade +1;

/*saida formatada*/
printf("\n=== resultados ===\n");
printf("No proximo ano, voce tera &d.\n", idade);
printf("Sua altura informada foi %.2f m.\n", altura);
printf("A inicial do seu nome e %c.\n", resposta);

puts("Programa encerrado com sucesso.");

return 0;
}