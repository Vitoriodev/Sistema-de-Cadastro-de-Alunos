/*Sistema de Cadastro de Alunos

Funcionalidades:

    Usar struct para alunos.

    Guardar nome, matrícula e notas.

    Calcular média, verificar aprovados.

    Listar todos os alunos.

    Salvar/ler em arquivo.*/

#include <iostream>
#include <limits> 

using namespace std;

struct aluno{
   string nome;
   int matricula;
   float notas;
};

int validacaoDeErroInteiro(){ // essa função serve para não repetir muito esse codigo...
    int valor;
    cin >> valor;


    if (cin.fail()){ // ser o usuario digita alguma letra ou símbolos.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw "ERRO: o que vocẽ digitou não foi um numero valido"; // ser o codigo chegar nessa linhar ela vai pular por catch.
        // o texto que está escrito vai retornar ao catch.
    }

    return valor;
}


int main() {
    aluno primeiroAno[30];
    aluno segundoAno[30];
    aluno terceiroAno[30];
    int op;
    string nomeAluno;

    while (true) {
        cout << "\nSeja bem-vindo ao Sistema de Cadastro de Alunos!" << endl;
        cout << "Qual opção você deseja?" << endl;
        cout << "1 - Ver a nota do aluno" << endl;
        cout << "2 - Matrícula na escola" << endl; // <--- FEITO!!!
        cout << "3 - Situação do aluno" << endl;
        cout << "Digite a opção: ";

        try {
            op = validacaoDeErroInteiro();

            switch (op) {
                case 2:
                    cout << "Qual a turma vai ser matricula (1 - Primeiro ano, 2 - Segundo ano, 3 - Terceiro ano): ";
                    op = validacaoDeErroInteiro();

                    if (op == 1)
                    {

                        while (true)
                        {
                            cout << "qual o nome?" << endl;
                            cin >> nomeAluno;
                            int cont = 0, i = 1;
                        
                            for (i == 1; i <= 31; i++){
                                if(primeiroAno[i].nome.empty()){
                                    primeiroAno[i].nome = nomeAluno;
                                    cout << "aluno " << nomeAluno << "está matriculado em nossa escola id:" << i << endl;
                                    i = 32;
                                }
                                
                            }
                            if (!primeiroAno[31].nome.empty())
                            {
                               cout << "a sala está cheia" << endl;
                               break;
                            }
                            
                        }
                        
                    }
                    if (op == 2)
                    {

                        while (true)
                        {
                            cout << "qual o nome?" << endl;
                            cin >> nomeAluno;
                            int cont = 0, i = 1;
                        
                            for (i == 1; i <= 31; i++){
                                if(primeiroAno[i].nome.empty()){
                                    primeiroAno[i].nome = nomeAluno;
                                    cout << "aluno " << nomeAluno << "está matriculado em nossa escola id:" << i << endl;
                                    i = 32;
                                }
                                
                            }
                            if (!primeiroAno[31].nome.empty())
                            {
                               cout << "a sala está cheia" << endl;
                               break;
                            }
                            
                        }
                        
                    }
                    if (op == 3)
                    {

                        while (true)
                        {
                            cout << "qual o nome?" << endl;
                            cin >> nomeAluno;
                            int cont = 0, i = 1;
                        
                            for (i == 1; i <= 31; i++){
                                if(primeiroAno[i].nome.empty()){
                                    primeiroAno[i].nome = nomeAluno;
                                    primeiroAno[i].matricula = i;
                                    cout << "aluno " << nomeAluno << " está matriculado em nossa escola id:" << primeiroAno[i].matricula << endl;
                                    i = 32;
                                }
                                
                            }
                            if (!primeiroAno[31].nome.empty())
                            {
                               cout << "a sala está cheia" << endl;
                               break;
                            }
                            
                        }
                        
                    }
                    break;
                

                default:
                    cout << "Opção inválida. Tente novamente." << endl;
                    continue;
            }

            break;

        } catch (const char* erro) {
            cout << erro << endl;
            cout << "Tente novamente.\n" << endl;
            // volta para o menu
        }
    }

    return 0;
}