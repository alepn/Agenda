#include <stdio.h>
#include <string.h>

struct Pessoa{
  int codigo;
  char nome[50];
  char telefone[16];
  char email[50];
  char dataNascimento[11];
  char observacoes[100];
};

int main(void) {

  struct Pessoa contatos[2];
  int i, op=1;

  for(i = 0; i < 2; i++){
    contatos[i].codigo = 0;
  }

  while(op > 0){
    for(i = 0; contatos[i].codigo != 0 && i < 2; i++){}

    if(i < 2){
      do{
        printf("Digite o código: ");
        scanf("%i", &contatos[i].codigo);
      }while(contatos[i].codigo < 1);

      printf("Digite o nome: ");
      scanf("%s", contatos[i].nome);
    }
    else{
      printf("Agenda cheia!");
    }
    scanf("%i", &op);
  }

  return 0;

}
