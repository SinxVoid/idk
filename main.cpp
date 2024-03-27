/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*  Escreva um programa que leia 3 notas de um aluno e 
a média das notas dos exercícios realizados por ele. 

Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. 

A partir da média, informar o conceito de acordo com a tabela: */
#include <iostream>

using namespace std;

int main()
{
    
    float n1=0,n2=0,n3=0,med=0,ma=0;
    std::string apro;
    cout<<"Programa para a média das notas e de aproveitamento do aluno.\n";
    cout<<"Digite sua primeira nota: ";
        cin>>n1;
    cout<<"\nDigite a segunda nota: ";
        cin>>n2;
    cout<<"\nDigite a terceira nota: ";
        cin>>n3;

            if (n1<0 || n1>10){
                cout<<"Primeira nota é inválida"<<endl;
                return 0;
            }
            if (n2<0 || n2>10){
                cout<<"Segundaa nota é inválida"<<endl;
                return 0;
            }
            if (n3<0 || n3>10){
                cout<<"Terceira nota é inválida"<<endl;
                return 0;
            }

    cout<<"\nAs notas digitadas foram: "<<n1<<", "<<n2<<" e "<<n3;
    
    med=(n1+n2+n3)/3;
    
    cout<<"\nA média de suas notas equivale a: "<<med;
    
    med=(n1+(n2*2)+(n3*3)+med)/7;
    
            if (med<4){
              apro="E";  
            }
            else if (med>=4 and med<6){
                apro="D";
            }
            else if (med>=6 and med<7.5){
                apro="C";
            }
            else if (med>=7.5 and med<9){
                apro="B";
            }
            else if (med>=9 and med<9.99999){
                apro="A";
            }
            else if(med==10){
                apro="S";
            }

    cout<<"\nSeu aproveitamento equivale a: "<<apro;
    
    
}