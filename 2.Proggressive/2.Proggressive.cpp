/*2. Створити абстрактний базовий клас “Прогресія” з віртуальною функцією – обчислення суми прогресії. Створити похідні класи: “Арифметична прогресія” і “Геометрична прогресія”.
Кожний клас має два поля типу double: перший член прогресії і постійна різниця (для арифметичної) і постійне відношення (для геометричної). 
Визначити функцію обчислення суми, де параметром є кількість елементів прогресії.*/
#include <iostream>
using namespace std;
class Progression {public:virtual void CalcSumProg(int n) = 0;};    //Віртуальний клас прогресія

class Arithmetic:public Progression{        //Клас для арекфметичної прогресії
private:
    double a1 =2; //перший елемент 
    double d = 2;// Постійна різниця 
public:
    void CalcSumProg(int n)override {
        cout << "Arithmetic Progression =" << a1 + (n - 1) * d << endl; 
    }
};

class Geometric :public Progression {       //Клас для геометричної прогресії 
private:
    double a1 = 2; //перший елемент 
    double d = 2;// Постійнe відношення  
public:
    void CalcSumProg(int n) override {
        cout << "Geometric Progression = ";
        int sum = 1;
        for (int i = 0; i < n-1; i++)
        {
            a1 *= d;
        }
        cout << a1;
    }
};

int main()
{
    int n;  //Кількість елементів 
    cout << "Enter number of elements of progression" << endl;
    cin >> n;

    Arithmetic AriProg;
    AriProg.CalcSumProg(n);
    Geometric geometric;
    geometric.CalcSumProg(n);
}

