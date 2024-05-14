#include <iostream>

using namespace std;

// Node structure for binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize node
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to perform in-order traversal
void inOrder(Node* root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Function to perform pre-order traversal
void preOrder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Function to perform post-order traversal
void postOrder(Node* root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postOrder(root);
    cout << endl;

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}