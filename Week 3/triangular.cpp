// C Program to find Triangular Number Series 
#include <stdio.h> 

// Function to find triangular number 
void triangular_series(int n) 
{ 
	int i, j = 1, k = 1; 

	// For each iteration increase j by 1 
	// and add it into k 
	for (i = 1; i <= n; i++) { 
		printf(" %d ", k); 
		j = j + 1; // Increasing j by 1 
		k = k + j; // Add value of j into k and update k 
	} 
} 
// Driven Function 
int main() 
{ 
	int n;
	cin >> "Enter" >> n; 
	triangular_series(n); 
	return 0; 
} 

