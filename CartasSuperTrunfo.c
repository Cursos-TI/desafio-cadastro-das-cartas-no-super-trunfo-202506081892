#include <stdio.h>

// Desafio Super Trintunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste F.Augusto

int main() {


    char estado[90]; // De A a H
    char codigo_cidade[90]; //A01
    char nome[90]; // (string)
    int populacao[90];
    float area[90];// KM
    float pib[90]; // Produto interno Bruto
    int numero_pontos_turisticos[90];


    int numero_de_cartas = 2; // O número de cartas a serem cadastradas

    for (int i = 0; i < numero_de_cartas; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        // Leitura do nome do estado
        printf("Insira do estado: ");
        scanf("%s", estado);
        printf("Estado: %s\n", estado);

        // Leitura do nome da cidade
        printf("Insira o nome da cidadade:");
        scanf("%s", nome);
        printf("Nome da cidade: %s\n", nome);
        
        // Leitura do código da cidade
        printf("Digite o código da cidade");
        scanf("%s", codigo_cidade);
        printf("O codigo da cidade é %s\n", codigo_cidade);

        // Leitura da população
        printf("Insira o população:");
        scanf("%d", &populacao[i]);
        printf("População: %d\n", populacao[i]);

        // Leitura da área
        printf("Insira o area:");
        scanf("%f", &area[i]);
         printf("Área: %.2f km²\n", area[i]);

        // Leitura do PIB
        printf("Insira o pib:");
        scanf("%f", &pib[i]);
        printf("PIB: %.2f\n", pib[i]);
        
        // Leitura do número de pontos turísticos
        printf("Insira o número de pontos turísticos:");
        scanf("%d", &numero_pontos_turisticos[i]); // Lê os pontos turísticos para o array
        printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos[i]);
       
        }

}
