#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void ArraySymmetry(vector<vector<int>> a, int k, int n)
{
    bool symm = true;
    if (k != n)
    {
        cout << "matrix is not square";
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != a[k - i - 1][n - j - 1])
                {
                    symm = false;
                    break;
                }
            }
        }
        if (symm)
        {
            cout << "symm" << endl;
        }
        else
        {
            cout << "not symm" << endl;
        }
    }
}

vector<vector<int>> ArrayCreation(int k, int n)
{
    vector<vector<int> > a(k, vector<int>(n));
    int c;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a" << "[" << i << "]" << "[" << j << "] = ";
            cin >> c;
            a[i][j] = c;
        }
        cout << endl;
    }
    return a;
}

void ArrayOut(vector<vector<int>> a, int k, int n)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
}

int main()
{
    int k, n;
    cout << "number of rows = "; cin >> k;
    cout << endl;
    cout << "number of columns = "; cin >> n;
    cout << endl;
    vector<vector<int>> a = ArrayCreation(k, n);
    ArrayOut(a, k, n);
    ArraySymmetry(a, k, n);
    system("pause");
    return 0;
}