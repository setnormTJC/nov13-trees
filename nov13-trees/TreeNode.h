#pragma once

#include<iostream>

#include<queue>

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

   /* bool isLeaf()
    {
        if (left == nullptr && right == nullptr)
        {
            return true;
        }

        else
        {
            return false;
        }
    }*/

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


};