#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char estado1, estado2; //Definição das variáveis para cada estado sendo somente um caractere
	char codigo1[15], codigo2[15]; //Definição das variáveis para cada código sendo uma string capaz de comportar até 15 caracteres ao invés de 2 porque foi a maneira que arranjei para corrigir um erro quando tentava juntar, no printf das cartas, o caractere único do estado com os números que os caracteres de código forneciam
    char nome_da_cidade1[50], nome_da_cidade2[50]; //Definição das variáveis para cada cidade sendo uma string capaz de comportar até 50 caracteres
	int populacao1, populacao2; //Definição das variáveis para a população de cada cidade sendo um número inteiro
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2; //Definição das variáveis para os pontos turísticos de cada cidade sendo um número inteiro
	float area1, area2; //Definição das variáveis com a área de cada cidade sendo um número de ponto flutuante
    float pib1, pib2; //Definição das variáveis com o pib de cada cidade sendo um número de ponto flutuante
	
    //Sequência pedindo cada uma das informações da primeira carta
	printf("Digite o primeiro Estado (utilizando um caractere de A a H): ");
	scanf(" %c", &estado1);
	printf("Digite o codigo da primeira carta (utilizando os numeros de 01 a 04): ");
	scanf("%s", codigo1);
	printf("Digite o nome da primeira cidade: ");
	scanf("%s", nome_da_cidade1);
	printf("Digite o numero de habitantes da primeira cidade: ");
	scanf("%d", &populacao1);
	printf("Digite a area da primeira cidade em quilometros quadrados: ");
	scanf("%f", &area1);
	printf("Digite o PIB da primeira cidade: ");
	scanf("%f", &pib1);
	printf("Digite a quantidade de pontos turisticos da primeira cidade: ");
	scanf("%d", &numero_de_pontos_turisticos1);
	
    //Sequência pedindo cada uma das informações da segunda carta
	printf("\n\nDigite o segundo Estado (utilizando um caractere de A a H): ");
	scanf(" %c", &estado2);
	printf("Digite o codigo da segunda carta (utilizando os numeros de 01 a 04): ");
	scanf("%s", codigo2);
	printf("Digite o nome da segunda cidade: ");
	scanf("%s", nome_da_cidade2);
	printf("Digite o numero de habitantes da segunda cidade: ");
	scanf("%d", &populacao2);
	printf("Digite a area da segunda cidade em quilometros quadrados: ");
	scanf("%f", &area2);
	printf("Digite o PIB da segunda cidade: ");
	scanf("%f", &pib2);
	printf("Digite a quantidade de pontos turisticos da segunda cidade: ");
	scanf("%d", &numero_de_pontos_turisticos2);
	
    //Parte do código imprimindo as informações da primeira carta com espaçamento de linha entre cada uma das informações e um grande espaço para separar as informações da segunda carta
	printf("\nCidade 1:\n");
	printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1,codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
	printf("Populacao: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de pontos turisticos: %d\n\n\n", numero_de_pontos_turisticos1);
	
    //Parte do código imprimindo as informações da segunda carta com espaçamento de linha entre cada uma das informações
    printf("\nCidade 2:\n");
	printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
	printf("Populacao: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de pontos turisticos: %d\n", numero_de_pontos_turisticos2);

    return 0;
}
