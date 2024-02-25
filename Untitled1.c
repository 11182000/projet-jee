#include<stdio.h>
#include<string.h>
void main()
{
    char prenom="Manel";
    char nom="NDIAYE";
    printf("le prenom est %s et le nom est %s",prenom,nom);
    int sexe;
    printf("saisir 1 OU 2 POUR le sexe de l'individus ");
    scanf("%d",&sexe);
    if(sexe==1){
        printf("Bomjour Monsieur %s %s",prenom,nom);
    }else
    {
        printf("Bomjour Monsieur %s %s",prenom,nom);
    }
}
