class Solution {
public:
//T(C(N)==O(1)) and S(C(N)=O(N) as it requires non contigous memory allocation recursively
    TreeNode* sortedArrayToBST(vector<int>& nums) {//Sorted arrayto Bst Conversio funct 
        if(nums.size()==0)return NULL;//Initalizing arrays size
        return BstNode(nums,0,nums.size()-1);}//printing converted Bst Intialized Root Node

    TreeNode* BstNode(vector<int>& nums,int l,int r){//BStNode Funct Declare
        if(l>r)return NULL;//Initalizing Bst Node
        int mid=l+(r-l)/2;//Mid Node Caclulation
        TreeNode* node=new TreeNode(nums[mid]);//Allocating BST Node Dynamically
        node->left=BstNode(nums,l,mid-1);//Left Child Declare
        node->right=BstNode(nums,mid+1,r);//Right Child Declare
        return node;}};//Printing Converted BST
