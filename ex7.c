#include <stdio.h>


 int main(){
    float l1,l2,d,d1,d2,r;
    printf("Donner la largeur et la longeur \n");
    scanf(" %f  %f", &l1, &l2);
    printf("le coté d un carré \n");
    scanf(" %f", &d);
    printf("la largeur et longeur d un rectangle \n");
    scanf(" %f %f", &d1, &d2);
    printf("le rayon d'un cercle \n");
    scanf(" %f", &r);
    float s=l1*l2;
    float s1=d*d;
    float s2=d1*d2;
    float s3=(r*r)*3.14;
    float sc=0;
    int somme=0;
    int i=0; 
    float t[3]={s1,s2,s3};
    while(i<3){
        if(sc+t[i]<=s){
            sc=sc+t[i];
            somme++;
        }else{
            t[i]=somme;
            i++;
            sc=0;
            somme=0;
        }
    }
    printf("Le nombre de Carrés qu on peut effectuer dans la surface %f est %f \n ",s,t[0]);
    printf("Le nombre de rectangle qu on peut effectuer dans la surface %f est %f \n ",s,t[1]);
    printf("Le nombre de cercle qu on peut effectuer dans la surface %f est %f \n ",s,t[2]);
 }