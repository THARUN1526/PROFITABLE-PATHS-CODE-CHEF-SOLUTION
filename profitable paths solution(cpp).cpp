#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 300000
#define MOD 1000000007
#define MODx(x) ((x) % MOD)

int dfs(vector<int> adjLists[], long long nodePasses[], bool visited[], int n, int now, int leafCount){
    visited[now] = true;
    int count = 0, oneEdgeCount;
    long long edgePass;
    vector<int> &adjList = adjLists[now];
    for(int i = 0; i < adjList.size(); ++i){
        if(!visited[adjList[i]]){
            oneEdgeCount = dfs(adjLists, nodePasses, visited, n, adjList[i], leafCount);
            edgePass = (long long)oneEdgeCount * (leafCount - oneEdgeCount);
            nodePasses[now] += edgePass;
            nodePasses[adjList[i]] += edgePass;
            count += oneEdgeCount;
        }
    }
    if(!count){
        nodePasses[now] = (leafCount - 1);
        return 1;
    }
    return count;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 300000
#define MOD 1000000007
#define MODx(x) ((x) % MOD)

int dfs(vector<int> adjLists[], long long nodePasses[], bool visited[], int n, int now, int leafCount){
    visited[now] = true;
    int count = 0, oneEdgeCount;
    long long edgePass;
    vector<int> &adjList = adjLists[now];
    for(int i = 0; i < adjList.size(); ++i){
        if(!visited[adjList[i]]){
            oneEdgeCount = dfs(adjLists, nodePasses, visited, n, adjList[i], leafCount);
            edgePass = (long long)oneEdgeCount * (leafCount - oneEdgeCount);
            nodePasses[now] += edgePass;
            nodePasses[adjList[i]] += edgePass;
            count += oneEdgeCount;
        }
    }
    if(!count){
        nodePasses[now] = (leafCount - 1);
        return 1;
    }
    return count;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
	return 0;
}
