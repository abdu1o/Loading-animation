#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    cout << "Loading Please Wait";
    while (true)
    {
        Sleep(100);
        cout << "." << flush;
        Sleep(100);
        cout << "." << flush;
        Sleep(100);
        cout << "." << flush;
        Sleep(100);
        cout << "\b\b\b   \b\b\b" << flush;
    }
}