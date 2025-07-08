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
    int op, i;
    string nomeAluno;

    while (true) {
        cout << "\nSeja bem-vindo ao Sistema de Cadastro de Alunos!" << endl;
        cout << "Qual opção você deseja?" << endl;
        cout << "1 - Matrícula na escola" << endl;
        cout << "2 - Ver a nota do aluno" << endl;
        cout << "3 - Situação do aluno" << endl;
        cout << "Digite a opção: ";

        try {
            op = validacaoDeErroInteiro();

            switch (op) {
                case 1:
                    cout << "Qual a turma em que o aluno estuda? (1 - Primeiro ano, 2 - Segundo ano, 3 - Terceiro ano): ";
                    op = validacaoDeErroInteiro();

                    if (op == 1)
                    {
                        cout << "qual o nome do aluno?" << endl;
                        cin >> nomeAluno;
                        int cont = 0;
                        
                        for (i == 0; i <= 30; i++){
                            if(primeiroAno[i].nome == nomeAluno){
                                cont++;

                            }

                        }

                        if(cont > 2){
                            cout << "existem mais nome como este, digite o nome completo do aluno." << endl;
                                    
                        }
                        else
                        {
                            
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