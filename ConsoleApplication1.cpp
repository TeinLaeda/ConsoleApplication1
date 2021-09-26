

#include <iostream>
#include "MyLib.h"
#include <fstream>




#define TRUEORFALSE(vvedenoe_chislo, konechnoe_chislo) ((vvedenoe_chislo >= 0 && vvedenoe_chislo < konechnoe_chislo)) 
#define ZADAEM_CHISLO(n, e_byte)

using namespace std;



void obzac()
{
    cout << "\n\n//====================================HomeWork====================================//\n\n";
}
int main()
{
    {
        
        obzac();


        const int size = 4;
        float* ptr = 0;
        ptr = MyLib::f1(size);
        MyLib::f2(ptr, size);

        delete[]ptr;

    }

    {
        
        obzac();

        int n_nnoe_chislo;
        const int MULTIOTREZOK = 666;
        cout << boolalpha; 
        cout << "Введите число, которое хочешь проверить: " << endl;
        cin >> n_nnoe_chislo;
        bool proveryaemoe_chislo = TRUEORFALSE(n_nnoe_chislo, MULTIOTREZOK);
        cout << "Результат: " << proveryaemoe_chislo << endl;


    }

    {
        obzac();

        ZADAEM_CHISLO(n, e_byte)
            int* e_byte;
        int n;
        cout << "вставьте число: ";
        cin >> n;
        e_byte = new int[n];

        for (int i = 0; i < n; i++)
        {
            cout << "e_byte[" << i << "] = ";
            cin >> e_byte[i];
        }
        int temp; 

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (e_byte[j] > e_byte[j + 1])
                {
                   
                    temp = e_byte[j];
                    e_byte[j] = e_byte[j + 1];
                    e_byte[j + 1] = temp;
                }
            }
        }

        
        for (int i = 0; i < n; i++) {
            cout << e_byte[i] << " ";
        }
        cout << endl;

        delete[] e_byte; 

    }    
    return 0;
}