#ifndef TOKENS_H
#define TOKENS_H
#include <sstream>
#include <string>
#include <fstream>
#include <vector>

class tokens
{
public:
    tokens();
    ~tokens();
    std::string getSujeto();
    std::string getVerbo();
    //int confirmar(std::string);
    //int revisar(std::string);
    void verificar(std::string phrase);


private:
    std::string Sujeto;
    std::string Verbo;
    std::string articulos;
};

#endif // TOKE