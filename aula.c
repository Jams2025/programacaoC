#include <stdio.h>

int main(){
//Declarar variáveis Produto, u i estoque, double valor unitario, 
// u i quantidade minima

//Define Nome do produto
char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

//Define Estoque
unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

//Define Valor total
float valorA = 10.50;
float valorB = 20.40;

//Define Estoque minimo
unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

//Define o valor total do produto valor do produto x quantidade de estoque
double valorTotalA;
double valorTotalB;

int resultadoA, resultadoB;

//Exibir as informações dos produtos
printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

//Comparações com o valor minimo de estoque 
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

//Comparações entre os valores totais de produtos
printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$%.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

}