#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <assert.h>	
#include <time.h>

dsdcdcdasv
long ShortestPathLength(graph g, ...)
{

}
int main()
{
    
    graph G;

    G = readGraph();
    // returns the shortest path from onr node to another
    shortestPath = ShortestPathLength(G, ...);
    //return a graph that is minimum spanning tree;
    minimumSpanningTree = MinispanningTree(G);

    //cycle detection return boolean, true if cycle exists and false otherwise
    iscycle = checkCycle(G);
    //check bipartite graph.
    isbipartite = checkBipartite(G);
    //the function should perform the topological sort 
    TopologicalSort(G);

    //implement BFS DFS
    bfs(G);
    dfs(G);

    return 0;
}
