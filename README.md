# Binary Search Tree (BST)

A Binary Search Tree implementation built from scratch in modern C++ using `std::unique_ptr` for ownership management.

## Features

* Recursive insertion
* Recursive search (`contains`)
* In-order traversal
* Recursive size calculation
* Recursive height calculation
* Find minimum node
* Recursive node deletion
* Automatic memory management using `std::unique_ptr`

## Concepts Practiced

### Smart Pointers

* `std::unique_ptr`
* Ownership transfer
* Move semantics
* Automatic cleanup

### Recursion

* Base cases
* Recursive traversal
* Recursive search
* Recursive aggregation (`size`, `height`)
* Recursive deletion

### Data Structures

* Binary Search Trees
* Tree traversal
* Tree height
* Successor node selection
* Node deletion cases

## Operations

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(h)       |
| Contains  | O(h)       |
| Remove    | O(h)       |
| Height    | O(n)       |
| Size      | O(n)       |

Where `h` is the height of the tree.

## Deletion Cases

1. Leaf node
2. One child
3. Two children (in-order successor replacement)

## Lessons Learned

This project introduced recursive thinking, tree structures, and ownership-based memory management. The implementation uses recursive algorithms for insertion, search, traversal, size calculation, height calculation, minimum-node lookup, and deletion.
