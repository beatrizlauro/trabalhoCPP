/*
* Descrição do Problema:
Considere uma loja de esportes da Atlética de seu curso e para ajudar você irá elaborar um sistema que 
auxilie na gestão da mesma.

* Especificação:
Desenvolva um programa em C++ para realizar a gestão das informações, o sistema deve trabalhar com 
um menu com as seguintes opções:
1. Cadastro de Pessoas com os campos: nome, cpf, sexo, data de nascimento, endereco, time 
favorito, selecaoFavorita, gostaFutebol, gostaVolei, gostaBasquete, gostaHandbol, 
gostaNatacao, gostaCiclismo, gostaAtletismo, gostaMusculacao.
2. Cadastro de Produtos com os campos: descrição, modelo, marca, tamanho, cor, preco.
3. Cadastro de Itens de Produtos com os campos: produto, dataCompra, valorCompra, situação.
4. Cadastro Venda com os campos: produto, cliente, valorVenda, dataVenda, dataRecebimento, 
situação.
5. Listagem dos produtos com determinado preço ( leia do teclado).
6. Listagem das 10 últimas vendas
*/

#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;

int main(){
    setlocale (LC_ALL, "portuguese");
    string /*case 1*/ nome[10], cpf[10], nascimento[10], endereco[10], timefav[10], selecaoFavorita[10];
    char /*case 1 */ sexo[10], gostaFutebol[10], gostaVolei[10], gostaBasquete[10], gostaHandbol[10], gostaNatacao[10], gostaCiclismo[10], gostaAtletismo[10], gostaMusculacao[10];
    string /*case 2*/ produtoCadastro[10], descricao[10], modelo[10], marca[10], tamanho[10], cor[10], preco[10];
    string /*case 3 */ produtoItens[10], dataCompra[10], valorCompra[10], situacao[10];
    string /*case 4*/ produtoVenda[10], cliente[10], valorVenda[10], dataVenda[10], dataRecebimento[10];
    string valor;
    int op = -1;
    bool achei = false;
    int indice = 0;

    while (op != 0) {
        cout << "\nKRYPTO STORE \nOpções: \n1- Cadastro de Pessoas; \n2- Cadastro de Produtos; \n3- Cadastro de Itens de Produtos;";
        cout << "\n4- Cadastro Venda; \n5- Listagem dos Produtos (Por Preço); \n6- Listagem das 10 últimas vendas. \nQual a opção desejada? ";
        cin >> op;
        cout << endl;

        switch (op) {
            case 1:
                cout << "CADASTRO DE PESSOAS: \n";
                cout << "Nome: ";
                cin.ignore();
                getline(cin, nome[indice]);
                cout << "CPF: ";
                cin >> cpf[indice];
                do{
                cout << "Sexo(F ou M): ";
                cin >> sexo[indice];
                sexo[indice] = toupper(sexo[indice]);
                } while(toupper(sexo[indice]) != 'F' && toupper(sexo[indice]) != 'M');
                cout << "Nascimento(DD/MM/AAAA): ";
                cin >> nascimento[indice];
                cout << "Endereço: ";
                cin.ignore();
                getline (cin, endereco[indice]);
                cout << "Time Favorito: ";
                cin.ignore();
                getline (cin, timefav[indice]);
                cout << "Seleção Favorita: ";
                cin.ignore();
                getline (cin, selecaoFavorita[indice]);
                do{
                cout << "Gosta de Futebol?(S ou N): ";
                cin >> gostaFutebol[indice];
                gostaFutebol[indice] = toupper(gostaFutebol[indice]);
                } while(toupper(gostaFutebol[indice]) != 'S' && toupper(gostaFutebol[indice]) != 'N');
                do{
                cout << "Gosta de Vôlei?(S ou N): ";
                cin >> gostaVolei[indice];
                gostaVolei[indice] = toupper(gostaVolei[indice]);
                } while(toupper(gostaVolei[indice]) != 'S' && toupper(gostaVolei[indice]) != 'N');
                do{
                cout << "Gosta de Basquete?(S ou N) ";
                cin >> gostaBasquete[indice];
                gostaBasquete[indice] = toupper(gostaBasquete[indice]);
                } while(toupper(gostaBasquete[indice]) != 'S' && toupper(gostaBasquete[indice]) != 'N');
                do{
                cout << "Gosta de Handbol?(S ou N): ";
                cin >> gostaHandbol[indice];
                gostaHandbol[indice] = toupper(gostaHandbol[indice]);
                } while(toupper(gostaHandbol[indice]) != 'S' && toupper(gostaHandbol[indice]) != 'N');
                do{
                cout << "Gosta de Natação?(S ou N): ";
                cin >> gostaNatacao[indice];
                gostaNatacao[indice] = toupper(gostaNatacao[indice]);
                } while(toupper(gostaNatacao[indice]) != 'S' && toupper(gostaNatacao[indice]) != 'N');
                do{
                cout << "Gosta de Ciclismo?(S ou N): ";
                cin >> gostaCiclismo[indice];
                gostaCiclismo[indice] = toupper(gostaCiclismo[indice]);
                } while(toupper(gostaCiclismo[indice]) != 'S' && toupper(gostaCiclismo[indice]) != 'N');
                do{
                cout << "Gosta de Atletismo?(S ou N): ";
                cin >> gostaAtletismo[indice];
                gostaAtletismo[indice] = toupper(gostaAtletismo[indice]);
                } while(toupper(gostaAtletismo[indice]) != 'S' && toupper(gostaAtletismo[indice]) != 'N');
                do{
                cout << "Gosta de Musculação?(S ou N): ";
                cin >> gostaMusculacao[indice];
                gostaMusculacao[indice] = toupper(gostaMusculacao[indice]);
                } while(toupper(gostaMusculacao[indice]) != 'S' && toupper(gostaMusculacao[indice]) != 'N');
                cout << "Cadastro efetuado com sucesso!\n";
                indice++;
            break;

            case 2:
                cout << "CADASTRO DE PRODUTOS: \n";
                cout << "Produto: ";
                cin.ignore();
                getline(cin, produtoCadastro[indice]);
                cout << "Descrição: ";
                cin.ignore();
                getline (cin, descricao[indice]);
                cout << "Modelo: ";
                cin >> modelo[indice];
                cout << "Marca: ";
                cin.ignore();
                getline (cin, marca[indice]);
                cout << "Tamanho: ";
                cin >> tamanho[indice];
                cout << "Cor: ";
                cin.ignore();
                getline (cin, cor[indice]);
                cout << "Preço: R$";
                cin >> preco[indice];
                cout << "Cadastro efetuado com sucesso!\n";
                indice++;
            break;

            case 3:
                cout << "CADASTRO DE ITENS DE PRODUTOS: \n";
                cout << "Produto: ";
                cin.ignore();
                getline(cin, produtoItens[indice]);
                cout << "Data da compra(DD/MM/AAAA): ";
                cin >> dataCompra[indice];
                cout << "Valor da compra: R$ ";
                cin >> valorCompra[indice];
                cout << "Situação: ";
                cin.ignore();
                getline (cin, situacao[indice]);
                indice++;
                cout << "Cadastro efetuado com sucesso!\n";
                break;

            case 4:
                cout << "CADASTRO DE VENDA: \n";
                cout << "Produto: ";
                cin.ignore();
                getline(cin, produtoVenda[indice]);
                achei = false;
                for (int i = 0; i < indice; i++) {
                    if (produtoVenda[indice] == produtoCadastro[i]) {
                        achei = true;
                        break;
                    }
                }
                if (!achei) {
                    cout << "Não existem produtos cadastrados com esse nome.\n";
                    continue;
                }
                cout << "Cliente: ";
                cin.ignore();
                getline (cin, cliente[indice]);
                cout << "Valor da compra: R$ ";
                cin >> valorVenda[indice];
                cout << "Data da venda(DD/MM/AAAA): ";
                cin >> dataVenda[indice];
                cout << "Data da recebimento(DD/MM/AAAA): ";
                cin >> dataRecebimento[indice];
                indice++;
                cout << "Cadastro efetuado com sucesso!\n";
            break;

            case 5:
                cout << "LISTAGEM DOS PRODUTOS(por preço): \n";
                cout << "Digite o valor para consulta: ";
                cin >> valor;
                for (int i=0; i<indice; i++){
                if(preco[i] == valor){
                cout << "Produto(s): " << descricao[i] << ", "; 
                achei = true;
                }
            }
            if(!achei)
                cout << "Não existem produtos cadastrados com esse preço.\n";
                break;

            case 6:
                cout << "LISTAGEM DAS 10 ÚLTIMAS VENDAS: \n";
                for (int i=9; i>=0; i--){
                    if (produtoVenda[i] == ""){
                        continue;
                    }
                cout << " - " << produtoVenda[i] << endl;
                }
                break;

            default:
                cout << "Opção inválida.";
                continue;
                break;
        }
    }

    return 0;
}