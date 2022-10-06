#include <iostream>
using namespace std;
class harsh
{
    int hours, x, days = 22, salary;
    string harsh;

public:
    void infoharsh()
    {
        cout << "Employee Name :";
        cin >> harsh;
        cout << "\n Employee Salary :";
        cin >> x;
        cout << "\n Employee Working Hours :";
        cin >> hours;
    }
    void showInfo()
    {
        cout << "\n\n\n\n*******************************";
        cout << "\nharsh Name :" << harsh;
    }
    void showSum()
    {

        if (hours > 8)
        {
            salary = x * hours * days;
            cout << "\nSalary        :" << salary;
            salary = x * hours * days * 2;
            cout << "\nSalary+Bounus :" << salary;
        }
        else
        {
            salary = x * hours * days;
            cout << "\nSalary        :" << salary;
        }
        cout << "\n*******************************";
    }
};
int main()
{
    harsh obj1;
    obj1.infoharsh();
    obj1.showInfo();
    obj1.showSum();
}