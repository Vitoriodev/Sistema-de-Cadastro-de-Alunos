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
    float nota;
    string nomeAluno;

    while (true) {
        cout << "\nSeja bem-vindo ao Sistema de Cadastro de Alunos!" << endl;
        cout << "Qual opção você deseja?" << endl;
        cout << "1 - Matrícula na escola" << endl; // <--- FEITO!!!
        cout << "2 - Adicionar nota" << endl;
        cout << "3 - Ver a nota do aluno" << endl;
        cout << "4 - Situação do aluno" << endl;
        cout << "Digite a opção: ";

        try {
            op = validacaoDeErroInteiro();

            switch (op) {
                case 1:
                    cout << "Qual a turma vai ser matricula (1 - Primeiro ano, 2 - Segundo ano, 3 - Terceiro ano): ";
                    op = validacaoDeErroInteiro();

                    switch (op){
                    case 1:
                        while (true)
                        {
                            cout << "qual o nome?" << endl;
                            cout << "n para sair" << endl;
                            cin >> nomeAluno;
                            if (nomeAluno == "n" || nomeAluno ==  "N") // fazer uns ajustes ainda.
                            {
                                break;
                            }
                            
                            int cont = 0, i;
                        
                            for (i = 0; i <= 30; i++){
                                if(primeiroAno[i].nome.empty()){
                                    primeiroAno[i].nome = nomeAluno;
                                    primeiroAno[i].matricula = ++i;
                                    cout << "aluno " << nomeAluno << " está matriculado em nossa escola id:" << primeiroAno[i].matricula << endl;
                                    i = 32; // vai fechar o loop quando a valiavel struct nome for preenchida
                                }
                                
                            }
                            if (!primeiroAno[29].nome.empty())
                            {
                               cout << "a sala está cheia" << endl;
                               break;
                            }
                            
                        }
                        break;

                    case 2:
                        while (true)
                        {
                            cout << "qual o nome?" << endl;
                            cout << "n para sair" << endl;
                            cin >> nomeAluno;
                            if (nomeAluno == "n" || nomeAluno ==  "N") // fazer uns ajustes ainda.
                            {
                                break;
                            }

                            int cont = 0, i;
                        
                            for (i = 0; i <= 30; i++){
                                if(segundoAno[i].nome.empty()){
                                    segundoAno[i].nome = nomeAluno;
                                    segundoAno[i].matricula = ++i;
                                    cout << "aluno " << nomeAluno << " está matriculado em nossa escola id:" << segundoAno[i].matricula << endl;
                                    i = 32;
                                }
                                
                            }
                            if (!segundoAno[29].nome.empty())
                            {
                               cout << "a sala está cheia" << endl;
                               break;
                            }
                            
                        }
                        break;
                    case 3:
                        while (true)
                        {
                            cout << "qual o nome?" << endl;
                            cout << "n para sair" << endl;
                            cin >> nomeAluno;
                            if (nomeAluno == "n" || nomeAluno ==  "N") // fazer uns ajustes ainda.
                            {
                                break;
                            }

                            int cont = 0, i;
                        
                            for (i = 0; i <= 30; i++){
                                if(terceiroAno[i].nome.empty()){
                                    terceiroAno[i].nome = nomeAluno;
                                    terceiroAno[i].matricula = ++i;
                                    cout << "aluno " << nomeAluno << " está matriculado em nossa escola id:" << terceiroAno[i].matricula << endl;
                                    i = 32; 
                                }
                                
                            }
                            if (!terceiroAno[29].nome.empty())
                            {
                               cout << "a sala está cheia" << endl;
                               break;
                            }
                            
                        }
                        break;
                    
                    default:
                        cout << "essa turma não existe" << endl;
                        break;
                    }
                    break;

                case 2:
                    //adiciona notar
                    cout << "qual o ano que o aluno está fazendo (1 - Primeiro ano, 2 - Segundo ano, 3 - Terceiro ano): " << endl;
                    op = validacaoDeErroInteiro();

                    switch (op)
                    {
                    case 1:
                        cout << "qual o id do aluno" << endl;
                        i = validacaoDeErroInteiro();

                        if (!primeiroAno[i].nome.empty())
                        {
                            cout << "aluno: " << primeiroAno[i].nome << endl;
                            cout << "qual a nota: ";
                            cin >> nota;
                            
                            primeiroAno[i].notas = nota;
                            cout << "aluno: " << primeiroAno[i].nome << " nota: " << primeiroAno[i].notas << endl;
                        }
                        else if(i > 31 || i < 1){
                            cout << "não possuimos essa quantidade de vargas" << endl;
                        }
                        else
                        {
                            cout << "esse aluno não esta matriculado!" << endl;

                        }
                        break;
                    case 2:
                        cout << "qual o id do aluno" << endl;
                        i = validacaoDeErroInteiro();

                        if (!segundoAno[i].nome.empty())
                        {
                            cout << "aluno: " << segundoAno[i].nome << endl;
                            cout << "qual a nota: ";
                            cin >> nota;
                            
                            segundoAno[i].notas = nota;
                            cout << "aluno: " << segundoAno[i].nome << " nota: " << segundoAno[i].notas << endl;
                        }
                        else if(i > 31 || i < 1){
                            cout << "não possuimos essa quantidade de vargas" << endl;
                        }
                        else
                        {
                            cout << "esse aluno não esta matriculado!" << endl;

                        }
                        break;

                    case 3:
                        cout << "qual o id do aluno" << endl;
                        i = validacaoDeErroInteiro();

                        if (!terceiroAno[i].nome.empty())
                        {
                            cout << "aluno: " << terceiroAno[i].nome << endl;
                            cout << "qual a nota: ";
                            cin >> nota;
                            
                            terceiroAno[i].notas = nota;
                            cout << "aluno: " << terceiroAno[i].nome << " nota: " << terceiroAno[i].notas << endl;
                        }
                        else if(i > 31 || i < 1){
                            cout << "não possuimos essa quantidade de vargas" << endl;
                        }
                        else
                        {
                            cout << "esse aluno não esta matriculado!" << endl;

                        }
                        break;
                    
                    default:
                        cout << "essa opção não existe" << endl;
                        break;
                    }

                    break;

                case 3:
                   // ver a nota

                    break;

                case 4:
                    // situação do aluno

                    break;
                

                default:
                    cout << "Opção inválida. Tente novamente." << endl;
                    continue;
            }

            //break;

        } catch (const char* erro) {
            cout << erro << endl;
            cout << "Tente novamente.\n" << endl;
            // volta para o menu
        }
    }

    return 0;
}