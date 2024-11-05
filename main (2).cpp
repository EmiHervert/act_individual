// Emiliano Hervert de la Cruz - A01412606

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
    vector<string> matriculas;

    int num_matriculas = 100;
    
    const int num_paises = 16;
    int pais_matricula = 0;
    string inicio_matricula = "";
    bool hay_pais_con_mayor_contacto = false;
    
    string prefijos[num_paises] = {"D","PP","CF","A7","CC","B","OY","HC","A6","EC","N","PK","JA","XA","9V","HS"};
    string paises[num_paises] = {"Alemania","Brasil","Canadá","Catar","Chile","China","Dinamarca","Ecuador","Emiratos Árabes","España","Estados Unidos","Indonesia","Japón","México","Singapur","Tailandia"};
    int contadores[num_paises] = {0}; //contadores[1] es alemania, contadores[2] es brasil, etc.
    int porcentajes[num_paises] = {0}; //contadores[1] es alemania, contadores[2] es brasil, etc.

    for(int i=0;i<num_matriculas;i++)
    {
        pais_matricula = rand()%16;
        matriculas.push_back(prefijos[pais_matricula]+"0001");
    }

    for(int i=0;i<matriculas.size();i++)
        {
            inicio_matricula = matriculas[i][0];
            
            if(inicio_matricula == "D")
            {
                contadores[0]++;
            }
            if(inicio_matricula == "B")
                {
                    contadores[5]++;
                }
            if(inicio_matricula == "N")
                {
                    contadores[10]++;
                }

            inicio_matricula = matriculas[i].substr(0,2);

            if(inicio_matricula == "PP")
                {
                    contadores[1]++;
                }
            if(inicio_matricula == "CF")
                {
                    contadores[2]++;
                }
            if(inicio_matricula == "A7")
                {
                    contadores[3]++;
                }
            if(inicio_matricula == "CC")
                {
                    contadores[4]++;
                }
            if(inicio_matricula == "OY")
                {
                    contadores[6]++;
                }
            if(inicio_matricula == "HC")
                {
                    contadores[7]++;
                }
            if(inicio_matricula == "A6")
                {
                    contadores[8]++;
                }
            if(inicio_matricula == "EC")
                {
                    contadores[9]++;
                }
            if(inicio_matricula == "PK")
                {
                    contadores[11]++;
                }
            if(inicio_matricula == "JA")
                {
                    contadores[12]++;
                }
            if(inicio_matricula == "XA")
                {
                    contadores[13]++;
                }
            if(inicio_matricula == "9V")
                {
                    contadores[14]++;
                }
            if(inicio_matricula == "HS")
                {
                    contadores[15]++;
                }
        }

    for(int i=0;i<num_paises;i++)
        {
            porcentajes[i] = contadores[i] * 100 / matriculas.size();
        }

    cout<<"Las matriculas son: ";
    for(int i=0;i<matriculas.size();i++)
        {
            cout<<matriculas[i]<<" ";
        }
    
    cout<<endl;
    cout<<endl;
    
    for(int i=0;i<num_paises;i++)
        {
            cout<<"Los vuelos totales de "<<paises[i]<<" son: "<<contadores[i]<<endl;
        }

    cout<<endl;

    for(int i=0;i<num_paises;i++)
        {
            cout<<"Los vuelos de "<<paises[i]<<" corresponden al "<<porcentajes[i]<<"%"<<endl;
        }

    cout<<endl;

    cout<<"Los países con mayor contacto (>20%) son: "<<endl;
    for(int i=0;i<num_paises;i++)
        {
            if(porcentajes[i] > 20)
            {
                cout<<paises[i]<<endl;
                hay_pais_con_mayor_contacto = true;
            }
        }
    if(hay_pais_con_mayor_contacto == false)
    {
        cout<<"No hay países con mayor contacto";
    }

    return 0;
}