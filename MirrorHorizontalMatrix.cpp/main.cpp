#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Number rows: ";
    cin >> n;
    cout << "Number columns: ";
    cin >> m;
    cout << endl;
    int matrix[n][m];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
          cout << "matrix element [" << i << "][" << j << "] = ";
          cin >> matrix[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << endl;
        for(int j = m; j >0; j--)
        {
          cout << matrix[i][j]<< ' ';
        }
    }
    return 0;
}
