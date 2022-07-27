class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr, arr+n);
        int cnt = 0;
        while(pq.top() < k)
        {
            int top = pq.top();
            pq.pop();
            int top_next = pq.top();
            pq.pop();
            pq.push(top+top_next);
            cnt++;
        }
        return cnt;
    }
};