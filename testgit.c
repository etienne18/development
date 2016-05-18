/*Nom du prog : itérations 2
Auteur: Etienne CHARRIER */

#include <stdio.h>

int main() {

  int somme;//valeur qu'on retourne
  int j;
  int k;
  somme=0;

  printf("Veuillez rentrer un nombre:");
  scanf("%d", &k);

  if (k>=0) {
    for (j=0; j<k+1; j++) {
      somme+=j*j;
    }
  }
  else {
    for (j=0; j>k-1; j--) {
      somme+= j*j;
    }
  }
  
  printf("Ce programme renvoie la valeur %d.\n", somme);

  return 0;

}

