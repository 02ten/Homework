// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;


void Homework_1() {
    cout << "*********************************************\nHomework_1\n";
    
    cout << "Task_1\n";
    cout << "Alexander\n";

    cout << "Task_2\n";
    int a, b;
    cout << "Enter two int numbers\n";
    cin >> a >> b;
    cout << "a + b = " << a + b << "\n" <<
        "a - b = " << a - b << "\n" <<
        "a * b = " << a * b << "\n" <<
        "a / b = " << a / b << "\n";

    cout << "Task_3\n";
    double b1,c1;
    cout << "bx + c = 0. Enter b and c and I will find x\nb = ";
        cin >> b1;
        cout << "c = ";
        cin >> c1;
        cout << "x = " << -c1 / b1<<"\n";

    cout << "Task_4\n";
    double a2, b2, c2, D;
    cout << "ax^2 + bx + c = 0. Enter a, b, c and I will find solution\na = ";
    cin >> a2;
    cout << "b = ";
    cin >> b2;
    cout << "c = ";
    cin >> c2;
    D = b2 * b2 - 4 * a2 * c2;
    if (D > 0) {
        cout << "x1 = " << (-b2 + sqrt(D)) / (2 * a2) << "\n";
        cout << "x2 = " << (-b2 - sqrt(D)) / (2 * a2) << "\n";
    }
    else if (D == 0) {
        cout << "x = " << -b2 / (2 * a2)<<"\n";

    }
    else if (D < 0) {
        cout << "No solutions\n";
    }
    else {
        cout << "Impossible\n";
    }

    cout << "Task_5\n";
    bool window, lamp, day = false;
    cout << "Is lamp turned ON?\n1-Yes\n0-No\n";
    cin >> lamp;
    if (lamp) {
        cout << "There is light in the room\n";
    }
    else {
        cout << "Is window opened?\n1-Yes\n0-No\n";
        cin >> window;
        cout << "Is there day outside?\n1-Yes\n0-No\n";
        cin >> day;
        if (day and window) {
            cout << "There is light in the room\n";
        }
        else {
            cout << "There is no light in the room\n";
        }
    }

    cout << "*********************************************\n";
}

void Homework_2() {
    cout << "*********************************************\nHomework_2\n";
    

    cout << "*********************************************\n";
}

int main()
{
    bool isWorking;
    int check;//Доп. переменная, чтобы изабвится от ошибок при использовании ввода
    int number;//Номер домашки

    do {
        cout << "Do u want to start?\n1 - Yes\n0 - No\n";
        cin >> check;

        if (check == 1) {
            isWorking = 1;
            break;
        }

        else if (check == 0)
        {
            isWorking = 0;
            break;
        }

        else {
            cout << "ERROR!Try again.\n";
       }

    } while(true);

    while (isWorking) {
        cout << "Choose the homework ";
        cin >> number;
        switch (number) {
        case 1:
            Homework_1();
            break;
        default:
            cout << "Homework does not exist. Try again\n";
            continue;
            break;
        }
        do {
            cout << "Do u want to continue?\n1 - Yes\n0 - No\n";
            cin >> check;

            if (check == 1) {
                break;
            }

            else if (check == 0)
            {
                isWorking = 0;
                cout << "Goodbye!";
                break;
            }

            else {
                cout << "ERROR!Try again.\n";
            }

        } while (true);

    }
    return 0; 
}



