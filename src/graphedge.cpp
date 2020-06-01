#include "graphnode.h"
#include "graphedge.h"
#include<iostream>

GraphEdge::GraphEdge(int id)
{
  //std::cout<<"GraphEdge::GraphEdge";
    _id = id;
}

void GraphEdge::SetChildNode(GraphNode *childNode)
{
  //std::cout<<"GraphEdge::SetChildNode";
    _childNode = childNode;
}

void GraphEdge::SetParentNode(GraphNode *parentNode)
{
  //std::cout<<"GraphEdge::SetParentNode";
    _parentNode = parentNode;
}

void GraphEdge::AddToken(std::string token)
{
  //std::cout<<"GraphEdge::Addtoken";
    _keywords.push_back(token);
}