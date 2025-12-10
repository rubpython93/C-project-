
/* Nous souhaitons compter le nombre de caractères identiques de deux chaînes de caractères de même taille.
   Deux caractères seront considérés comme identiques s'ils sont à la même position et ont la même valeur.

- Complétez la fonction nbCaracId pour qu'elle retourne le nombre de caractères identiques de deux chaînes.
  La fonction doit prendre en paramètres les deux chaînes des caractères.
  Nous ferons l'hypothèse que les deux chaînes ont la meme longueur, ce n'est pas à vérifier.

- Complétez la fonction main pour afficher le résultat.
  Le message affiché doit dépendre du résultat de l'appel à la fonction nbCaracId.
  N'oubliez pas de remplacer les ... en paramètre des appels à printf.

La valeur de chacune des chaînes est définie par une primitive #define, ces valeurs seront modifiées pour tester votre programme.
Vous pouvez les modifier pour effectuer des tests.
*/


#include <stdio.h>

#define VALCHAINE1 "abcdefgh"
#define VALCHAINE2 "aacddddh"

int nbCaracId(char tab1[], char tab2[], int TAILLE) {
	int i;
	int comp=0;
	for(i=0;i<TAILLE;i++){
		if(tab1[i]==tab2[i]){
		comp=comp+1;
		}		
	}return comp;
}
int main() {
  /* NE MODIFIEZ PAS LES INSTRUCTIONS SUIVANTES
  ELLES PERMETTENT D'INITIALISER LES CHAINES */
   char ch1[] = VALCHAINE1;
   char ch2[] = VALCHAINE2;
   int valeur= nbCaracId(ch1,ch2,8);
	if(valeur != 0){
  	printf("Les chaines contiennent %d caractere(s) identique(s)\n",valeur);
	}
  	printf("Les chaines ne contiennent aucun caractere identique\n");
	return 0;
}
