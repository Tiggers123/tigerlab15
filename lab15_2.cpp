#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool m[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << m[i][j] << " ";
		} 
		cout << "\n";
	}
}
void inputMatrix(double m[][N]){
	for(int i = 0; i < N; i++){
		cout << "Row " << i+1 << ": "; 
		for(int j = 0; j < N; j++){
			cin >> m[i][j];
		}
	}
}
void findLocalMax(const double m[][N], bool b[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(i == 0 || i == N-1 ||j == 0 || j == N-1){
				b[i][j] = 0;
			}
			else if (m[i][j] >= m[i-1][j]&&m[i][j] >= m[i][j-1]&&m[i][j] >= m[i][j+1]&&m[i][j] >= m[i+1][j] )
			{
				b[i][j] = 1;
			}
			else b[i][j]=0;
		}
	} 
}

