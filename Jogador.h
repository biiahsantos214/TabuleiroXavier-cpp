#ifndef STRUCT_JOGADOR
#define STRUCT_JOGADOR
using namespace std;
#include <string>
// Estrutura do Jogador    
    struct sjogador{
        char nome[30];
        int vida;
        int posicao;
    };

#ifndef STRUCT_JOGADOR
#define STRUCT_JOGADOR
using namespace std;
#include <string>
// Estrutura do Jogador    
    struct sjogador{
        char nome[30];
        int vida;
        int posicao;
    };

struct Jogo
{
    sjogador j1;
    sjogador j2;

    int turno;

    bool rodadaP;
    bool rodadaS;

    bool doisDadosP;
    bool doisDadosS;

    bool roletaP;
    bool roletaS;

    bool somaDadosP;
    bool somaDadosS;
};

// Estrutura para mapear as posições no tabuleiro do console
    struct Posicao {
    int lin, col;
};

// Estrutura para mapear as posições no tabuleiro do console
    struct Posicao {
    int lin, col;
};
 

#endif
