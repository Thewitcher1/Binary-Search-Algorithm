#include <iostream>
using namespace std;

int Binary_Search(int *tab, int low, int high, int key)
{
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(tab[mid] < key){low = mid +1;}
        else if(tab[mid] > key){high = mid - 1;}
        else {return mid;}

    }
    return -1;
}
int main()
{
    int arr[] = {1,2,44,76,87,99,200};
    cout << Binary_Search(arr, 0, 6, 2) << endl;
    cout << Binary_Search(arr, 0, 6, 87) << endl;
    cout << Binary_Search(arr, 0, 6, 76) << endl;
    cout << Binary_Search(arr, 0, 6, 300) <<endl;

    return 0;
}