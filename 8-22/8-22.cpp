#include <string>
#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");
    using namespace std;
    const int maxLength = 20;
    char A[maxLength], B[maxLength];
    std::cout << "A = ";
    std::cin.getline(A, maxLength);
    std::cout << "B = ";
    std::cin.getline(B, maxLength);
    int lengthB = strlen(B), k;
    bool flag = true;
    char* c;
    for (int i = 0; i < lengthB; i++)
    {
        if (!strchr(A, B[i]))
        {
            flag = false;
            break;
        }
        else
        {
            c = A;
            k = 0;
            for (char* p = A; *p; p++)
            {
                if (*p != B[i] || k)
                {
                    *c = *p;
                    c++;
                }
                else k = 1;
            }
            *c = '\0';
        }
    }
    if (flag)
        std::cout << "Есть совпадение\n";
    else std::cout << "Нет совпадения\n";
    return 0;
}