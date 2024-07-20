#pragma once

#include <string>
using namespace std;

class Pianeta
{
private:
	string nome;
	double massa;
	int diametro;
public:
    Pianeta();

    Pianeta(string nome, double massa, int diametro);

    Pianeta(const Pianeta& pianeta);

    string getNome() const;

    void setNome(std::string nuovoNome);

    double getMassa() const;

    void setMassa(double nuovaMassa);

    int getDiametro() const;

    void setDiametro(int nuovoDiametro);

    string toString();
};

