#include <stdio.h>

int binarySearchSalary(int salaries[], int beg, int end, int salary) {
    int mid;
    if (end >= beg) {
        mid = (beg + end) / 2;
        if (salaries[mid] == salary) {
            return mid;
        } else if (salaries[mid] < salary) {
            return binarySearchSalary(salaries, mid + 1, end, salary);
        } else {
            return binarySearchSalary(salaries, beg, mid - 1, salary);
        }
    }
    return -1;
}

int main() {
    int salaries[] = {2000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int n = sizeof(salaries) / sizeof(salaries[0]);
    int salary = 4000;
    int result = binarySearchSalary(salaries, 0, n - 1, salary);
    if (result != -1) {
        printf("Arun's salary is present at index %d\n", result);
    } else {
        printf("Arun's salary is not present in the array\n");
    }
    return 0;
}
