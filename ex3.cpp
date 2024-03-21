// Exercício 3: Transformação em Agenda Telefônica

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string transformarParaAgenda(const string& nomeCompleto) {
    size_t posUltimoEspaco = nomeCompleto.find_last_of(' ');
    string sobrenome = nomeCompleto.substr(posUltimoEspaco + 1);
    string nome = nomeCompleto.substr(0, posUltimoEspaco);
    return sobrenome + ", " + nome;
}

int main() {
    ifstream arquivo("nomes.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    string nome;
    while (getline(arquivo, nome)) {
        cout << transformarParaAgenda(nome) << endl;
    }

    arquivo.close();

    return 0;
}
