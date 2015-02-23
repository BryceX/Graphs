#ifndef _GRAPH_H_
#define _GRAPH_H_

#include <string>
#include <vector>
#include <iostream>
class GraphNode
{
	struct Edge
	{
		GraphNode*		m_pStart;
		GraphNode*		m_pEnd;

		float			m_fCost;

	};


public:
	GraphNode(int a_iNum);
	typedef std::vector<Edge> EdgeList;
	EdgeList        m_aEdges;
	int			m_iNodeNumber;

};

class Graph
{
	typedef std::vector<GraphNode*> NodeList;
public:
	//Creates an empty graph
	Graph();
	//Creates a graph with the given number of nodes
	//the contents and links of the nodes are randomised
	Graph(unsigned int a_uiNodeCount);
	//add these to your graph class
	void AddNode(GraphNode* a_pNode);
	void RemoveNode(GraphNode* a_pNode);

private:
	NodeList		m_aNodes;



	

};

int main()
{

	std::cout << NodeList << std::endl;
}
//Add to your GraphNode class

#endif //_GRAPH_H_