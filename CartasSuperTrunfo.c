#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char estado1 = 'A', estado2 = 'B'; //Definição das variáveis para cada estado sendo somente um caractere
	char codigo1[15] = "01", codigo2[15] = "02"; //Definição das variáveis para cada código sendo uma string capaz de comportar até 15 caracteres ao invés de 2 porque foi a maneira que arranjei para corrigir um erro quando tentava juntar, no printf das cartas, o caractere único do estado com os números que os caracteres de código forneciam
    char nome_da_cidade1[50] = "São Paulo", nome_da_cidade2[50] = "Rio de Janeiro"; //Definição das variáveis para cada cidade sendo uma string capaz de comportar até 50 caracteres
	unsigned long int populacao1 = 12325000, populacao2 = 6748000; //Definição das variáveis para a população de cada cidade sendo um número inteiro
    int numero_de_pontos_turisticos1 = 50, numero_de_pontos_turisticos2 = 30; //Definição das variáveis para os pontos turísticos de cada cidade sendo um número inteiro
	float area1 = 1521.11, area2 = 1200.25; //Definição das variáveis com a área de cada cidade sendo um número de ponto flutuante
    float pib1 = 699.28, pib2 = 300.50; //Definição das variáveis com o pib de cada cidade sendo um número de ponto flutuante
	float densidade_populacional1, densidade_populacional2;
	float pib_per_capita1, pib_per_capita2;
	float super_poder1, super_poder2;
	
	/*
    //Sequência pedindo cada uma das informações da primeira carta
	printf("Digite o primeiro Estado (utilizando um caractere de A a H): ");
	scanf(" %c", &estado1);
	printf("Digite o codigo da primeira carta (utilizando os numeros de 01 a 04): ");
	scanf("%s", codigo1);
	printf("Digite o nome da primeira cidade: ");
	scanf("%s", nome_da_cidade1);
	printf("Digite o numero de habitantes da primeira cidade: ");
	scanf("%lu", &populacao1);
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
	scanf("%lu", &populacao2);
	printf("Digite a area da segunda cidade em quilometros quadrados: ");
	scanf("%f", &area2);
	printf("Digite o PIB da segunda cidade: ");
	scanf("%f", &pib2);
	printf("Digite a quantidade de pontos turisticos da segunda cidade: ");
	scanf("%d", &numero_de_pontos_turisticos2);*/

	//Calculo das densidades populacionais de cada cidade
	densidade_populacional1 = populacao1 / area1;
	densidade_populacional2 = populacao2 / area2;

	//Calculo do PIB per Capita de cada cidade
	pib_per_capita1 = (pib1 * 1000000000) / (float) populacao1;
	pib_per_capita2 = (pib2 * 1000000000) / (float) populacao2;

	//Calculo do Super Poder de cada cartas
	super_poder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 - densidade_populacional1;
	super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 - densidade_populacional2;

    //Parte do código imprimindo as informações da primeira carta com espaçamento de linha entre cada uma das informações e um grande espaço para separar as informações da segunda carta
	printf("\nCidade 1:\n");
	printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1,codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
	printf("Populacao: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de pontos turisticos: %d\n", numero_de_pontos_turisticos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
	printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);
	
    //Parte do código imprimindo as informações da segunda carta com espaçamento de linha entre cada uma das informações
    printf("\nCidade 2:\n");
	printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
	printf("Populacao: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
	printf("PIB per Capita: %.2f reais\n\n", pib_per_capita2);

	printf("Comparação das Cartas: \n");
	if(populacao1 > populacao2) {
		printf("Populacao: Cidade 1 ganhou!\n");
	} else {
		printf("Populacao: Cidade 2 ganhou!\n");
	}
	if(area1 > area2) {
		printf("Area: Cidade 1 ganhou!\n");
	} else {
		printf("Area: Cidade 2 ganhou!\n");
	}
	if(pib1 > pib2) {
		printf("PIB: Cidade 1 ganhou!\n");
	} else {
		printf("PIB: Cidade 2 ganhou!\n");
	}
	if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
		printf("Numero de Pontos Turisticos: Cidade 1 ganhou!\n");
	} else {
		printf("Numero de Pontos Turisticos: Cidade 2 ganhou!\n");
	}
	if(pib_per_capita1 > pib_per_capita2) {
		printf("PIB per Capita: Cidade 1 ganhou!\n");
	} else {
		printf("PIB per Capita: Cidade 2 ganhou!\n");
	}
	if(densidade_populacional1 < densidade_populacional2) {
		printf("Densidade Populacional: Cidade 1 ganhou!\n");
	} else {
		printf("Densidade Populacional: Cidade 2 ganhou!\n");
	}
	if(super_poder1 > super_poder2) {
		printf("Super Poder: Cidade 1 ganhou!\n");
	} else {
		printf("Super Poder: Cidade 2 ganhou!\n");
	}

    return 0;
}
