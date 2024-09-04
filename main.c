#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "function.h"


//new commit
int main()
{
int choix;

  do{

     printf("\t bonjour \n \t s il vous plait choisi ce que vous voulez : \n");
    printf("\t 01 :ajouteLivre . \n");
    printf("\t 02 : afficherLesLivre . \n");
     printf("\t 03 :rechercheParTitre . \n");
    printf("\t 04 : mettreAJourQuantite. \n");
    printf("\t 05 : supprimerLivre. \n");
    printf("\n");

        scanf("%d",&choix);
    switch(choix)
    {
    case 1 :
          ajouteLivre();
        break;
    case 2 :
        afficherLesLivre();
        break;
   case 3 :
        rechercheParTitre() ;
        break;

    case 4 :
         mettreAJourQuantite ();

        break;

    case 5 :
        supprimerLivre();
        break;


        default:
                printf("Choix invalide, veuillez réessayer.\n");
                break;


    }

}while(choix > 0 && choix <= 5 );






    return 0;
}
