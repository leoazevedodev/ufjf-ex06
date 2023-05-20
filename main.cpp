#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;
void particiona(ListaCont *L1, ListaCont *L2, ListaCont *L3)
{
    int tam = 50;
    for(int i = 0; i < tam; i++)
    {
        L1->insereFinal(i);
    }

    for(int i = 0; i < 25; i++)
    {
        L2->insereFinal(L1->get(i));
    }

    for(int i = 0; i < 25; i++)
    {
        L1->removeInicio();
    }

    for(int i = 0; i < 13; i++)
    {
        L3->insereFinal(L1->get(i));
    }

    for(int i = 0; i < 13; i++)
    {
        L1->removeInicio();
    }

    L2->imprime();
    L3->imprime();

}
int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();

    cout << "Indice: " << l.buscaMaior(98) << endl;

    l.limpar();

    int tam = 4;
    int vet[tam] = {1 , 2 ,25 ,54};

    l.insereValores(tam, vet);

    l.imprime();

    ListaCont L1(50);
    ListaCont L2(50);
    ListaCont L3(50);

    //particiona(&L1, &L2, &L3);

    l.aumentaCapacidade(15);
    l.imprime();


    return 0;
}
