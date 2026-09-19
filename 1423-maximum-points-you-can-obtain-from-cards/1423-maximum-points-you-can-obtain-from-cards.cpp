class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ans = 0;
        int sum = 0;

        // Take k cards from the left
        for(int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        ans = sum;

        // Replace left cards one by one with right cards
        for(int i = 0; i < k; i++) {
            sum -= cardPoints[k - 1 - i];
            sum += cardPoints[n - 1 - i];

            ans = max(ans, sum);
        }

        return ans;
    }
};