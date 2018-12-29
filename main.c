/* main.c */

/*
    This program demonstrates a simple application of JSON_checker. It reads
    a JSON text from STDIN, producing an error message if the text is rejected.

        % JSON_checker <test/pass1.json
*/

#include <stdlib.h>
#include <stdio.h>
#include "JSON_checker.h"

int main(int argc, char* argv[]) {
/*
    Read STDIN. Exit with a message if the input is not well-formed JSON text.

    jc will contain a JSON_checker with a maximum depth of 20.
*/
if(argc > 1)
{
  FILE *fichier = NULL;
    char caractere;
    if (argc > 1)
    {
        fichier = fopen (argv[1], "r"); /* On ouvre le fichier dont le chemin est accessible via argv[1] */
    }
//on parcours tout le fichier entré en parametre et on verifie si le format est excet a celui du bibliotheque JSON_checker
    if (fichier != NULL)
   {
         for (;;) {
              caractere = fgetc (fichier);
              JSON_checker jc = new_JSON_checker(20);
                if (!JSON_checker_char(jc, caractere)) {
                    fprintf(stderr, "JSON_checker_char: syntax error\n");
                  exit(1);
                    }
                    else
                    printf("formant exact\n");
              break;
                  }
           }

         }

   }
