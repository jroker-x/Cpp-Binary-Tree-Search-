#include<iostream>
#include<memory>

struct Node
{
    int value;
    std::unique_ptr<Node> right;
    std::unique_ptr<Node> left;
    Node(int val)
        : value(val)
    {}

};
void insertH(std::unique_ptr<Node>& nodeTT,int value);

class BST{

    private:
        std::unique_ptr<Node> root;

    public:
        void insert(int value){
            insertH(root,value);
        }

        void inorder(Node* node){

            if (node == nullptr)
            {
                return;
            }
            
            inorder(node->left.get());
            
            std::cout << node->value << '\n';

            inorder(node->right.get());

        }

        bool contains(Node* node, int value){

            if (node == nullptr)
            {
                return false;
            }

            if (node->value == value)
            {
               return true;
            }

            if (value < node->value)
            {
                return contains(node->left.get(),value);
            }

            if (value > node->value)
            {
                return contains(node->right.get(),value);
            }

            return false;
        }

        int size(){
            int sizenode = 0;





            
        }
    
};

int main(){

    BST tree;

    tree.insert(8);
    tree.insert(4);
    tree.insert(12);
    tree.insert(2);
    tree.insert(6);
    


}


void insertH(std::unique_ptr<Node>& nodeTT,int value){
        
        if (nodeTT == nullptr)
        {
            nodeTT = std::make_unique<Node>(value);
            return;
        }
        else if (value < nodeTT->value)
        {
            insertH(nodeTT->left,value);
            return;
        }
        else if (value > nodeTT->value)
        {
           insertH(nodeTT->right,value);
           return;
        }
        
    }



