#include <stdio.h>
#include <string.h> // Necessário para a função strcpy

// Definição da estrutura para a carta
struct Carta {
    char estado[2];         // 'A' para o estado
        char codigo_carta[4];   // "A01" para o código da carta
            char nome_cidade[50];   // "Amazonas" para o nome da cidade
                float area_km2;         // 1.571.000 para a área em km²
                    float pib_bilhoes;      // 44.5 para o PIB em bilhões
                        int pontos_turismo;     // 50 para o número de pontos de turismo
                        };

                        int main() {
                            // Declaração e inicialização da carta_1
                                struct Carta carta_1;

                                    strcpy(carta_1.estado, "A"); // Copia a string "A" para o campo estado
                                        strcpy(carta_1.codigo_carta, "A01"); // Copia a string "A01" para o campo codigo_carta
                                            strcpy(carta_1.nome_cidade, "Amazonas"); // Copia a string "Amazonas" para o campo nome_cidade
                                                carta_1.area_km2 = 1571000.0;
                                                    carta_1.pib_bilhoes = 44.5;
                                                        carta_1.pontos_turismo = 50;

                                                            // Impressão dos dados da carta_1 para verificar
                                                                printf("--- Informações da Carta ---\n");
                                                                    printf("Estado: %s\n", carta_1.estado);
                                                                        printf("Código da Carta: %s\n", carta_1.codigo_carta);
                                                                            printf("Nome da Cidade: %s\n", carta_1.nome_cidade);
                                                                                printf("Área em km²: %.2f\n", carta_1.area_km2);
                                                                                    printf("PIB (em bilhões): %.2f\n", carta_1.pib_bilhoes);
                                                                                        printf("Número de Pontos de Turismo: %d\n", carta_1.pontos_turismo);

                                                                                            return 0;
                                                                                            }
                                                                                            