/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
Complexity: O(n)
 */
class Solution {
public:
    int ht(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int lh=ht(root->left);
        int rh=ht(root->right);
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        int lh=ht(root->left);
        int rh=ht(root->right);
        if(abs(lh-rh) > 1)
            return false;
        return (isBalanced(root->left)&& isBalanced(root->right)) ;   
    }
};
