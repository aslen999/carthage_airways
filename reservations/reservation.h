#ifdef RESERVATION_H
#define RESERVATION_H
typedef struct{
    int jour,mois,annee,heure,minute;
}DateHeure;

typedef struct {
    int id,idPassager,idVol,repass,assistance,nbBagages;
    float prixtot,rembrsmnt;
char classe[15],statut[15];
}Reservation;
#endifok