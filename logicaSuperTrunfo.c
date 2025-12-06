#include <stdio.h>


int main()
{
  // Definindo as variáveis para armazenar as propriedades das cidades

  // carta 1
  char estado;
  char codigo[5];
  char nome_cidade[50];
  unsigned long int populacao;
  float area;
  float pib;
  int numeros_pontos_turisticos;

  // carta 2
  char estado2;
  char codigo2[5];
  char nome_cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int numeros_pontos_turisticos2;

  //lógica comparação
  int opcaoJogador, opcaoJogador2, resultado1, resultado2;


  printf("===== Cadastro de Cartas =====\n\n");



  // Entrada de dados da primeira Carta
  printf("Digite a letra do estado: ");
  scanf("%c", &estado);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao);

  printf("Digite a área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeros_pontos_turisticos);

  printf("\n");

  printf("Primeira carta criada com SUCESSO!\n\n");

  // Calculando a densidade populacional e PIB per capital da carta 1
  float densidade_populacional = (float)populacao / area;
  float pib_per_capital = (float)pib / populacao;

  // Calculando Super Poder carta 1
  float super_poder1 = (populacao + area + pib + pib_per_capital + (1 / densidade_populacional) + numeros_pontos_turisticos);



  // Entrada de Dados da segunda carta
  printf("Digite a letra do estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade2);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao2);

  printf("Digite a área: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeros_pontos_turisticos2);
  printf("\n");

  printf("Segunda carta criada com SUCESSO!\n\n");

  // Calculando a densidade populacional e PIB per capital da carta 2
  float densidade_populacional2 = (float)populacao2 / area2;
  float pib_per_capital2 = (float)pib2 / populacao2;

  // Calculando Super Poder carta 2
  float super_poder2 = (populacao2 + area2 + pib2 + pib_per_capital2 + (1 / densidade_populacional2) + numeros_pontos_turisticos2);



  // Imprimindo cartas criadas
  printf("=== SUAS CARTAS CRIADAS ===\n\n");

  // imprimindo carta 1
  printf("CARTA 1\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome_cidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", numeros_pontos_turisticos);
  printf("Densidade Populacional: %2.f hab/km² \n", densidade_populacional);
  printf("PIB per capita: %.2f reais\n", pib_per_capital);
  printf("Super Poder: %.2f\n\n", super_poder1);

  // imprimindo carta 2
  printf("CARTA 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", numeros_pontos_turisticos2);
  printf("Densidade Populacional: %2.f hab/km²\n", densidade_populacional2);
  printf("PIB per capita: %.2f reais\n", pib_per_capital2);
  printf("Super Poder: %.2f\n", super_poder2);

  printf("\n\n");



  
  // Exibindo comparação entre cartas
  printf("===== COMPARAÇÃO ENTRE CARTAS =====\n");
  printf("=== %s X %s ===\n", nome_cidade, nome_cidade2);
  printf("Escolha dois atributos para comparar\n\n");
  

  //Menu Interativo
  printf("== ESCOLHA SEU PRIMEIRO ATRIBUITO ==\n");
  printf("1 - POPULAÇÃO\n");
  printf("2 - ÁREA \n");
  printf("3 - PIB\n");
  printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
  printf("5 - DENSIDADE DEMOGRÁFICA\n");
  scanf("%d", &opcaoJogador);

  printf("\n");
  switch (opcaoJogador)
  {

  //Comparação com População 
  case 1:
    printf("## COMPARANDO POPULAÇÃO ##\n");
    printf("%s: %lu X %s: %d \n", nome_cidade, populacao, nome_cidade2, populacao2);
    resultado1 = populacao > populacao2 ? 1 : 0;
    break;
  

  //Comparação com Área  
  case 2:
    printf("## COMPARANDO ÁREA ##\n");
    printf("%s: %.2f km² X %s: %.2f km² \n", nome_cidade, area, nome_cidade2, area2);
    resultado1 = area > area2 ? 1 : 0;
    break;


  //Comparação com PIB 
  case 3:
    printf("## COMPARANDO PIB ##\n");
    printf("%s: %.2f Bilhões de reais X %s: %.2f Bilhões de reais \n", nome_cidade, pib, nome_cidade2, pib2);
    resultado1 = pib > pib2 ? 1 : 0;
    

  //Comparação com número de pontos turísticos
  case 4:
    printf("## COMPARANDO NÚMERO DE PONTOS TURÍSTICOS ##\n");
    printf("%s: %d pontos X %s: %d pontos \n", nome_cidade, numeros_pontos_turisticos, nome_cidade2, numeros_pontos_turisticos2);
    resultado1 = numeros_pontos_turisticos > numeros_pontos_turisticos2 ? 1 : 0;
    break;


  //Comparação com densidade demográfica
  case 5:
    printf("## COMPARANDO DENSIDADE DEMOGRÁFICA (o de menor valor ganha) ##\n");
    printf("%s: %2.f hab/km² X %s: %2.f hab/km² \n", nome_cidade, densidade_populacional, nome_cidade2, densidade_populacional2);
    resultado1 = densidade_populacional > densidade_populacional2 ? 0 : 1;
    break;  
      


  default:
    printf("Atributo inválido!\n");
    break;
  }

  printf("\n");
  //Tratando e Exibindo Menu interativo dinâmico para o jogador escolher seu segundo atribuito
  printf("== ESCOLHA SEU SEGUNDO ATRIBUITO == \n");
  if (opcaoJogador == 1)
  {
    printf("2 - ÁREA \n");
    printf("3 - PIB\n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    scanf("%d", &opcaoJogador2);
  }
  else if ( opcaoJogador == 2)
  {
    printf("1 - POPULAÇÃO\n");
    printf("3 - PIB\n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    scanf("%d", &opcaoJogador2);
  }
  else if (opcaoJogador == 3)
  {
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA \n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    scanf("%d", &opcaoJogador2);   
  }
  else if (opcaoJogador == 4)
  {
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA \n");
    printf("3 - PIB\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    scanf("%d", &opcaoJogador2);
  }
  else if (opcaoJogador == 5)
  {
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA \n");
    printf("3 - PIB\n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    scanf("%d", &opcaoJogador2);
  }

  
  

  //Comparando o segundo atributo escolhido
  printf("\n");
  switch (opcaoJogador2)
  {

  //Comparação com População 
  case 1:
    printf("## COMPARANDO POPULAÇÃO ##\n");
    printf("%s: %d X %s: %d \n", nome_cidade, populacao, nome_cidade2, populacao2);
    resultado2 = populacao > populacao2 ? 1 : 0;
    break;
  

  //Comparação com Área  
  case 2:
    printf("## COMPARANDO ÁREA ##\n");
    printf("%s: %.2f km² X %s: %.2f km² \n", nome_cidade, area, nome_cidade2, area2);
    resultado2 = area > area2 ? 1 : 0;
    break;


  //Comparação com PIB 
  case 3:
    printf("## COMPARANDO PIB ##\n");
    printf("%s: %.2f Bilhões de reais X %s: %.2f Bilhões de reais \n", nome_cidade, pib, nome_cidade2, pib2);
    resultado2 = pib > pib2 ? 1 : 0;
    

  //Comparação com número de pontos turísticos
  case 4:
    printf("## COMPARANDO NÚMERO DE PONTOS TURÍSTICOS ##\n");
    printf("%s: %d pontos X %s: %d pontos \n", nome_cidade, numeros_pontos_turisticos, nome_cidade2, numeros_pontos_turisticos2);
    resultado2 = numeros_pontos_turisticos > numeros_pontos_turisticos2 ? 1 : 0;
    break;


  //Comparação com densidade demográfica
  case 5:
    printf("## COMPARANDO DENSIDADE DEMOGRÁFICA (o de menor valor ganha) ##\n");
    printf("%s: %2.f hab/km² X %s: %2.f hab/km² \n", nome_cidade, densidade_populacional, nome_cidade2, densidade_populacional2);
    resultado2 = densidade_populacional > densidade_populacional2 ? 0 : 1;
    break;  
      


  default:
    printf("Atributo inválido!\n");
    break;
  }



  //Verificando se Jogador ganhou, para isso ele tem que ganhar nas duas opções
  printf("\n");
  if (resultado1 && resultado2)
  {
    printf("PARÁBENS!!\n");
    printf("== VOCÊ É CAMPEÃO DO SUPER TRUNFO!! ==");
  }
  else if (resultado1 != resultado2)
  {
    printf("EMPATOU!!\n");
    printf(" == CONTINUE EVOLUINDO ==");
  }
  else 
  {
    printf("VOCÊ PERDEU...\n");
    printf(" == NÃO DESISTA, A DERROTA É PARTE DO APRENDIZADO ==");
  }


  
  printf("\n\n");
  return 0;
}
