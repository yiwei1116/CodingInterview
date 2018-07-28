/**
    Write a function:

    int solution(int A[], int N);

    that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

    For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

    Given A = [1, 2, 3], the function should return 4.

    Given A = [−1, −3], the function should return 1.

    Assume that:

    N is an integer within the range [1..100,000];
    each element of array A is an integer within the range [−1,000,000..1,000,000].
    Complexity:

    expected worst-case time complexity is O(N);
    expected worst-case space complexity is O(N) (not counting the storage required for input arguments).
 * */

// Use an array to record another array value appearance
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int arr[N], i ;
    int count = 0;
    for(i = 0 ; i < N ; i++){
        
        arr[i] = 0;    
    
    }
    for(i = 0 ; i < N ; i++){
    if(A[i] > 0 && A[i] <= N){
        arr[A[i]]=1;
        count++;
    }
    }
    for(i = 1 ; i <= count ; i++){
        
        if(arr[i]==0)
            return i;
        
    }
   
    return i;
}