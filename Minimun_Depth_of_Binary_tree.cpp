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

    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left_child = minDepth(root->left);
        int right_child = minDepth(root->right);
        if(left_child == 0){
            return right_child+1;
        }
        else if(right_child == 0){
            return left_child+1;
        }
        int a = min(left_child,right_child)+1;
        return a;
    }
};
