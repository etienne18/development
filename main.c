/*Nom du prog: Choix
Auteur: Etienne CHARRIER*/

#include <stdio.h>


//Modif dans dev_local
int choix(int a) {

  if (a>=1 && a<=10) {
    return 1;
  }
  else if (a>=11 && a<=20) {
    return 2;
  }
  else
    return 3;
}

int main() {
  //variable c récupère l'entier
  int c;
  printf("Veuillez entrer un entier:");
  scanf("%d", &c);
  printf("La fonction renvoie : %d.\n", choix(c));

  return 0;
}
