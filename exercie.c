//
// Created by tomco on 29/09/2021.
//

#include "exercie.h"
#include <stdio.h>
#include "mesfonctions.h"
void exercice4(){
    int a = SaisirEntier();
    int b= SaisirEntier();
    compare(a, b);
    int ent = SaisirEntier();
    CalculEX3(ent);
}

void exercice1(){
    int nb = SaisirEntier();
    int ree = SaisirEntier();
    printf("le plus grand est %d", getmax(nb, ree));
}

void exercice3(){
    int longueur = SaisirEntier();
    int largeur = SaisirEntier();
    printf("le périmetre est de %dcm et l'aire de %dcm\n", calculPerimetre(largeur, longueur),calculaire(largeur, longueur) );
}

void exercice5(){
    int n1, n2, n3;
    printf("saisissez 3 notes svp\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("la moyenne de ces 3 notes est : %d", calculmoyenne(n1,n2,n3));
}

void exercice7(){
    int nb_classe, nb_eleve, tot_eleve;
    printf("entrez  le nombre de classe ouverte\n");
    scanf("%d", &nb_classe);

    for(int i = 1; i<=nb_classe; ++i){
        printf("entrez le nombre d'eleves par classe\n");
        scanf("%d", &nb_eleve);

        tot_eleve =nb_eleve;
    }
    printf("le nombre total d'eleve dans l'ecole est %d", tot_eleve);

}

void exercice8(){
    int n;
    printf("saisissez un nombre nous vérifierons si il est multiple de 2 et de 7\n");
    scanf("%d", &n);
    calculexo8(n);
}

void exercice9(){
    int nombreDeBlockInitial;
    printf("entrez votre nombre de blocks\n");
    scanf("%d", &nombreDeBlockInitial);
    calculexo9(nombreDeBlockInitial);
}

void exercice10(){
    calculexo10();
}