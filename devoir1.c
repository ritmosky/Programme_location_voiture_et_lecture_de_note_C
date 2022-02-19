#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>



// DEVOIR_1_SR_01 //


// Programme1 //


/*
int main()
{
    int a=20, b=5, c=-10, d=2;

    printf("%d \n ", a&&b || !0 && c++ && !d++);    // =1 car &&>|| et les operations logiques ne changent pas les valeurs
    printf("c=%d et d=%d \n", c, d);  // -10 2

    return 0;
}
*/


// Programme2 //


/*
int main()
{
    int p[4]={1,-2,3,4};
    int *q=p;                       // q pointe sur le 1er element du tableau

    printf("c=%d \n", *++q**q++);   // 4 car ++>* donc avec la pre-incrémentation on pointera sur -2 ensuite pour la post-incrémentation q pointe toujours sur -2 et c seulement apres l'operation que q sera incrémenté et pointera sur 3 et donc l'opération sera -2 * -2
    printf("c=%d \n", *q);      // 3 car q a subit une pre-incrementation et une post-incrémentation à la ligne précédente

    return 0;
}
*/


// Programme3 //


/*
int main()
{
    int a=20, b=5;
    int c=!--a/++!b;        // !b n'est pas une valeur pouvant recevoir une incrémentation

    printf("a=%d b=%d c=%d \n ", a, b, c);

    return 0;
}
*/



// Programme4 //


/*
int main()
{
    int a=-8, b=3;       //   ^= 0 si elements egaux
    a>>=2^b;           // ^ > >>  decalage a droite de 1 = /2**1

    printf("a=%d \n", a); // -4

    return 0;
}
*/


// Programme5 //

/*
int main()
{
    int p[4]={1,-2,3,4};    // & > |
    int *q=p;
    int d= *q&*q++|*q++;

    printf("d=%d \n", d);
    printf("q=%d \n", *q);      // 3 car q a subit une 2 post-incrementation avant

    return 0;
}
*/


// EXERCICE2 //


#define N 7        // nombre d'étudiants = nombre de notes


// Q1 // Programme pour mémoriser les notes dans un tableau


/*
int main()
{
    float POINTS[N], note;
    int n=0;              // nombres de notes entrées

    do
    {
        printf("note de eleve %d : ", n+1);
        scanf("%f", &note);
        POINTS[n]=note;
        n++;
    }while ( note>=0 && note<=60) && (n!=N) );       // on ne peut entrer de note négative et le nombre de notes entré ne doit pas dépasser le nombre d'élèves

    return 0;
}
*/


// Q2 // Programmes pour rechercher et afficher note maximale, minimale et la moyenne des notes

/*
int main()
{
    float POINTS[N], note;
    int n=0;              // nombres de notes entrées

    printf("\n\t\t\t POUR LE DEVOIR DE SR01 \n\n");
    do
    {
        printf("note de eleve %d : ", n+1);
        scanf("%f", &note);
        POINTS[n]=note;
        n++;
    }while ( (note>=0 && note<=60) && (n!=N) );       // on ne peut entrer de note négative et >60. De plus le nombre de notes entré ne doit pas dépasser le nombre d'élèves


    // pour la note maximale (valeur entière d'après énoncé)


    int maxi=POINTS[0];
    for (int i=1; i<N; i++)
    {
        if(maxi<POINTS[i])
        {
            maxi=POINTS[i];
        }
    }
    printf("\n\t La note maximale du devoir SR01 est %d \n", maxi);


    // pour la note minimale (valeur entière d'après énoncé)


    int mini=POINTS[0];
    for (int i=1; i<N; i++)
    {
        if(mini>POINTS[i])
        {
            mini=POINTS[i];
        }
    }
    printf("\n\t La note minimale du devoir SR01 est %d \n", mini);


    // pour la moyenne des notes


    float somme=0;
    for (int i=0; i<N; i++)
    {
        somme+=POINTS[i];
    }
    printf("\n\t La moyenne des notes du devoir SR01 est %f \n", somme/N);

    return 0;
}
*/


// Q3 // ETABLISSEMENT DU TABLEAU NOTES

/*
int main()
{
    float POINTS[N], note;
    int n=0;              // nombres de notes entrées

    do
    {
        printf("note de eleve %d : ", n+1);
        scanf("%f", &note);
        POINTS[n]=note;
        n++;
    }while ( (note>=0) && (n<N) );       // on ne peut entrer de note négative et le nombre de notes entré ne doit pas dépasser le nombre d'élèves

    int NOTES[N];

    for(int i=0; i<7; i++)
    {
        NOTES[i]=0;                     // on initialise à 0 car au départ il n'y a pas de notes et par la suite on implémentra si besoin
    }

    for (int i=0; i<N; i++)
    {
        if( (POINTS[i]>=0) && (POINTS[i]<=9) )
        {
            NOTES[0]++;
        }

        else if( (POINTS[i]>=10) && (POINTS[i]<=19) )
        {
            NOTES[1]++;
        }

        else if( (POINTS[i]>=20) && (POINTS[i]<=29) )
        {
            NOTES[2]++;
        }

        else if( (POINTS[i]>=30) && (POINTS[i]<=39) )
        {
            NOTES[3]++;
        }

        else if( (POINTS[i]>=40) && (POINTS[i]<=49) )
        {
            NOTES[4]++;
        }

        else if( (POINTS[i]>=50) && (POINTS[i]<=59) )
        {
            NOTES[5]++;
        }

        else if( POINTS[i]==60 )
        {
            NOTES[6]++;
        }
    }

    // AFFICHAGE DU NOMBRE DE NOTES PAR CATEGORIE ( NON DEMANDE PAR ENONCE )

    for(int i=0; i<6; i++)
    {
        printf("\n il ya %d note(s) entre %d0 et %d9 ", NOTES[i], i, i);
    }
    printf("\n il ya %d note(s) egale a 60", NOTES[6]);

    return 0;
}
*/


// Q4 // GRAPHIQUE EN NUAGE DE POINTS DU TABLEAU NOTES


/*
int main()
{
    float POINTS[N], note;
    int n=0;              // nombres de notes entrées

    do
    {
        printf("note de eleve %d : ", n+1);
        scanf("%f", &note);
        POINTS[n]=note;
        n++;
    }while ( (note>=0) && (n<N) );       // on ne peut entrer de note négative et le nombre de notes entré ne doit pas dépasser le nombre d'élèves

    int NOTES[N];

    for(int i=0; i<7; i++)
    {
        NOTES[i]=0;                     // on initialise à 0 car au départ il n'y a pas de notes et par la suite on implémentra si besoin
    }

    for (int i=0; i<N; i++)
    {
        if( (POINTS[i]>=0) && (POINTS[i]<=9) )
        {
            NOTES[0]++;
        }

        else if( (POINTS[i]>=10) && (POINTS[i]<=19) )
        {
            NOTES[1]++;
        }

        else if( (POINTS[i]>=20) && (POINTS[i]<=29) )
        {
            NOTES[2]++;
        }

        else if( (POINTS[i]>=30) && (POINTS[i]<=39) )
        {
            NOTES[3]++;
        }

        else if( (POINTS[i]>=40) && (POINTS[i]<=49) )
        {
            NOTES[4]++;
        }

        else if( (POINTS[i]>=50) && (POINTS[i]<=59) )
        {
            NOTES[5]++;
        }

        else if( POINTS[i]==60 )
        {
            NOTES[6]++;
        }
    }


    // AFFICHAGE DU NOMBRE DE NOTES PAR CATEGORIE ( NON DEMANDE PAR ENONCE )

    for(int i=0; i<6; i++)
    {
        printf("\n il ya %d note(s) entre %d0 et %d9 ", NOTES[i], i, i);
    }
    printf("\n il ya %d note(s) egale a 60", NOTES[6]);


    // DETERMINER VALEUR MAXIMALE DANS LE TABLEAU NOTES


    int MAXN=NOTES[0];
    for(int i=1; i<7; i++)
    {
        if (MAXN<NOTES[i])
        {
            MAXN=NOTES[i];
        }
    }
    printf("\n\n La valeur maximale dans le tableau NOTES est : %d \n\n\n", MAXN);

    // REPRESENTATION

    while (MAXN>=0)         // pour chaque valeur prise par MAXN on va placer les points correspondant aux catégories dont le nombre de notes=MAXN
    {                       // commencer par MAXN facilite la construction du nuage de points. on aurait pu utiliser une boucle for de MAXN->0 inclus

        if (MAXN!=0)            // cas !=0 on place MAXN correspondant et les différents points
        {
            printf("\t%d>\t", MAXN);            // pour représenter les ordonnées
            for (int i=0; i<7; i++)
            {
                if(NOTES[i]==MAXN)      // condition pour repérer les catégories ayant un nombre de note=MAXN
                {
                    printf("     o    ");       // on marque le point dans ce cas
                }
                else
                {
                    printf("          ");       // sinon on complète par des espaces pour ne pas fausser la représentation
                }
            }
            printf("\n\n");
            MAXN--;
        }

        else                    // cas=0, on place les abscisses ainsi que les catégories de notes vides
        {
            int i=0;                // pour représenter les abscisses
            printf("\t\t|");
            while (i<7)         // il ya 7 catégories
            {
                if (NOTES[i]!=0)        // si la catégorie n'est pas vide alors on complète les abscisses
                {
                    printf(".........|");
                    i++;
                }
                else                    // sinon on insère un point au niveau des abscisses
                {
                    printf("....o....|");
                    i++;
                }
            }

            printf("\n\t\t");
            int j=0;
            while(j<6)            // pour représenter les catégories de notes
            {
                printf("|  %d0-%d9  ", j, j);
                j++;
            }
            printf("|    60   | \n");
            MAXN--;                 // pour ne pas avoir une boucle infinie
        }
    }
    return 0;
}
*/


// Q5 // GRAPHIQUE EN BATON DU TABLEAU NOTES


/*
int main()
{
    float POINTS[N], note;
    int n=0;              // nombres de notes entrées

    do
    {
        printf("note de eleve %d : ", n+1);
        scanf("%f", &note);
        POINTS[n]=note;
        n++;
    }while ( (note>=0) && (n<N) );       // on ne peut entrer de note négative et le nombre de notes entré ne doit pas dépasser le nombre d'élèves

    int NOTES[N];

    for(int i=0; i<7; i++)
    {
        NOTES[i]=0;                     // on initialise à 0 car au départ il n'y a pas de notes et par la suite on implémentra si besoin
    }

    for (int i=0; i<N; i++)
    {
        if( (POINTS[i]>=0) && (POINTS[i]<=9) )
        {
            NOTES[0]++;
        }

        if( (POINTS[i]>=10) && (POINTS[i]<=19) )
        {
            NOTES[1]++;
        }

        if( (POINTS[i]>=20) && (POINTS[i]<=29) )
        {
            NOTES[2]++;
        }

        if( (POINTS[i]>=30) && (POINTS[i]<=39) )
        {
            NOTES[3]++;
        }

        if( (POINTS[i]>=40) && (POINTS[i]<=49) )
        {
            NOTES[4]++;
        }

        if( (POINTS[i]>=50) && (POINTS[i]<=59) )
        {
            NOTES[5]++;
        }

        if( POINTS[i]==60 )
        {
            NOTES[6]++;
        }
    }

    // AFFICHAGE DU NOMBRE DE NOTES PAR CATEGORIE ( NON DEMANDE PAR ENONCE )

    for(int i=0; i<6; i++)
    {
        printf("\n il ya %d note(s) entre %d0 et %d9 ", NOTES[i], i, i);
    }
    printf("\n il ya %d note(s) egale a 60", NOTES[6]);


    // DETERMINER VALEUR MAXIMALE DANS LE TABLEAU NOTES

    int MAXN=NOTES[0];
    for(int i=1; i<7; i++)
    {
        if (MAXN<NOTES[i])
        {
            MAXN=NOTES[i];
        }
    }
    printf("\n\n La valeur maximale dans le tableau NOTES est : %d \n\n\n", MAXN);


    // REPRESENTATION

    while (MAXN>=0)         // pour chaque valeur prise par MAXN on va placer les batons NMAX jusqu'à 1
    {                       // commencer par placer les batons en NMAX puis NMAX-1 ... 1

        if (MAXN!=0)            // cas !=0 on place NMAX correspondant et les batons des catégories associées
        {
            printf("\t%d>\t", MAXN);            // pour représenter les ordonnées
            for (int i=0; i<7; i++)
            {
                if(NOTES[i]>=MAXN)      // condition pour repérer les catégories ayant un nombre de note=NMAX
                {
                    printf("  ########");       // on marque le baton dans ce cas
                }
                else
                {
                    printf("          ");       // sinon on complète par des espaces pour ne pas fausser la représentation
                }
            }
            printf("\n\n");
            MAXN--;
        }

        if(MAXN==0)
        {
            int i=0;                // pour représenter les abscisses
            printf("\t\t|");
            while (i<7)         // il ya 7 catégories
            {
                printf(".........|");
                i++;
            }

            printf("\n\t\t");
            int j=0;
            while(j<6)            // pour représenter les catégories de notes
            {
                printf("|  %d0-%d9  ", j, j);
                j++;
            }
            printf("|    60   | \n");
            MAXN--;
        }
    }
    return 0;
}
*/


// EXERCICE3 // GESTION DE PARC DE VOITURES




// Q1 // STRUCTURE VOITURE


typedef struct Voiture
{
    char *Modele;                // la premiere lettre en majuscule pour eviter toute confusion avec les arguments des futures fonctions
    char *Matricule;
    int *Kmg;       // pour le kilométrage
    int *Etat;             // 1 si disponible et prête à la location 0 si deja louee
    struct Voiture *suivante;       // pointeur sur la voiture suivante

}Voiture;


// POUR CREER UNE VOITURE //

Voiture *creer_voiture()
{
    Voiture *memoire=malloc(sizeof(Voiture));
    return memoire;
}


// Q2 // FONCTION POUR CREER PARC DE n VOITURES



void *init(Voiture *voitures, int n)
{
    Voiture *voiture;
    char *modele=malloc(sizeof(char)*10);
    char *matricule=malloc(sizeof(char)*10);
    int *kmg=malloc(sizeof(int)*5);
    int *etat=malloc(sizeof(int));

    voiture=voitures;       // on pointe sur le 1er élément
    for (int i=0; i<n; i++)
    {
        printf("\n POUR LA VOITURE %d \n", i+1);

        printf(" \n entrez le modele : \n");
        scanf("%s", modele);
        voiture->Modele=malloc(sizeof(char)*strlen(modele));
        voiture->Modele=modele;

        printf(" \n entrez l'immatriculation : \n");
        scanf("%s", matricule);
        voiture->Matricule=malloc(sizeof(char)*strlen(matricule));
        voiture->Matricule=matricule;

        printf(" \n entrez le kilometrage total : \n");
        scanf("%d", kmg);
        voiture->Kmg=malloc(sizeof(int)*5);
        voiture->Kmg=kmg;

        printf(" \n entrez 1 si la voiture est disponible et 0 si elle est deja en location : \n");
        scanf("%d", etat);
        voiture->Etat=malloc(sizeof(int));
        voiture->Etat=etat;

        printf("\n POUR LA VOITURE %d \n", i+1);
        printf("\n Modele : %s", voiture->Modele);
        printf("\n Immatriculation : %s", voiture->Matricule);
        printf("\n Kilometrage total : %d", *voiture->Kmg);
        printf("\n Etat de location : %d\n\n", *voiture->Etat);

        if (i!=n)
        {
            voiture->suivante=creer_voiture();
            voiture=voiture->suivante;
        }
        else
        {
            voiture->suivante=NULL;         // on termine la fin de la liste chainee
        }

    }

    //return &voitures;
}


// fonction recherche voiture renvoie 0 si la voiture n'existe pas, sinon renvoie son pointeur


Voiture *existe(char *matricule, Voiture *voitures, int n)
{
    Voiture *vv;
    vv=voitures;
    while(vv->suivante!=NULL)             // tant qu'on a pas parcouru toutes les voitures
    {
        if( strcmp(vv->Matricule, matricule)==0 )               // cad sont egales
        {
            printf("\n la voiture immatriculee %s existe \n", matricule);
            return vv;
        }
        vv=voitures->suivante;
    }
    printf("\n la voiture immatriculee %s existe \n", matricule);
    return 0;
}


// Q3 // FONCTION PERMETTANT DE LOUER UNE VOITURE


int louer(char *matricule, Voiture *voitures, int n)
{
    if ( existe(matricule, voitures, n)==0 )     // cad voiture nexiste pas
    {
        return 0;
    }

    Voiture *v;
    v=existe(matricule, voitures, n);           // on pointe directement sur la voiture concernée
    if (*v->Etat==0)         // cad deja louee
    {
        printf("\n la voiture d'immatriculation %s est déja en cours de location \n", matricule);
        return 0;
    }
    else
    {
        printf("\n la voiture d'immatriculation %s est disponible \n", matricule);
        *v->Etat=0;                      // elle est passée en location donc n'est plus disponible
        return 0;
    }
}


// Q4 // RETOUR D'UNE VOITURE



int retour(char *matricule, Voiture *voitures, int n)
{
    if ( existe(matricule, voitures, n)==0 )     // cad voiture nexiste pas
    {
        return 0;
    }
    Voiture *v;
    v=existe(matricule, voitures, n);
    if(*v->Etat!=0)     // voiture netait pas marquee comme etant en location
    {
        printf("Erreur, la voiture immatriculee %s n\'est pas marquee comme etant en location",matricule);
        return 0;
    }

    int km_fait;
    printf("combien de km ont ete effectues ? ");
    scanf("%d",&km_fait);

    *v->Kmg+=km_fait;       // ajout sur le kilometrage
    *v->Etat=1;         // voiture devient disponible

    return 0;
}


// Q5 // RENVOYER ETAT D'UNE VOITURE


int etat(char *matricule, Voiture *voitures, int n)
{
    if ( existe(matricule, voitures, n)==0 )     // cad voiture nexiste pas
    {
        return 0;
    }

    Voiture *v;
    v=existe(matricule, voitures, n);

    printf("\n POUR CETTE VOITURE \n");
    printf("MODELE : %s \n", v->Modele);
    printf("IMMATRICULATION : %s \n", v->Matricule);
    printf("KILOMETRAGE : %d \n", v->Kmg);
    printf("ETAT DE LOCATION : %d \n", v->Etat);
    return 0;
}


// Q6 // AFFICHER ETAT DU PARC DE VOITURES //  nom du fichier sera lu au clavier.



void etatParc(Voiture *voitures, int n)
{
    int nb_location=0, nb_dispo=0;
    float somme_km;
    Voiture *v;
    somme_km=0;
    while(v->suivante!=NULL)             // tant qu'on a pas parcouru toutes les voitures
    {
        if(*v->Etat==0 )               // cad en location
        {
            nb_location++;
        }
        else
        {
            nb_dispo++;
        }

        somme_km += *v->Kmg;
        v=v->suivante;
    }
    printf("\n le PARC possede : \n");
    printf("%d voitures dont\n", n);
    printf("%d voitures en location \n", nb_location);
    printf("%d voitures disponibles\n", nb_dispo);
    printf("Et le kilometrage moyen de l'ensemble des voitures est de %fkm\n", somme_km/n);
}


// Q7 // SAUVEGARDER LES VOITURES DU PARC DANS UN FICHIER BINAIRE


void save(char *fichier, Voiture *voitures, int n)
{
    FILE *fch;
    fch=fopen(fichier, "wb"); // ouverture en mode écriture en binaire
    if(fch!=NULL)
    {
      fwrite(voitures, sizeof(Voiture), n, fch);
    }
    fclose(fch);
}

// Q8 // PROGRAMME PRINCIPAL


void afficher_menu()
{
    printf("\n==========================================\n\n");
    printf("\t------------ MENU ---------------\n\n");
    printf("\t 1: LOUER UNE VOITURE\n");
    printf("\t 2: RETOUR D'UNE VOITURE\n");
    printf("\t 3: ETAT  D'UNE VOITURE\n");
    printf("\t 4: ETAT DU PARC DE VOITURES\n");
    printf("\t 5: SAUVEGARDER L'ETAT DU PARC\n");
    printf("\t 0: FIN DU PROGRAMME\n");
    printf("\n==========================================\n\n");
}


int main()
{
    char choix, *matricule, *fichier;
    int n;
    printf("\n entrez le nombre de voitures\n ");
    scanf("%d",&n);

    Voiture *voitures=(Voiture *)malloc(n*sizeof(Voiture));
    init(voitures, n);
    printf("\n\n");

    afficher_menu();

    do
    {

        choix=getchar();
        /*while (choix!='\n' && choix != EOF)
        {
            choix = getchar();      // vider le buffer
        }*/

        switch(choix)               // MENU S'AFFICHE APRES CHAQUE EXECUTION //
        {
            case'1':
                printf("\nLOUER UNE VOITURE\n");
                printf("\n entrez immatriculation de la voiture\n ");
                scanf("%s",matricule);
                louer(matricule, voitures, n);
                afficher_menu();
                break;

            case'2':
                printf("\nRETOUR D'UNE VOITURE\n");
                printf("\n entrez immatriculation de la voiture\n ");
                scanf("%s",matricule);
                retour(matricule, voitures, n);
                afficher_menu();
                break;

            case'3':
                printf("\nETAT  D'UNE VOITURE\n");
                printf("\n entrez immatriculation de la voiture\n ");
                scanf("%s",matricule);
                etat(matricule, voitures, n);
                afficher_menu();
                break;

            case'4':
                printf("\nETAT DU PARC DE VOITURES\n");
                etatParc(voitures, n);
                afficher_menu();
                break;

            case'5':
                printf("\nSAUVEGARDER L'ETAT DU PARC\n");
                printf("\n entrez le nom du fichier a ouvrir \n");
                scanf("%s",fichier);
                save(fichier, voitures, n);
                afficher_menu();
                break;
        }

    }while(choix!='0');

    printf("\n\n*** FIN DU PROGRAMME ***\n");
    free(voitures);
    return 0;
}



// BONUS // Réécrire fonction init pour récupérer voitures à partir du fichier sauvegardé en q7


void init2(char *fichier)
{
    FILE *fch;
    Voiture *voitures;
    voitures=(Voiture *)malloc(sizeof(Voiture));
    Voiture *v;
    v=voitures;
    fch=fopen(fichier,"rb");        // ouverture en mode lecture en binaire
    while(fread(voitures, sizeof(Voiture), 1, fch) ==1) // si fch bien ouvert en écriture
    {
        v->Modele=voitures->Modele;
        v->Matricule=voitures->Matricule;
        v->Kmg=voitures->Kmg;
        v->Etat=voitures->Etat;
        v->suivante=voitures->suivante;
        v=v->suivante;
    }

    free(voitures);
    fclose(fch);
}
