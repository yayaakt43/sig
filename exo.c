#include <stdio.h>
#include <signal.h>

int cpt=0;
void traiter_signal(){
        printf("Total Ctrl+C = %d \n", cpt);
        cpt++;

        if(cpt > 5){
                exit(0);
        }
    
}

void remise_a_zero(){
        cpt = 0 ;
}

int main(){
        signal(SIGINT, traiter_signal);
        signal(SIGTSTPR, remise_a_zero);
        printf("Le Ctrl+c est neutralisé\n");
    printf("Pour sortir du processus appuyer sur la touche Entrée\n");
        getchar();
        printf("Fin du programme\n");
return 0;}
