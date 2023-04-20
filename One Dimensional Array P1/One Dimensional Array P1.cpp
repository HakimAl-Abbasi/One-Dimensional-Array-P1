// One Dimensional Array P1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void Example1()
{
    int x[] = { 1,3,5,8,6,8,6,7,9 };

    for (int i = 0; i < 9; i++)
    {
        cout << x[i] << endl;
    }
}
void Example2()
{
    const int s = 4;
    int arr1[s] = { 10,20,30,40 },
        arr2[s];


    for (int i = 0; i <= s - 1; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int j = 0; j < s; j++)
    {
        cout << arr2[j] << endl;
    }
   
}
void Example3()
{
    const int x = 5;
    int arr[x] = { 100,200,501,101,200 };
    int sum = 0,sumo = 0;
    for (size_t i = 0; i < x; i++)
    {
        if (arr[i] %2 == 0)
            sum += arr[i];
        else 
            sumo += arr[i];
    }

    cout << "Sum Even : " << sum << "\nSum Odd : " << sumo << endl;


}
void Example4()
{
    int s = 6, Sum = 0;
    int Marks[6] = { 100,99,98,88,70,90 };

    for (int i = 0; i < s; i++)
    {
        Sum += Marks[i];
    }
   
    cout << "Avg : " << Sum / s << endl;
}
void Example5()
{
    int max = 0;
    int arr[6] = { 22,89,70,200,198,50 };

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;
}
void Example6()
{
    
    int arr[6] = { 22,89,70,200,198,50 };
    int Minm = arr[0];

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < Minm)
        {
            Minm = arr[i];
        }
    }

    cout << Minm << endl;
}

void ExampleSearch()
{
    int Vector[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> Vector[i];
        cout << endl;
    }

    int Element;
    cout << "What is The Element You Looking For ? : \n";
    cin >> Element;

    bool found = false;
    int i;
    for ( i = 0; i < 5; i++)
    {
        if (Element == Vector[i])
        {
            found = true;
            
            break;
        }   
    }
    if(found)
        cout  << "Found The Element " << Element <<" Position Element : "<< i << endl;
    else
        cout << "The  Element is not Found" << endl;
}

int main()
{
    
    ExampleSearch();
    

    return 0;
}

