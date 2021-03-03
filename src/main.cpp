#include <iostream>
#include <vector>
#include <string>

using namespace std;

string to_String(vector<int> v)
{
    if (v.size() == 0) return "{}";
    string result = "{";
    for (int i=0; i<v.size()-1; i++) {
        result += to_string(v[i]) + ", ";
    }
    result += to_string(v[v.size()-1]) + "}";
    return result;
}

double average(vector<int> v) 
{
    double sum = 0;
    for(int i=0; i<v.size(); i++) {
        sum += v[i];
    }
    return sum / v.size();

}


int find(const vector<int> &v, int key) 
{
    for (int i=0; i<v.size(); i++) {
        if (v[i] == key) return i;
    }
    return -1;

}

void prepend(vector<int> &v, int key) {

    v.insert(v.begin(), key);

}

void append(vector<int> &v, int key) {

    // YOUR CODE

}

void removeFirst(vector<int> &v, int key) {

    int pos = find(v, key);
    if (pos < 0) return;
    v.erase(v.begin() + pos);

}


bool isSubset(vector<int> A, vector<int> B) {

    for (int i=0; i<A.size(); i++) {
        if (find(B, A[i]) < 0) return false;
    }
    return true;
}


vector<int> intersection(vector<int> A, vector<int> B)
{

    vector<int> result;

    // YOUR CODE

    return result;

}


int main()
{

    vector<int> testVector = {0, 1, 2, 3, 4, 5 };
    cout << to_String(testVector) << endl;


    cout << "Average: " << average(testVector) << endl;

    cout << "Find(0): " << find(testVector, 0) << endl;
    cout << "Find(3): " << find(testVector, 3) << endl;
    cout << "Find(6): " << find(testVector, 6) << endl;

    prepend(testVector, 10);
    cout << "Prepend(10): " << to_String(testVector) << endl;
    prepend(testVector, 11);
    cout << "Prepend(11): " << to_String(testVector) << endl;

    removeFirst(testVector, 10);
    cout << "RemoveFirst(100): " << to_String(testVector) << endl;

    removeFirst(testVector, 1000);
    cout << "RemoveFirst(1000): " << to_String(testVector) << endl;

    cout << "isSubset({}, {1,2,3}): " << (isSubset({}, {1,2,3}) ? "true" : "false") << endl;
    cout << "isSubset({1,2,3}, {1,2,3}): " << (isSubset({1,2,3}, {1,2,3}) ? "true" : "false") << endl;
    cout << "isSubset({1,2,3}, {}): " << (isSubset({1,2,3}, {}) ? "true" : "false") << endl;

    // cout << "intersection({}, {1,2,3}): " << to_String(intersection({}, {1,2,3})) << endl;
    // cout << "intersection({1,2,3}, {1,2,3}): " << to_String(intersection({1,2,3}, {1,2,3})) << endl;
    // cout << "intersection({1,2,3}, {}): " << to_String(intersection({1,2,3}, {})) << endl;
}


