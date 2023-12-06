#include <iostream>


#include"C:/Users/Work/Downloads/someTestTrees.h"

using namespace std;





int main()
{
    //main(); 


    //TreeNode<string> rootOfPeopleTree("Alice");

    //rootOfPeopleTree.left = new TreeNode<string>("Carol"); //new (heap allocation) is slow

    //TreeNode<string> rightChildOfRoot("Bob"); 

    //rootOfPeopleTree.right = &rightChildOfRoot; 

    //rootOfPeopleTree.right->right = new TreeNode<string>("Darth");

    //rootOfPeopleTree.levelOrderTraverse(&rootOfPeopleTree);
    
    
    //cout << std::boolalpha << rootOfPeopleTree.isLeaf() << endl; 
    //cout << rootOfPeopleTree.left->isLeaf() << endl; 
    //cout << rightChildOfRoot.isLeaf() << endl; 



    //auto rootOfLevelOrderTree = generateLevelOrderTree();

    //rootOfLevelOrderTree->levelOrderTraverse(rootOfLevelOrderTree); 
    
    


    //TreeNode<int> root(1);
    //
    ////cout << root.left << endl; 
    ////cout << root.right << endl;

    //TreeNode<int> leftChildOfRoot(2);
    //root.left = &leftChildOfRoot;
    ////root.left = new TreeNode<int>(2);


    //root.right = new TreeNode<int>(3); 

    //cout << std::boolalpha << root.isLeaf() << endl; 
    //cout << std::boolalpha << leftChildOfRoot.isLeaf() << endl;



    //auto inorderTree = generateInorderTree(); 

    //inorderTree->levelOrderTraverse(inorderTree);

    //inorderTree->inorderTraverse(inorderTree); //depth-first traversal algo.
    

    auto levelOrderTree = generateLevelOrderTree();

    //levelOrderTree->inorderTraverse(levelOrderTree);

    cout << "The number of leaves is: " << levelOrderTree->getLeafCount(levelOrderTree) << endl;

    return 0;
}