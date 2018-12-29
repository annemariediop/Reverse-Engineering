
#include <stdio.h>
#include <stdlib.h>
#include <libxml/parser.h>
 
int main() {
    xmlDocPtr doc;
    //xmlNodePtr racine;

    // Ouverture du fichier XML
    doc = xmlParseFile("fic1.xml");
    if (doc == NULL) {
        fprintf(stderr, "Document XML invalide\n");
 
    }
    else{
        fprintf(stderr, "Document XML valide\n");
    }
/*
    // Récupération de la racine
    racine = xmlDocGetRootElement(doc);
    if (racine == NULL) {
        fprintf(stderr, "Document XML vierge\n");
        xmlFreeDoc(doc);
        return EXIT_FAILURE;
    }
    printf("La racine du document est : %s\n", racine->name);
    // Libération de la mémoire
    xmlFreeDoc(doc);

    return EXIT_SUCCESS;
*/
}
