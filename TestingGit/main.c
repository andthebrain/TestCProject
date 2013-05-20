// Main function for doing something amazing!
int main() {
	printf("Yup, it's main!");

	// Cleaned up history.

	printf("multiplication is just addition.");
	printf("(You could use a loop, for example.");

	int myArray[10];
	dumpArray(myArray, 10);

	return 0;

}

void dumpArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
