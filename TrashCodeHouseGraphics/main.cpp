// DzHouse

#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int Size = 0;
    while (Size < 12)
    {
        cout << "��� �������� �������� ���� ������� ����� �� 20. ������� ������ ������ �� ������ 12 : "; cin >> Size;
        cout << endl << endl;
    }
    //������� � ���

    for (int i = 0; i < Size; i++)//�������
    {

        for (int j = 0; j < Size; j++)//�������
        {


            if (/*������� � ���*/i == Size / 2 || i == Size - 1
                /*�����*/ || j == 0 && i >= Size / 2 || j == Size - 1 && i >= Size / 2
                /*�����*/ || i + Size / 2 == j || i + Size / 2 + j == Size - 1
                /*�����*/ || j == Size / 6 && i >= Size / 6 && i + Size / 2 + j < Size - 1 || j == Size / 4 && i >= Size / 6 && i + Size / 2 + j < Size - 1
                /*�����*/ || j >= Size / 6 && i == Size / 6 && j <= Size / 4
                /*�����*/ || j == Size - Size / 4 && i >= Size - Size / 3 || i == Size - Size / 3 && j >= Size - Size / 4
                /*�����*/ || j == Size - Size / 4 + 1 && i == Size - Size / 3 + Size / 6
                /*����*/ || j == Size / 6 && i >= Size / 2 + Size / 6 && i <= Size - Size / 6 || j == Size / 3 && i >= Size / 2 + Size / 6 && i <= Size - Size / 6
                /*����*/ || i == Size / 2 + Size / 6 && j >= Size / 6 && j <= Size / 3
                /*����*/ || i == Size - Size / 6 && j >= Size / 6 && j <= Size / 3
                /*�����*/ || i == Size / 2 - Size / 4 && j >= Size / 2 - Size / 12 && j <= Size / 2 + Size / 12
                /*�����*/ || i == Size / 2 - Size / 8 && j >= Size / 2 - Size / 12 && j <= Size / 2 + Size / 12
                /*�����*/ || j == Size / 2 - Size / 12 && i >= Size / 2 - Size / 4 && i <= Size / 2 - Size / 8
                /*�����*/ || j == Size / 2 + Size / 12 && i >= Size / 2 - Size / 4 && i <= Size / 2 - Size / 8)

            {
                cout << " ~";
            }
            else cout << "  ";
            /*���*/if (j == Size / 6 && i == Size / 6 - Size / 12) cout << "\b(";
            /*���*/if (i == Size / 6 - Size / 8 && j == Size / 4 - 1) cout << "\b)";
            /*������*/if (j == Size / 2 + Size / 6 && i == Size / 6 - Size / 10 || j == Size - Size / 8 && i == Size / 6 - Size / 12) cout << "\bV";
            /*������*/if (j == Size / 12 && i == Size / 6 - Size / 6 || j == Size / 3 - 1 && i == Size / 12 + 1) cout << "\bV";
            //Sleep(10);

        }
        cout << endl;
        //Sleep(10);
    }
}
