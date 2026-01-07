#include <stdio.h>
#include <signal.h>

int cpt=0;
void traiter_signal(){
        printf("Total Ctrl+C = %d \n", cpt);
        cpt++;

        if(cpt == 5){
                break;
        }
    
}

int main(){
        signal(SIGINT, traiter_signal);
        printf("Le Ctrl+c est neutralisé\n");
    printf("Pour sortir du processus appuyer sur la touche Entrée\n");
        getchar();
        printf("Fin du programme\n");
return 0;}
