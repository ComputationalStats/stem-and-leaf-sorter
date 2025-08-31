#include <iostream>
#include <string>
#include <vector>
using namespace std;


void ascendingSort(vector<double>&);

int main() {

    int numLeaves;
    string leaf1;
    string leaf2;
    int numValues1;
    int numValues2;
    double value;

    vector<double> values1;
    vector<double> values2;

    cout << "Enter the number of leaves: ";
    cin >> numLeaves;

    if (numLeaves == 2) {
        //Leaf 1
        cout << "Enter a name for leaf 1: ";
        cin >> leaf1;

        cout << "Enter the number of values for " + leaf1 + ": ";
        cin >> numValues1;

        for (int i = 0; i < numValues1; i++) {
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values1.push_back(value);
        }

        //Function call
        ascendingSort(values1);

        //Display leaf 1 in order
        cout << "Here are the values of " + leaf1 + " in ascending order: ";
        for (int i = 0; i < values1.size(); i++) {
            cout << values1[i] << " ";
        }

        //Leaf 2
        cout << "\n\nEnter a name for leaf 2: ";
        cin >> leaf2;

        cout << "Enter the number of values for " + leaf2 + ": ";
        cin >> numValues2;

        for (int i = 0; i < numValues2; i++) {
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values2.push_back(value);
        }

        //Function call
        ascendingSort(values2);

        //Display leaf 2 in order
        cout << "Here are the values of " + leaf2 + " in ascending order: ";
        for (int i = 0; i < values2.size(); i++) {
            cout << values2[i] << " ";
        }
        
    }
    else if (numLeaves == 1) {
        cout << "Enter a name for the leaf: ";
        cin >> leaf1;

        cout << "\nEnter the number of values for " + leaf1 + ": ";
        cin >> numValues1;

        for (int i = 0; i < numValues1; i++) {
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values1.push_back(value);
        }

        //Function call
        ascendingSort(values1);

        //Display leaf in order
        cout << "\nHere are the values of " + leaf1 + " in ascending order: ";
        for (int i = 0; i < values1.size(); i++) {
            cout << values1[i] << " ";
        }
    }
    else {
        cout << "Invalid number of leaves!";
        return 0;
    }

    return 0;
}

//Ascending Sort using Bubble Sort Algorithm
void ascendingSort(vector<double>& values1) {
    double temp;
    bool swapped;

    int n = values1.size();

    //Outer loop tracks each pass through array
    for (int pass = 0; pass < n - 1; pass++) {
        swapped = false;

        //Inner loop compares elements
        for (int i = 0; i < n - 1 - pass; i++) {
            if (values1[i] > values1[i + 1]) {
                temp = values1[i];
                values1[i] = values1[i + 1];
                values1[i + 1] = temp;
                
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}