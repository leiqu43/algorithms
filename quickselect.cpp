int partition(int arr[], int left, int right, int pivotIndex) {
     int pivotValue = arr[pivotIndex];
     swap(arr[pivotIndex], arr[right]);  // Move pivot to end
     int storeIndex = left;
     for (int i=left; i<right; i++) {
         if (arr[i] < pivotValue) {
             swap(arr[storeIndex], arr[i]);
             storeIndex++;
         }
    }
    swap(arr[right], arr[storeIndex]);  // Move pivot to its final place
    return storeIndex;
}

void select(int list[], int left, int right, int n) {
     if (left == right)        // If the list contains only one element,
         return;  // return that element
     int pivotIndex  = left;     // select a pivotIndex between left and right,
                            // e.g., left + floor(rand() * (right - left + 1))
     pivotIndex  = partition(list, left, right, pivotIndex);
     // The pivot is in its final sorted position
     if (n == pivotIndex) {
         return;
     } else if (n < pivotIndex) {
         return select(list, left, pivotIndex - 1, n);
     } else {
         return select(list, pivotIndex + 1, right, n);
     }
}
