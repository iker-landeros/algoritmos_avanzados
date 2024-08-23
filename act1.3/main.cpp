// Actividad 1.3 Implementación de la técnica de programación "backtracking" y "ramificación y poda"
// Dulce Nahomi Bucio Rivas A01425284
// Iker Landeros De La O A01423214
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, const vector<vector<int>>& maze, int M, int N) {
    return (x >= 0 && x < M && y >= 0 && y < N && maze[x][y] == 1);
}

// backtracking creo xd
bool solveMazeBacktracking(int x, int y, const vector<vector<int>>& maze, vector<vector<int>>& sol, int M, int N) {
    if (x == M - 1 && y == N - 1) {
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(x, y, maze, M, N)) {
        sol[x][y] = 1;

        if (solveMazeBacktracking(x + 1, y, maze, sol, M, N))
            return true;

        if (solveMazeBacktracking(x, y + 1, maze, sol, M, N))
            return true;

        sol[x][y] = 0;
    }

    return false;
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> maze(M, vector<int>(N));
    vector<vector<int>> sol(M, vector<int>(N, 0));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> maze[i][j];
        }
    }

    if (solveMazeBacktracking(0, 0, maze, sol, M, N)) {
        cout << "Backtracking Solution:" << endl;
        for (const auto& row : sol) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution found with backtracking" << endl;
    }

    cout << "\nRamificación y poda: falta implementar." << endl;

    return 0;
}
