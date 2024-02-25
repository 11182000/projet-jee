#include <stdio.h>
#include <stdlib.h>
void echanger (int *p,int *q)
{
    int tmp;
    tmp=*p;
    *p=*q;
    *q=tmp;

}

void saisirtableau(int T[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
}
void affichertableau(int T[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d\t",T[i]);

    }
}
int mintableau(int T[],int N)
{
    int i;
    int min;


       min=T[0];

    for(i=0;i<N;i++)
    {
        if(T[i]<min){
                    min=T[i];
                    }

}
return min;
}
void maxtableau(int T[],int N)
{
    int i;
    int min;
    int max;

       min=T[0];
       max=T[0];

    for(i=0;i<N;i++)
    {
        if(T[i]<min){
                    min=T[i];
                    }else{
            }if(T[i]>max){
                    max=T[i];
                    }

}
printf("le maximum est %d et le minimum est %d",max,min);
}

void inversion (int T[],int N)
{
    int i,j;
    int T1[N];
    j=0;
    for (i=N-1;i<=0;i--,j++)
    {
        T1[j]=T[i];
    }

    for(j=0;j<N;j++)
    {
        printf("T1[%d]=%d\n",j,T[j]);
    }
}


int main()
{
    int a,b;
    int *p=&a;
    int *q=&b;

    printf("veuillez saisir a et b");
    scanf("%d %d",&a,&b);
    printf("avant echange a=%d et b =%d",a,b);
    echanger(p,q);
    printf("apres echange a=%d et b =%d",a,b);
    int i,N;
    int T[100];
    printf("saisir la taille ");
    scanf("%d",&N);
    saisirtableau(T,N);
    affichertableau(T,N);
    printf("\nle minimum est %d\n",mintableau(T,N));
    maxtableau(T,N);
    inversion(T,N);

}
