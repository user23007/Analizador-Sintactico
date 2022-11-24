#include <iostream>
#include <string>
#include <fstream>
#include "tokens.h"
#include <sstream>
#include <vector>

using namespace std;

int main() {
    tokens obj = tokens();
    string palabrita;
    cout<<"ingresa la frase"<<endl;
    getline(cin, palabrita);
    obj.verificar(palabrita);


}