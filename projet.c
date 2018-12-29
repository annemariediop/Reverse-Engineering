
#include <stdio.h>
#include <stdlib.h>
#include <libxml/parser.h>
 
int main() {
    xmlDocPtr doc;
   

    // Ouverture du fichier XML et verification validité
    doc = xmlParseFile("fic1.xml");
    if (doc == NULL) {
        fprintf(stderr, "Document XML invalide\n");
 
    }
    else{
        fprintf(stderr, "Document XML valide\n");
    }

}
