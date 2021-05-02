/**二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==nullptr)   return res;
        queue<TreeNode*> qu;
        qu.push(root);

        while(!qu.empty())
        {
            vector<int> level;//
            int len=qu.size();
            cout<<"len:"<<len;
            for(int i=0;i<len;i++)
            {
                TreeNode *cur=qu.front();
                qu.pop();
                level.push_back(cur->val);                //中
                if(cur->left)   qu.push(cur->left);     //左
                if(cur->right)  qu.push(cur->right);    //右
                cout<<"front:"<<qu.front();
                cout<<"val:"<<cur->val<<endl;
            }
            res.push_back(level);
        }
        return res;
    } 
};
