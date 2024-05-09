#include <iostream>
using namespace std;
int main()
{
    int num, n, p;
    cout <<"Ingresar la tabla de n"<< "\n";
    cin >>num;
    n= 1;

    while(n<=10){
        p = n * num;
        cout << n << "x" <<num<<"=" << p << "\n";
        n= n+1;

    }
    return 0;

}
