#include <iostream>
#include <string>


using namespace std;

struct Person
{
    string spersonName;
    int nPancake;
};

const int nPersons =5;
Person MakePerson();
void printSortedList(const Person asPersonList[]);

int main()
{
    Person asPersonList[nPersons];
    cout << "Welcome to the Pancake Program" << endl;
    for(int i=0;i<nPersons;i++)
    {
        asPersonList[i]=MakePerson();
    }
    printSortedList(asPersonList);
    return 0;
}

Person MakePerson()
{
    cout << "Enter information on person"<<endl;
    cout << "ID: ";
    int nName;
    cin >> nName;
    cout << "Enter number of pancakes: ";
    int nPancake;
    cin >> nPancake;
    Person JohnDoe;
    JohnDoe.spersonName=nName;
    JohnDoe.nPancake=nPancake;
    //cout << "Person " << JohnDoe.spersonName << " ate " << JohnDoe.nPancake <<endl;
    return JohnDoe;
}

bool comparePersons(const Person &a, const Person &b)
{
    return a.nPancake < b.nPancake;
}

void printSortedList(const Person asPersonList[])
{
    for(int i=0; i<nPersons; i++)
    {
        cout << "Person " << asPersonList[i].spersonName << " ate " << asPersonList[i].nPancake << " pancakes." <<endl;
    }
}
