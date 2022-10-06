#include <iostream>
using namespace std;
class Skill
{
    int maths, physics, chemistry, total;
    float per;
    public:
    void setval()
    {
        cout << "Enter maths marks :";
        cin >> maths;
        cout << "Enter physics marks :";
        cin >> physics;
        cout << "Enter chemistry marks :";
        cin >> chemistry;
    }
    void getval()
    {
        cout << "\n maths :"
        cout     << "\n physics :"
        cout     << "\nchemistry :";
    }
    void docal()
    {
        total = maths + physics + chemistry;
        cout << "\nmaths+phsics+chemistry :" << total;
        per = total / 3;
        cout << "\nper :" << per;
    }
};
int main()
{
    Skill obj1, obj2;
    obj1.setval();
    obj1.getval();
    obj1.docal();
}