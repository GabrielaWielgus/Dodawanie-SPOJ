#include <iostream>
using namespace std;

int main() {

    int l_testow, l_liczb, a;
    cin >> l_testow;
    for (int i = 0; i < l_testow; i++)
    {
        int suma = 0;
        cin >> l_liczb;
        for (int i = 0; i < l_liczb; i++)
        {
            cin >> a;
            suma += a;
        }
        cout << suma << endl;
    }

    return 0;
}
