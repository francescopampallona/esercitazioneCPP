#include "Pianeta.h"
#include <sstream>


Pianeta::Pianeta() : nome(""), massa(0.0), diametro(0) {}

Pianeta::Pianeta(std::string nome, double massa, int diametro)
    : nome(nome), massa(massa), diametro(diametro) {}

std::string Pianeta::getNome() const {
    return nome;
}

void Pianeta::setNome(std::string nuovoNome) {
    nome = nuovoNome;
}

double Pianeta::getMassa() const {
    return massa;
}

void Pianeta::setMassa(double nuovaMassa) {
    massa = nuovaMassa;
}

int Pianeta::getDiametro() const {
    return diametro;
}

void Pianeta::setDiametro(int nuovoDiametro) {
    diametro = nuovoDiametro;
}

string Pianeta::toString() {
    ostringstream out;
    out << scientific; // Imposta la notazione scientifica per i numeri floating-point
    out << "Nome: " << nome
        << ", massa: " << massa
        << ", diametro: " << diametro;
    return out.str();
}