/*
Nom: Duhamel
Pr�nom: Pierre-Jean
Date: 24/02/2022
Titre:  Comme en CE2, calcul de la table de multiplication jusq'� dix du nombre demand�
*/
#include <stdio.h>

int main(){
    //D�clarations des variables
    int n,i; // Permet de stocker le nombre choisit et le nombre d'it�rations de la boucle for

    printf("\nEntrer un nombre : ");
    scanf("%d",&n);//Permet de r�cup�rer le nombre entrer par l'utilisateur

    printf("\nVoici la table de multiplication de %-2d jusqu'%c 10 :",n,133);
    for(i=0;i<11;i++)//Boucle pour calculer chaque multiplication
        {
        printf("\n%d par %d est : %d",n,i,i*n);//multiplication et affichage
    }



}
