#include <stdio.h>
#include <string.h> // Necessário para strcpy

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado;
        char codigoCarta[5];
            char nomeCidade[50];
                int populacao;
                    float areaKm2;
                        float pib;
                            int numPontosTuristicos;
                            } SuperTrunfoCard;

                            int main() {
                                SuperTrunfoCard card1; // Declara uma variável do tipo SuperTrunfoCard para a primeira carta

                                    printf("--- Entrada de Dados da Carta Super Trunfo ---\n");

                                        // --- Dados pré-preenchidos para a Carta 1 ---
                                            card1.estado = 'A';
                                                strcpy(card1.codigoCarta, "A01"); // Copia a string "A01" para codigoCarta
                                                    strcpy(card1.nomeCidade, "Amazonas"); // Copia a string "Amazonas" para nomeCidade

                                                        printf("\n--- Carta 1 (Dados pré-preenchidos) ---\n");
                                                            printf("Estado: %c\n", card1.estado);
                                                                printf("Código da Carta: %s\n", card1.codigoCarta);
                                                                    printf("Nome da Cidade: %s\n", card1.nomeCidade);

                                                                        // --- Solicitar as informações restantes ao usuário ---

                                                                            printf("\nPor favor, preencha as informações restantes para a Carta 1:\n");

                                                                                printf("Digite a população: ");
                                                                                    // Validação básica: garantir que a população seja um número positivo
                                                                                        while (scanf("%d", &card1.populacao) != 1 || card1.populacao < 0) {
                                                                                                printf("Entrada inválida. Por favor, digite um número inteiro não negativo para a população: ");
                                                                                                        while (getchar() != '\n'); // Limpa o buffer de entrada
                                                                                                            }
                                                                                                                while (getchar() != '\n'); // Limpa o buffer de entrada

                                                                                                                    printf("Digite a área em km²: ");
                                                                                                                        // Validação básica: garantir que a área seja um número positivo
                                                                                                                            while (scanf("%f", &card1.areaKm2) != 1 || card1.areaKm2 < 0) {
                                                                                                                                    printf("Entrada inválida. Por favor, digite um número não negativo para a área em km²: ");
                                                                                                                                            while (getchar() != '\n'); // Limpa o buffer de entrada
                                                                                                                                                }
                                                                                                                                                    while (getchar() != '\n'); // Limpa o buffer de entrada

                                                                                                                                                        printf("Digite o PIB: ");
                                                                                                                                                            // Validação básica: garantir que o PIB seja um número positivo
                                                                                                                                                                while (scanf("%f", &card1.pib) != 1 || card1.pib < 0) {
                                                                                                                                                                        printf("Entrada inválida. Por favor, digite um número não negativo para o PIB: ");
                                                                                                                                                                                while (getchar() != '\n'); // Limpa o buffer de entrada
                                                                                                                                                                                    }
                                                                                                                                                                                        while (getchar() != '\n'); // Limpa o buffer de entrada

                                                                                                                                                                                            printf("Digite o número de pontos turísticos: ");
                                                                                                                                                                                                // Validação básica: garantir que o número de pontos turísticos seja um número positivo
                                                                                                                                                                                                    while (scanf("%d", &card1.numPontosTuristicos) != 1 || card1.numPontosTuristicos < 0) {
                                                                                                                                                                                                            printf("Entrada inválida. Por favor, digite um número inteiro não negativo para o número de pontos turísticos: ");
                                                                                                                                                                                                                    while (getchar() != '\n'); // Limpa o buffer de entrada
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                            while (getchar() != '\n'); // Limpa o buffer de entrada


                                                                                                                                                                                                                                // --- Exibir todos os dados da Carta 1 (incluindo os inseridos pelo usuário) ---
                                                                                                                                                                                                                                    printf("\n--- Todos os Dados da Carta 1 ---\n");
                                                                                                                                                                                                                                        printf("Estado: %c\n", card1.estado);
                                                                                                                                                                                                                                            printf("Código da Carta: %s\n", card1.codigoCarta);
                                                                                                                                                                                                                                                printf("Nome da Cidade: %s\n", card1.nomeCidade);
                                                                                                                                                                                                                                                    printf("População: %d\n", card1.populacao);
                                                                                                                                                                                                                                                        printf("Área (km²): %.2f\n", card1.areaKm2);
                                                                                                                                                                                                                                                            printf("PIB: %.2f\n", card1.pib);
                                                                                                                                                                                                                                                                printf("Número de Pontos Turísticos: %d\n", card1.numPontosTuristicos);

                                                                                                                                                                                                                                                                    return 0; // Indica execução bem-sucedida
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                    