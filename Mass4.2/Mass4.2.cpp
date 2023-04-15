#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int n, i, min;
    cout << "n = "; cin >> n;
    int* A = new int[n];
    min = A[0];
    for (i = 0; i < n; i++)
    {
        A[i] = rand() % 6 - 5;
        if (min > A[i]) min = A[i];
        cout << " " << A[i];

    }
    cout << "\nmin = " << min << "\n [ ";
    for (i = 0; i < n; i++) if (min == A[i]) cout << i << " ";
    cout << "]\n";
    free(A);
    system("Pause");
    return 0;
}