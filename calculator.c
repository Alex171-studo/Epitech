/*
 * Basic Command-Line Calculator
 * Author: Alexis
 * Date: 19 janvier 2025
 * Description: Ce programme permet de lire une opération mathématique 
 *              saisie par l'utilisateur et de l'afficher.
 */

#include <stdio.h>
    int main (void){
        char operation [50]; // Variable qui va stocker l'opération 
        printf("Bienvenue dans la calculatrice !\n");
        printf("Entrez une opération \n");
        fgets(operation,sizeof(operation),stdin);   // Stockage dans opération qui compte 49 caractères
        printf("Vous avez entré : %s",operation);   // AFfichage de l'opération saisie



     return 0;
    }