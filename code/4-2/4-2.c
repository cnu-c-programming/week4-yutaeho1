    #include <stdio.h>

    int sum(int arr[], int n) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }
        return total;
    }

    double average(int arr[], int n) {
        int total = sum(arr, n);
        return (double)total / n;
    }

    int max(int arr[], int n) {
        int win = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > win) {
                win = arr[i];
            }
        }
        return win;
    }

    int main() {
        int arr[] = {3, 7, 1, 9, 4, 6};
        int n = sizeof(arr) / sizeof(arr[0]);

        printf("sum: %d\n", sum(arr, n));       // 30
        printf("avg: %.2f\n", average(arr, n)); // 5.00
        printf("max: %d\n", max(arr, n));       // 9

        return 0;
    }
