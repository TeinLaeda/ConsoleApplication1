
#include <iostream>

using namespace std;

void obzac()
{
    cout << "//====================================HW====================================//\n\n";
}
double ps5[696];
void dz2(int* x, const int v)
{
    for (int z = 0; z < v; z++)
        if (x[z]) x[z] = 0;
        else x[z] = 1;


}

void Print(int* x, const int v)
{
    for (int z = 0; z < v; z++)
        cout << x[z] << " ";
    cout << "\n";
}



bool PrintPizdc(double ps5[], int size)
{
    if (ps5 == nullptr || size == 0)
        return false;

    for (size_t a = 0; a <size; a++)

        cout << a << " : " << ps5[a] << " ";

    return true;
    cout << endl;
}

void xrenaten(int* a, const int n)
{
    for (int i = 0; i < n; i++)
        if (a[i]) a[i] = 0; else a[i] = 1;
}


int main()
{
    {
        obzac();
        PrintPizdc(ps5, 696);

        const int n = 10;
        int a[n] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

        Print(a, n);
        xrenaten(a, n);
        Print(a, n);

        system("pause");
    }
    {
        obzac();

        int array[8];
        array[0] = 1;
        for (int i = 1; i < 8; i++) {
            array[i] = array[i - 1] + 3;

        }
        Print(array, 8);
    }
    return 0;

}

