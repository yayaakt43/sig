#include <stdio.h>
#include <signal.h>

cpt=0;
void traiter_signal(){
        printf("Total Ctrl+C = %d \n", cpt);
        cpt++;
    
}

int main(){
        signal(SIGINT, traiter_signal);
        printf("Le Ctrl+c est neutralisé\n");
    printf("Pour sortir du processus appuyer sur la touche Entrée\n");
        getchar();
        printf("Fin du programme\n");
return 0;}
