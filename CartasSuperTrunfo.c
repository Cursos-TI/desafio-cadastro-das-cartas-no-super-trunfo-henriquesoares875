#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste henrique

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nomeJogador[30];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("olá jogador, seja bem vindo ao nosso jogo, nesse momento vamos cadatrar nossas cidades,\nexpecificando algumas de sua caracteristicas. antes de começar como eu posso te chamar?");
    scanf("%s", &nomeJogador);
    printf("muito prazer %s, vamos começar a por a mão na massa?. por favor siga as instruções a baixo para começar-mos!\n", nomeJogador);
    printf("\n");
    printf("qual será o nome da cidade?: ");
    scanf("%s", &nomeCidade);
    printf("certo... agora me diga quantos habitantes há nessa cidade: ");
    scanf("%i", &populacao);
    printf("ok, agora determine o tamanho da sua cidade em kilometros: ");
    scanf("%f", &area);
    printf("agora vamos definir o quão rica é sua cidade, defina o PIB de sua cidade: ");
    scanf("%f", &pib);
    printf("por fim, vamos definir o numero de pontos turisticos da sua cidade: ");
    scanf("%i", &numeroPontosTuristicos);
    printf("\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("certo... vamos recapitular, abaixo está uma lista com todas as caracteristiv=cas de sua cidade, se estiver tudo certinho é confirmar o cadastro.\n");
    printf(" nome: %s\n população: %i\n área: %f\n PIB: %f\n pontos turisticos: %i\n", nomeCidade, populacao, area, pib, numeroPontosTuristicos);
    printf("\n");
    printf("está tudo certinho? (S/N)\n");
    return 0;
}
