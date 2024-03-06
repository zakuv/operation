
#include "Funcs.h"

using namespace std;

struct Friend{
    string name;
    tm birthday;

};

int main() {
    Point p1, p2;
    string command;
    bool operationStarted = false;
    Point startOperationPoint, endOperationPoint;

    while(true)
    {
        cout << "Введите команду: " << endl;
        cin >> command;
        if (command == "scalpel") {
            cout << "Введите координаты начала разреза по x и y" << endl;
            cin >> p1.x >> p1.y;
            cout << "Введите координаты конца разреза по x и y" << endl;
            cin >> p2.x >> p2.y;
            scalpel(p1, p2);
            if (!operationStarted) {
                startOperationPoint = p1;
                endOperationPoint = p2;
                operationStarted = true;
            }
        } else if (command == "hemostat") {
            if (!operationStarted) {
                cout << "Операция еще не началась!" << endl;
            }
            else
            {
                cout << "Введите координаты для зажима по x и y" << endl;
                cin >> p1.x >> p1.y;
                hemostat(p1);
            }
        } else if (command == "tweezers") {
            if (!operationStarted)
            {
                cout << "Операция еще не началась!" << endl;
            }
            else
            {
                cout << "Введите координаты точки (x y): ";
                cin >> p1.x >> p1.y;
                tweezers(p1);
            }
        }
        else if (command == "suture") {
            if (!operationStarted) {
                cout << "Операция еще не началась!" << endl;
            }
            else
            {
                cout << "Введите начальные координаты: " << endl;
                cin >> p1.x >> p1.y;
                cout << "Введите конечные координаты: " << endl;
                cin >> p2.x >> p2.y;
                while (p1.x != startOperationPoint.x || p1.y != startOperationPoint.y || p2.x != endOperationPoint.x ||
                       p2.y != endOperationPoint.y) {
                    cout << "Введены неверные координаты, повторите ввод" << endl;
                    cin >> p1.x >> p1.y;
                    cin >> p2.x >> p2.y;
                }
                suture(p1, p2);
                break;
            }
        }
        else if (command == "exit")
            break;
        else
            std::cout << "Неизвестная команда." << std::endl;
    }
    cout << "Операция успешно завершена!" << endl;
    return 0;
}
