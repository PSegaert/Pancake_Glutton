#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string spersonName;
    int nPancake;
};

Person asPersonList[10];

void MakePerson(asPersonList, int &ind)
{
    cout << "Enter information on person"<<endl;
    cout << "ID: ";
    char szName[100];
    cin.getline(szName, 100);
    cout << "Enter number of pancakes: ";
    int nPancake;
    cin >> nPancake;
    asPersonList[ind].spersonName=szName;
    asPersonList[ind].nPancake=nPancake;
    cout << "Person " << asPersonList[ind].spersonName << " ate " << asPersonList[ind].nPancake <<endl;
    break;
}

int main()
{
    cout << "Welcome to the Pancake Program" << endl;
    for(int i=0,i<10,i++)
    {
        MakePerson(asPersonList, i)
    }
    return 0;
}
