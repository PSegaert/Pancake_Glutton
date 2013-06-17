#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Person
{
    string spersonName;
    int nPancake;
};

const int nPersons =5;
Person MakePerson();
void printSortedList(const Person asPersonList[]);
bool comparePersons(const Person &a, const Person &b);
void bubbleSort(Person asPersonList[]);

int main()
{
    Person asPersonList[nPersons];
    cout << "Welcome to the Pancake Program" << endl;
    for(int i=0;i<nPersons;i++)
    {
        asPersonList[i]=MakePerson();
    }
    bubbleSort(asPersonList);
    cout << "\n Here comes the analysed info" <<endl;
    printSortedList(asPersonList);
    return 0;
}

Person MakePerson()
{
    cout << "Enter information on person"<<endl;
    cout << "ID: ";
    string nName;
    getline(cin,nName);
    cout << "Enter number of pancakes: ";
    int nPancake;
    cin >> nPancake;
    Person JohnDoe;
    JohnDoe.spersonName=nName;
    JohnDoe.nPancake=nPancake;
    //cout << "Person " << JohnDoe.spersonName << " ate " << JohnDoe.nPancake <<endl;
    return JohnDoe;
}

void bubbleSort(Person asPersonList[])
{
    for(int index=0; index<nPersons; index++)
    {
        for(int index2=(nPersons-1); index2>index; index2--)
        {
            if(comparePersons(asPersonList[index2-1],asPersonList[index2]))
            {
                swap(asPersonList[index2-1],asPersonList[index2]);
            }
        }
    }
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
