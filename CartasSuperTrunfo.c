#include <stdio.h>
#include <string.h> // Necessário para a função strcpy

// Definição da estrutura para as cartas
struct Carta {
char estado[2];         // Nome do estado (ex: "A" ou "B")
char codigo_carta[4];   // Nome e número para o código da carta (ex: "A01")
char nome_cidade[50];   // O nome da cidade (Ex: "Amazonas ou Bahia")
float area_km2;         // Quantidade em área em km² (ex: 1.571.000 km² ou 564.733 km²) 
float pib_bilhoes;      // Valor do PIB em bilhões (Ex: 44.500 bilhões ou 63.080 bilhões)
int pontos_turismo;     // Quantidade de pontos de turismo (Ex: 50 ou 70)
 };

 int main() {
 // Declaração e inicialização da carta_1
 struct Carta carta_1;

 strcpy(carta_1.estado, "A"); // Copia a string "A" para o campo estado
 strcpy(carta_1.codigo_carta, "A01"); // Copia a string "A01" para o campo codigo_carta
 strcpy(carta_1.nome_cidade, "Amazonas"); // Copia a string "Amazonas" para o campo nome_cidade
 carta_1.area_km2 = 1.571,000; // Atribiu a área em km²
 carta_1.pib_bilhoes = 44.500; // Atribui o PIB em bilhôes
 carta_1.pontos_turismo = 50; // Atribui o números de pontos de turismo 

 // Impressão dos dados da carta 1 para verificar
 printf("--- Informações da Carta 1 ---\n");
  printf("Estado: %s\n", carta_1.estado); 
  printf("Código da Carta: %s\n", carta_1.codigo_carta);
  printf("Nome da Cidade: %s\n", carta_1.nome_cidade);
  printf("Área em km²: %f\n", carta_1.area_km2);
  printf("PIB (em bilhões): %f\n", carta_1.pib_bilhoes);
  printf("Número de Pontos de Turismo: %d\n", carta_1.pontos_turismo);


  // Declaração e inicialização da carta 2
  struct Carta carta_2;

  strcpy(carta_2.estado, "B"); // Copia a string "B" para o campo estado
  strcpy(carta_2.codigo_carta, "B02"); // Copia a string "B01" para o campo codigo_carta
  strcpy(carta_2.nome_cidade, "Bahia"); // Copia a string "Bahia" para o campo nome_cidade
  carta_2.area_km2 = 564733.0; // Atribiu a área em km² 
  carta_2.pib_bilhoes = 63.080; // Atribui o PIB em bilhôes
  carta_2.pontos_turismo = 70; // Atribui o números de pontos de turismo 

  // Impressão dos dados da carta 2 para verificar
  printf("\n--- Informações da Carta 2 ---\n");
  printf("Estado: %s\n", carta_2.estado);
  printf("Código da Carta: %s\n", carta_2.codigo_carta);
  printf("Nome da Cidade: %s\n", carta_2.nome_cidade);
  printf("Área em km²: %f\n", carta_2.area_km2);
  printf("PIB (em bilhões): %f\n", carta_2.pib_bilhoes);
  printf("Número de Pontos de Turismo: %d\n", carta_2.pontos_turismo);


  return 0;
  }