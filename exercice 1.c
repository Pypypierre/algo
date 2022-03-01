/*
Nom: Duhamel
Prénom: Pierre-Jean
Date: 24/02/2022
Titre:  Comme en CE2, calcul de la table de multiplication jusq'à dix du nombre demandé
*/
#include <stdio.h>

int main(){
    //Déclarations des variables
    int n,i; // Permet de stocker le nombre choisit et le nombre d'itérations de la boucle for

    printf("\nEntrer un nombre : ");
    scanf("%d",&n);//Permet de récupérer le nombre entrer par l'utilisateur

    printf("\nVoici la table de multiplication de %-2d jusqu'%c 10 :",n,133);
    for(i=0;i<11;i++)//Boucle pour calculer chaque multiplication
        {
        printf("\n%d par %d est : %d",n,i,i*n);//multiplication et affichage
    }



}
