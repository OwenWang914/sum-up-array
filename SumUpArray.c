/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. */
#include <stdio.h>
/* Author: Owen Wang */
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i;

    printf("Enter the number of elements in the array: ");
    scanf("%i", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum is %i", sum);

    return 0;
}
