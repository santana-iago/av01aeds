#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int premiada, escolhida, vazia;
  char troca;

  printf("Bem-vindo ao jogo do Monty Hall!\n");
  printf("Escolha uma porta 1, 2 ou 3): ");
  scanf("%d", &escolhida);

  srand(time(NULL)); 
  premiada = rand() % 3 + 1;

  for (int i = 1; i <= 3; i++) {
    if (i != premiada && i != escolhida) {
      vazia = i;
      break;
    }
  }
  printf("Vamos abrir a porta %d!\n", vazia);
  printf("A porta %d não tem o prêmio.\n", vazia);

  printf("Deseja trocar de porta? (s/n): ");
  scanf(" %c", &troca);

  if (troca == 's') {
    printf("Digite um número diferente (1, 2 ou 3): ");
    scanf( "%d", &escolhida);
  }

  if (escolhida == premiada) {
    printf("Parabéns, você venceu!\n");
  }else {
    printf("Você perdeu!\n");
  }

  return 0;
}