#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main()
printf ("Super Trunfo Países \n");
int codigodacidade, populacao, numeropontosturisticos;
char nome [50];
float area, pib;

printf("Insira o código da cidade: \n");
scanf("%d" &codigodacidade);

printf("Insira o nome da cidade: \n");
scanf("%s" &nome);

printf("Insira a população da cidade");
scanf("%d" &populacao);

printf("Insira a área da cidade: \n");
scanf("%f" &area);

printf("Insira o PIB da cidade: \n");
scanf("%f" &pib);

printf("Insira o número de pontos turísticos: \n");
scanf("%d" &numeropontosturisticos);

printf("Código da Cidade: %d \n" , codigodacidade);
printf("Nome da Cidade: %s \n" , nome);
printf("População: %d \n" , populacao);
printf("Área: %f \n" , area);
printf("PIB: %f \n" , pib);
printf("Número de pontos turísticos: \n" , numeropontosturisticos);


 {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
