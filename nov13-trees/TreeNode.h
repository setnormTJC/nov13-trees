#pragma once

#include<iostream>

#include<queue>

#include<stack>

using namespace std;


template<typename T>
class TreeNode
{
public:
    //member variables:
    T nodeValue;

    TreeNode<T>* left = nullptr;
    TreeNode<T>* right = nullptr; //vector<TreeNode<T>> *treeNodePointers ->general tree

    //member functions: 
    TreeNode() {};

    TreeNode(const T& nodeValue) //root contents 
    {
        this->nodeValue = nodeValue;
    }

    bool isLeaf()
    {
        if (left == nullptr
            &&
            this->right == nullptr)
        {
            return true;
        }

        else
        {
            return false; 
        }
    }

    void inorderTraverse(TreeNode<T>* root)
    {
        if (root != nullptr)
        {
            
            inorderTraverse(root->left); //recursion!
            
            cout << root->nodeValue << " "; //omitting endl
            
            inorderTraverse(root->right);

        }
    }

    void levelOrderTraverse(TreeNode<T>* root)
    {
        std::queue<TreeNode<T>*> treeNodeQueue;
        //queue to the res-queue(rescue)

        treeNodeQueue.push(root);

        int nodeCount = 1;

        while (!treeNodeQueue.empty())
        {
            TreeNode<T>* current;
            current = treeNodeQueue.front();

            treeNodeQueue.pop();

            cout << current->nodeValue << endl;

            if (current->left != nullptr)
            {
                nodeCount++;
                treeNodeQueue.push(current->left);
            }

            if (current->right != nullptr)//switch left and right, if desired 
            {
                nodeCount++;
                treeNodeQueue.push(current->right);
            }
        }//end while (queue not empty)
    }


    int getLeafCount(TreeNode<T>* root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int leafCount = 0;
        std::stack<TreeNode<T>*> nodeStack;
        nodeStack.push(root);
        
        while (!nodeStack.empty())
        {
            TreeNode<T>* current = nodeStack.top();
            nodeStack.pop();


            if (current->left != nullptr) {
                nodeStack.push(current->left);
            }

            if (current->right != nullptr) {
                nodeStack.push(current->right);
            }

            if (current->isLeaf()) {
                leafCount++;
            }
        } //end while not empty stack
        return leafCount;

    } //end of `getLeafCount`

}; //end TreeNode.h