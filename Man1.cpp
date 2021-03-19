// man.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include "Man.h"
#include <fstream>
Man changeAge(Man m) {
    cout << "in function\n";
    m.setAge(1000);
    return m;
}
Man& changeAge1(Man& m) {
    cout << "in function\n";
    m.setAge(1000);
    return m;
}
int main()
{
  //  int x = 2;
  ////  cout << "x=" << x << endl;
  //  Man man("vacy", 19, 1200);
  // // Man manClone = man;
  //  Man help = man;
  //  Man help1;
  // // help = changeAge(man);
    //  man.toString();
  //  help.toString();
   //  help1 = help++;
  // 
  //  cout<<help;
   // cout<<help1;
   // manClone.toString();
    Man gr[5];
    ifstream in("Test.txt");
    for (int i = 0; i < 5; i++)
        in >> gr[i];
    for (int i = 0; i < 5; i++)
        cout << gr[i];
    cout << "\nafter ciout\n";
    for (Man m : gr)
        cout << m;
    ofstream outBin("Test.bin",ios::binary);
    for (int i = 0; i < 5; i++)
        gr[i].write(outBin);
    outBin.close();
    Man gr1[5];
    Man student;
    ifstream inBin("Test.bin", ios::binary);
    inBin.seekg(sizeof(Man) * 2, ios::beg);
    student.read(inBin);
    cout << student;
    /*for (int i = 0; i < 5; i++)
        gr1[i].read(inBin);
    for (int i = 0; i < 5; i++)
        cout << gr1[i];*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
