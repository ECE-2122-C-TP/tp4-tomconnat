//
// Created by tomco on 27/09/2021.
//

#ifndef ING3_MESFONCTIONS_H
#define ING3_MESFONCTIONS_H

int getmax(int a, int b);
/*
 * Fonction qui permet de donner le plus grand nombre entre deux
 * in : deux entier
 * out : le plus grand des deux
 */
int calculPerimetre(int l, int L);
/*
 * Fonction qui permet de calculer le perimetre d'un rectangle
 * in : la longueur et la largeur
 * out : le perimetre
 */
int SaisirEntier();
/*
 * Fonction qui permet de saisir un entier
 * in : rien
 * out : l'entier saisis
 */
int calculaire(int l, int L);
/*
 * Fonction qui permet de calculer l'aire d'un rectangle
 * in : la longueur et la largeur
 * out : l'aire
 */
void CalculEX3(int a);
/*
 * Fonction qui permet de voir si un nombre est divisible par 3 et si il est supérieur à 10
 * in  : un entier
 * out : rien
 */
int calculmoyenne(int a, int b, int c);
/*
 * Fonction qui êrmet de calculer la moyenne de 3 notes
 * in : les 3 notes saisie
 * out:  la moyenne
 */
int compare(int a, int b);
/*
 * Fonction qui permet de voir si deux nombre sont multiple entre eux
 * in : deux entier
 * out : 0 ou 1
 */
void calculexo8(int n);
/*
 * Fonction qui permet de savoir si un nombre est multiple de deux ou de 7
 * in : un entier
 * out : rien
 */
void calculexo9(int nbBlock);
/*
 * fonction qui permet  de savoir combien d'etage on peut construire et combien de block il nous restes
 * in : le nombre de block
 * out : rien
 */
int calculexo10();
/*
 * fonction qui nous permet de calculer la moyenne de notes saisie et se coupe quand une note est négative
 * in : rien
 * out : la moyenne
 */
#endif //ING3_MESFONCTIONS_H
