#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
class DataMap
{
    T1 key;
    T2 value;

public:
    DataMap(T1 a, T2 b)
    {
        key = a;
        value = b;
    }
    void Display()
    {
        cout
            << key << "\n"
            << value << endl
            << endl;
    }
};
int main()
{
    DataMap<int, string> player(1, "Goku");
    DataMap<string, float> weapon("Ki Energy", 99.9);
    cout << "Player Details(Rank , Name) :- \n";
    player.Display();
    cout << "Player Weapons(Name , Damage) :- \n";
    weapon.Display();
    return 0;
}