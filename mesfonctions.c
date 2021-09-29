//
// Created by tomco on 27/09/2021.
//

#include "mesfonctions.h"
#include <stdio.h>
int SaisirEntier() {
    int nb;
    printf("Saisissez un entier\n ");
    scanf("%d", &nb);
    return nb;
}

int getmax(int a, int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}

int calculPerimetre(int l, int L){
    int perimetre;
    perimetre = (l+L)*2;
    return perimetre;
}

int calculaire(int l, int L){
    int aire;
    aire  = l*L;
    return aire;
}

void CalculEX3(int a){
    int c = 3;
    if(a%c == 0){
        printf("%d est divisible par 3\n", a);
    }
    else{
        printf("%d n'est pas divisible par 3\n",a);
    }
    if(a>10){
        printf("%d est superieur a 10\n", a);
    }
    else{
        printf("%d n'est pas superieur a 10\n", a);
    }

}

int calculmoyenne(int a, int b, int c){
    int moyenne;
    if(!(0<a<20)){
        return -1;
    }
    if(!(0<b<20)){
        return -1;
    }
    if(!(0<c<20)){
        return -1;
    }
    moyenne = (a+b+c)/3;
    return moyenne;
}

int compare(int a, int b){
    if(a%b == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void calculexo8(int n){
    while(!(n % 2 ==0 && n % 7 ==0)){
        printf("Ce nombre n'est pas multiple de 2 ou de 7. Ressaisissez un nombre nous vérifierons si il est multiple de 2 et de 7\n");
        scanf("%d",&n);
    }
    printf("Ce nombre est multiple de deux ou de 7\n");
}

void calculexo9(int nbBlock){
    int nombreDeBlockRestant;
    int nb_etage=0;
    int i=1;
    nombreDeBlockRestant=nbBlock;
    while(nombreDeBlockRestant - i*i >=0){
        nombreDeBlockRestant = nombreDeBlockRestant - (i*i);
        nb_etage++;
        i++;
    }
    printf("vous pouvez construire %d etages, il vous reste %d blocks\n", nb_etage, nombreDeBlockRestant);
}

int calculexo10(){
    int note, nb_note = 0, moyenne, somme = 0;

    while(!(note < 0)){
        printf("veuillez rentrez les notes dont vous voulez calculez la moyenne\n");
        scanf("%d", &note);
        if (note<0){
            moyenne = somme/nb_note;
            printf("la moyenne de vos notes est :%d\n", moyenne);
            return 0;
        }
        somme = somme + note;
        //ancienne_note = note;
        nb_note++;
        printf("la somme est de %d\n", somme);
        printf("le nombre de note est de %d\n", nb_note);
    }
}