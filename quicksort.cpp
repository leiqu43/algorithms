void quickSort(int arr[], int left, int right, int k) {
      int i = left, j = right;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  swap(arr[i], arr[j]);
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j, k);
      if (i < right)
            quickSort(arr, i, right, k);
}
