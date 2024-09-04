#ifndef FUNCTION_H
#define FUNCTION_H

#include "structure.h"

 Livre livres[150] ;
 int nombreDeLivres = 0;

void ajouteLivre( ) {

    Livre nouveauLivre;



 printf("\t donne le auteur  \n");
    scanf("%s[^\n]", nouveauLivre.auteur);

    printf("\t donne le titre  \n");
    scanf("%s[^\n]", nouveauLivre.titre);

    printf("\t donne le prix de livre \n");
    scanf("%f",&nouveauLivre.prix);

    printf("\t donne le Quantit de livre \n");
    scanf("%d",&nouveauLivre.quantity );



    livres[nombreDeLivres]=nouveauLivre;
    nombreDeLivres++;



}

void afficherLesLivre (){

    for(int i=0;i<nombreDeLivres;i++)
    {
        printf("livre %d\n",i+1);
        printf("auteur %s\n",livres[i].auteur);
        printf("Titre %s\n",livres[i].titre);
        printf("prix %f\n",livres[i].prix);
        printf("quantity %d\n",livres[i].quantity);



    }
        printf("\n");


}
void rechercheParTitre() {
    char titreRecherche[50];
    int livreTrouve = 0;

    printf("entree le titre du livre pour rechercher : \n");
    scanf(" %[^\n]", titreRecherche);

    for (int i = 0; i < nombreDeLivres; i++) {
        if (strcmp(livres[i].titre, titreRecherche) == 0) {
            printf("Livre trouvee :\n");
            printf("\tAuteur : %s\n", livres[i].auteur);
            printf("\tTitre : %s\n", livres[i].titre);
            printf("\tQuantit : %d\n", livres[i].quantity);
            printf("\tPrix : %.2f\n", livres[i].prix);
            livreTrouve = 1;
            break;
        }
    }

    if (!livreTrouve) {
        printf("Livre non trouvé.\n");
    }
}

void mettreAJourQuantite() {
    char titreRecherche[50];
    int nouvelleQuantite;
    int livreTrouve = 0;

    printf("Entrez le titre livre poir mettre    jour la quantitee :\n");
    scanf(" %[^\n]", titreRecherche);

    for (int i = 0; i < nombreDeLivres; i++) {
        if (strcmp(livres[i].titre, titreRecherche) == 0) {
            printf("Livre trouve :\n");
            printf("\tAuteur : %s\n", livres[i].auteur);
            printf("\tTitre : %s\n", livres[i].titre);
            printf("\tQuantite actuelle : %d\n", livres[i].quantity);
            printf("\tPrix : %.2f\n", livres[i].prix);

            printf("Entrez la nouvelle quantite :\n");
            scanf("%d", &nouvelleQuantite);

            livres[i].quantity = nouvelleQuantite;
            printf("Quantite mise a  jour avec succs !\n");
            livreTrouve = 1;
            break;
        }
    }

    if (!livreTrouve) {
        printf("Livre non trouvé.\n");
    }
}

void supprimerLivre() {
    char titreRecherche[50];
    int livreTrouve = 0;

    printf("Entrez le titre du livre à supprimer :\n");
    scanf(" %[^\n]", titreRecherche);

    for (int i = 0; i < nombreDeLivres; i++) {
        if (strcmp(livres[i].titre, titreRecherche) == 0) {
            livreTrouve = 1;

            // Shift all subsequent books one position up
            for (int j = i; j < nombreDeLivres - 1; j++) {
                livres[j] = livres[j + 1];
            }

            // Decrease the count of the total number of books
            nombreDeLivres--;

            printf("Livre supprimé avec succès !\n");
            break;
        }
    }

    if (!livreTrouve) {
        printf("Livre non trouvé.\n");
    }
}
#endif
