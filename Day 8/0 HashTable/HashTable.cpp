#include <iostream>
#include <string>
#include <list>
using namespace std;

template <typename K, typename V>
class HashTable
{
private:
    int size;
    list<pair<K, V>> *table;

    int hash(K key)
    {
        int hash = 0;
        string s = to_string(key);
        for (char c : s)
        {
            hashValue += (int)c;
        }
        return hashValue % size;
    }

public:
    HashTable(int size = 1000)
    {
        this->size = size;
        table = new list<pair<K, V>>[size];
    }

    void put(K key, V value)
    {
    }

    void get(K key)
    {
    }
};