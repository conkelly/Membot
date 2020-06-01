#include "graphedge.h"
#include "graphnode.h"
#include<iostream>

GraphNode::GraphNode(int id)
{
  //std::cout<<"GraphNode::GraphNode";
    _id = id;
}

GraphNode::~GraphNode()
{
  //std::cout<<"GraphNode::~GraphNode";
    //// STUDENT CODE
    ////

    //delete _chatBot; 

    ////
    //// EOF STUDENT CODE
}

void GraphNode::AddToken(std::string token)
{
  //std::cout<<"GraphNode::AddToken";
    _answers.push_back(token);
}

void GraphNode::AddEdgeToParentNode(GraphEdge *edge)
{
  //std::cout<<"GraphNode::AddEdgeToParentNode";
    _parentEdges.push_back(edge);
}

void GraphNode::AddEdgeToChildNode(GraphEdge *edge)
{
  //std::cout<<"GraphNode::AddEdgeToChildNode";
    _childEdges.push_back(std::unique_ptr<GraphEdge>(edge));
}

//// STUDENT CODE
////
void GraphNode::MoveChatbotHere(ChatBot chatbot)
{
  //std::cout<<"GraphNode::MoveChatbotHere";
    _chatBot = std::move(chatbot);
    _chatBot.SetCurrentNode(this);
}

void GraphNode::MoveChatbotToNewNode(GraphNode *newNode)
{
  //std::cout << "GraphNode::MoveChatbotToNewNode";
    newNode->MoveChatbotHere(std::move(_chatBot));
    //_chatBot = nullptr; // invalidate pointer at source
}
////
//// EOF STUDENT CODE

GraphEdge *GraphNode::GetChildEdgeAtIndex(int index)
{
  //std::cout<< "GraphNode::GetChildEdgeAtIndex";
    //// STUDENT CODE
    ////

    return _childEdges[index].get();

    ////
    //// EOF STUDENT CODE
}