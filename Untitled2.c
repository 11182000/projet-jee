#include<stdio.h>
#include<string.h>
void main()
{
    prenom="Manel";
    nom="NDIAYE";
    char sexe;
    printf("saisir M OU F POURle sexe de l'individus ");
    scanf("%s",&sexe);
    if(sexe=="M"){
        printf("Bomjour Monsieur %s %s",prenom,nom);
    }else
    {
        printf("Bomjour Monsieur %s %s",prenom,nom);
    }
}
