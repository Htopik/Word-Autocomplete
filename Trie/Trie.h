#pragma once
#include <iostream>
#include <vector>
using namespace std;
const int ALPHABET_SIZE = 26;
struct TrieNode
{
	struct TrieNode* children[ALPHABET_SIZE];
	// isEndOfWord - true, если ключ является концом слова
	bool isEndOfWord;
};

TrieNode* getNewNode();
void insert(TrieNode*, string);
bool search(TrieNode*, string);
bool isEmpty(TrieNode*);
TrieNode* remove(TrieNode*, string, int depth = 0);
void findMinPrefixes(TrieNode*, char[], int, string&);
vector<string> findWords(TrieNode*, string);

