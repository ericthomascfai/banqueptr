#include <stdio.h>

/*********************variables globales*********************/
float comptes[10];
/********************prototypes******************************/
void depot(const float*, const int*);
void debit(const float *, const int*);
void afficherSolde(const int*);
void virement(const int*,const int*, const float*);
/*********************implémentation**************************/
void depot(const float *valeur, const int *numcompte)
{
comptes[*numcompte]+=*valeur;

}
void debit(const float *valeur, const int *numcompte)
{
comptes[*numcompte]-=*valeur;
}
void afficherSolde(const int *numcompte)
{
    printf("Le solde du compte n° %d est %.2f euros",*numcompte,comptes[*numcompte]);
}

void virement(const int *emetteur, const int *destinataire, const float *montant) {


debit(montant,emetteur);
depot(montant,destinataire);

}

int main() {
    float valeurdepot=100;
    float valeurdebit=50;
    float valeurvirement=25;
    int numcompte=0;
    int numcompte1=1;
    depot(&valeurdepot,&numcompte);
    debit(&valeurdebit,&numcompte);
    afficherSolde(&numcompte);
    virement(&numcompte,&numcompte1,&valeurvirement);
    afficherSolde(&numcompte);
    afficherSolde(&numcompte1);



    return 0;
}