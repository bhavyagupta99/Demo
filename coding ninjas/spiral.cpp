void spiralPrint(int **arr, int m, int n)
{ 
    int i, k = 0, l = 0; 
        for (i = l; i < n; ++i) { 
            cout << arr[k][i] << " ";
        } 
        k++; 
  
        for (i = k; i < m; ++i) { 
            cout << arr[i][n - 1] << " ";
        } 
        n--; 
  
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                cout << arr[m - 1][i] << " ";
            } 
            m--; 
        } 
 
        if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                cout << arr[i][l] << " ";
            } 
            l++; 
        } 
    } 
}
