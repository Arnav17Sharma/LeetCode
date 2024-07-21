/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void solve(TreeNode* root, vector<int> &ans) {
        if(root == nullptr)
            return;
        ans.push_back(root->val);
        solve(root->left, ans);
        solve(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        if(root == nullptr)
            return ans;
        st.push(root);
        while(!st.empty()) {
            TreeNode *node = st.top();
            ans.push_back(node->val);
            st.pop();
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return ans;
    }
};