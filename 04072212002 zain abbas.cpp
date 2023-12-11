
#include <iostream>
#include <bitset>      // for xor operator 
#include <cstring>   // for  finding the length of string 
using namespace std;
void binarytogray(char bnum[], int n)
{
    int result[10];
    result[0] = bnum[0] - '0';
    for (int i = 1; i < n; i++)
    {
        result[i] = bnum[i - 1] ^ bnum[i];

    }
    cout << "gray code of given number is ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i];

    }
}
void graytobinary(char gnum[], int n)
{
    int result[10];
    result[0] = gnum[0] - '0';
    for (int i = 1; i < n; i++)
    {
        result[i] = result[i - 1] ^ gnum[i] - '0';

    }
    cout << "binary  code of number is ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i];

    }
}
int main()
{
    char choice;
    char binnum[10]; //for binary number input 
    char graynum[10];//for gray  number input 

    cout << "\n";
    cout << "     ||||****MENU*****||||\n";
    cout << "1 |convert binary to Gray code" << endl;
    cout << "2 |convert Gray code to binary" << endl;
    cout << "3 |Exit" << endl;

    do
    {

        cout << "\nEnter your choice (1-3): ";
        cin >> choice;
        switch (choice)
        {
        case '1':
        {
            cout << "enter the binary number : ";
            cin >> binnum;
            int n = strlen(binnum);  //find the length of array 
            binarytogray(binnum, n); // funcation calling 

            break;
        }
        case '2':
        { cout << "enter the gray code : ";
        cin >> graynum;
        int n1 = strlen(graynum);
        graytobinary(graynum, n1);
        break;
        }
        case '3':
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;

        }
    } while (choice != '3');
}

