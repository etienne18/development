/*Nom du prog: Choix
Auteur: Etienne CHARRIER*/

#include <stdio.h>

<<<<<<< HEAD
//Modif dans dev_local2
//Je rajoute des commentaires inutiles
=======

//Modif dans dev_local
>>>>>>> e763ac3a58f7417e568c7568d8933e314ec3e9a8
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

  int c;
  printf("Veuillez entrer un entier:");
  scanf("%d", &c);
  printf("La fonction renvoie : %d.\n", choix(c));

  return 0;
}
