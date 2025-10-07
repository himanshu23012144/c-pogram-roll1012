#include <stdio.h>
int main() {
int array[100], n, i, search, found = 0;
// Input size of array
printf("Enter number of elements in array: ");
scanf("%d", &n);
// Input array elements
printf("Enter %d integers:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &array[i]);
}
// Input element to search
printf("Enter the number to search: ");
scanf("%d", &search);
// Linear search
for(i = 0; i < n; i++) {
if(array[i] == search) {
printf("%d found at position %d (index %d).\n", search, i + 1, i);
found = 1;
break;
}
}
if(!found) {
printf("%d not found in the array.\n", search);
}
return 0;
}
