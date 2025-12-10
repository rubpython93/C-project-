#include <stdio.h>
#include <stdlib.h>
#include "ex2.h"
typedef struct _etudiant etudiant;

/* Ajoute un étudiant d'identifiant id, ayant les notes s1 et s2, en tête de liste
   Renvoie la nouvelle tête de liste */
etudiant *ajouterEtudiantTete(int id, int s1, int s2, etudiant *listeEtudiants) {
	etudiant *nouveau=malloc(sizeof(etudiant));
	nouveau->identifiant=id;
	nouveau->semestre1=s1;
	nouveau->semestre2=s2;
	nouveau->suivant=listeEtudiants;
	return nouveau;
}

/* Affiche les informations relatives à l'étudiant passé en paramètre */
/* VOUS NE DEVEZ PAS MODIFIER CETTE FONCTION */
void afficherEtudiant(etudiant *etu) {
  printf("Id=%d,note S1:%d, note S2:%d\n",etu->identifiant,etu->semestre1,etu->semestre2);
}

/* Affiche les informations de tous les étudiants de la liste listeEtudiants*/
void afficherListe(etudiant *listeEtudiants){
	etudiant *tmp=listeEtudiants;
	while(tmp != NULL){
	afficherEtudiant(tmp);
	tmp=tmp->suivant;
}

/* Ajoute un étudiant (d'identifiant id, ayant les notes s1 et s2) à sa place dans une liste triée.
   Le tri se fait en ordre décroissant sur la moyenne des deux semestres (l'étudiant en tête de liste est l'étudiant avec la meilleure moyenne).
   Renvoie la tête de liste après ajout. */
/* Hypothèse : l'étudiant ajouté n'est pas déjà présent dans la liste */
etudiant *ajoutEtudiantTrie(int id, int s1, int s2, etudiant *listeEtudiants) {
	etudiant *nouveau=malloc(sizeof(etudiant));
	nouveau->identifiant=id;
	nouveau->semestre1=s1;
	nouveau->semestre2=s2;
	float moyenne=(s1+s2)/2;
	etudiant *tmp=listeEtudiants;
	while(tmp != NULL){
		float moy=(tmp->semestre1+tmp->semestre2)/2
		if(moyenne>moy){
			nouveau->suivant=tmp;
			return tmp;
		}
	tmp=tmp->suivant;
	}
	return tmp;
}

/* Renvoie la moyenne des notes des étudiants au semestre passé en paramètre (1 pour S1, 2 pour S2), O.O s'il n'y a aucun étudiant dans la liste */
float moyenneSemestre(etudiant *listeEtudiants, int semestre) {
	etudiant *tmp=listeEtudiants;
	if(tmp==NULL){return 0.0;}
	while(tmp!=NULL){
		if(semestre == 1){
			etudiant *tmp=listeEtudiants;
			return tmp->semestre1;
			}
		if(semestre == 2){
			etudiant *tmp=listeEtudiants;
			return tmp->semestre2;
			}
		tmp=tmp->suivant;
	}
}

/* Renvoie 1 si l'étudiant etu doit passer la seconde session du semestre passé en paramètre (1 pour S1, 2 pour S2), 0 sinon.
   Un étudiant doit passer une seconde session si la note du semestre est < 50 et si la moyenne des semestres est < 50  */
/* Hypothèse : l'étudiant se trouve dans la liste */
int passerSecondeSession(etudiant *etu, int semestre) {
	etudiant *tmp=etu;
	while(tmp != NULL){
	float moyennetmp=moyenneSemestre(tmp,semestre);
	float moy=(tmp->semestre1+tmp->semestre2)/2;
		if(moyennetmp<50 && moy<50){
			return 1;
		}
	tmp=tmp->suivant;
	}
}

/* À partir de la liste listeEtudiants, crée la liste des étudiants devant passer la seconde session du semestre passé en paramètre (1 pou S1, 2 pour S2).
   Cette liste doit être triée en ordre décroissant sur la moyenne des deux semestres.
   Renvoie NULL si aucun étudiant ne doit passer la seconde session */
etudiant *creerListeSecondeSession(etudiant *liste, int semestre) {	etudiant *tmp=liste;
	etudiant* reponse=malloc(sizeof(etutiant));
	while(tmp!=NULL){
	float moyennetmp=moyenneSemestre(tmp,semestre);
	float moy=(tmp->semestre1+tmp->semestre2)/2;
	int pass=passerSecondeSession(tmp,semestre);
	if(pass= 1){
		if(reponse==NULL){
			reponse=ajouterEtudiantTete(tmp->identifiant,tmp->semestre1,tmp->semestre2,reponse);
			reponse->suivant=NULL;
		}
		etudiant *tmp2=reponse;
		while(tmp2 != NULL){
		float moyennetmp2=(tmp2->semestre1+tmp2->semestre2)/2;
		if(moyennetmp<moyennetmp2){
			ajouterEtudiantTete(
		}
}

}
