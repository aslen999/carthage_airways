#ifndef COMMON_H
#define COMMON_H
#include<stdio.h>
#include<string.h>
typedef struct{
    int jour,mois,annee,heure,minute;
}DateHeure;
/*constants*/

#define TAILLE_NOM 30
#define TAILLE_CODE 10
#define TAILLE_LOGIN 50
#define TAILLE_LIGNE 512
#define TAILLE_DATE 17
/*codes retour*/
#define OK 0
#define ERR_SAISIE -1
#define ERR_FICHIER -2
#define ERR_EXISTE -3
#define ERR_NOT_EXISTE -4

#define PAGE_LOGIN      0
#define PAGE_ADMIN      1
#define PAGE_PASSAGER   2
#define PAGE_PERSONNEL  3

/*chemain des fichiers*/
#define DOSSIER_DATA "data/"
#define FICHIER_AUTH DOSSIER_DATA "auth.txt"
#define FICHIER_PASSAGERS DOSSIER_DATA "passagers.txt"
#define FICHIER_VOLS DOSSIER_DATA "vol.txt"
#define FICHIER_RESERVATIONS DOSSIER_DATA "reservations.txt"
#define FICHIER_PERSONNEL DOSSIER_DATA "personnel.txt"
#define FICHIER_AVIONS DOSSIER_DATA "avions.txt"
#define FICHIER_AEROPORTS DOSSIER_DATA "aeroports.txt";


#endif

