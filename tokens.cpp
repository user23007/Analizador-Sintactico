#include "tokens.h"
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

tokens::tokens(){
}
tokens::~tokens() {
}
void tokens::verificar(string phrase){
    string tphrase = phrase;
    //FRASE A VECTOR>
    vector<string> fila;
    string lectura;
    stringstream auxPhrase(tphrase);
    while (getline(auxPhrase, lectura, ' ')){
        fila.push_back(lectura);
    }
        //Abrimos el archivo txt de verbos>
    ifstream archivoVerbos("verbos.txt");
    string lineaVerbos;
    vector<string>wordVerbos;

        //Abrimos el archivo txt de sujetos>
    ifstream archivoSujetos("sujetos.txt");
    string lineaSujetos;
    vector<string>wordSujetos;
        //Encontremos el tamaño del archivo Verbos> *Error*
    string delete_contador_verbos;
    int contadorVerbos = 0;
    while(archivoVerbos >> delete_contador_verbos){
        contadorVerbos++;
    }
    //Pongamos cada linea del archivo verbos en un vector> *Problemas*
    string numeros;
    string newVerbos;
    while(getline(archivoVerbos, lineaVerbos)){
        newVerbos = lineaVerbos+" ";
    }
    cout<<newVerbos<<endl;
    while (getline(archivoVerbos, lineaVerbos, '\n')){
        wordVerbos.push_back(lineaVerbos);
    }
    //Encontremos el tamaño del archivo Sujeto>
    string delete_contador_sujetos;
    int contadorSujetos = 0;
    while(getline(archivoSujetos, delete_contador_sujetos)){
        contadorSujetos++;
    }

    //Pongamos cada linea del archivo Sujetos en un vector>
    while(getline(archivoSujetos, lineaSujetos)){
        wordSujetos.push_back(lineaSujetos);
    }

    //ANALIZADOR
    int contadorEliminarSujetos = 0;
    int contadorEliminarVerbos = 0;
    //PRIMER CASO SUJETO + VERBO + PREDICADO -> Ana comer chocolate
    for(int i = 0; i < contadorSujetos; ++i){

        if(wordSujetos[i] == fila[0]){
            for(int p = 0; p< contadorVerbos; ++p){
                if(wordVerbos[p] == fila[1]){
                    contadorEliminarVerbos++;
                    if (contadorEliminarVerbos == 1){
                        printf("siiiiiii es validaaaaa");
                    }
                }else if(p == contadorVerbos-1){ //
                    printf("Invalida...");
                }
            }
        }
        else if(i == contadorSujetos-1){
            for(int p1 = 0; p1 < contadorVerbos; ++p1){
                if(wordVerbos[p1] != fila[0] && fila[0] != "la" && fila[0] != "La" &&
                   fila[0] != "las" && fila[0] != "Las" &&
                   fila[0] != "los" && fila[0] != "Los" &&
                   fila[0] != "lo" && fila[0] != "Lo" &&
                   fila[0] != "un" && fila[0] != "Un" &&
                   fila[0] != "Una" && fila[0] != "una" &&
                   fila[0] != "unas" && fila[0] != "Unas" &&
                   fila[0] != "unos" && fila[0] != "Unos"){
                    printf("Oración invalida!");
                }else if(p1 == contadorVerbos-1){
                    printf("valida");
                }
            }
        }
         else if(contadorEliminarVerbos > 1){
            printf("Invalidaa");
        }
         else{
            cout<<"Caso invalido"<<endl;
         }
    }
    //SEGUNDO CASO SUJETO(PRONOMBRE + NOMBRE) + VERBO + PREDICADO -> la cancha es grande
    if(fila[0] == "El" || "el" == fila[0]) {
        cout<<contadorSujetos<<endl;
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("las" == fila[0] || "Las" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("los" == fila[0] || "Los" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("lo" == fila[0] || "Lo" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("un" == fila[0] || "Un" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("una" == fila[0] || "Una" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("unas" == fila[0] || "Unas" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else if("unos" == fila[0] || "Unos" == fila[0]){
        for(int i = 0; i < contadorSujetos; ++i){
            int contador_propio_sujetos = 0;
            if(wordSujetos[i] == fila[1]){
                contador_propio_sujetos++;
                if(contador_propio_sujetos >1){
                    printf("Oracion inválida");
                }
                for(int p = 0; p < contadorVerbos; ++p){
                    int contador_propio_verbos = 0;
                    if(wordVerbos[p] == fila[2]){
                        contador_propio_verbos++;
                    }
                }
            }else if(i == contadorSujetos-1 || i == contadorVerbos-1){
                printf("Invalida...");
            }
        }
    }
    else{
        cout<<"oracion invalida"<<endl;
    }
}