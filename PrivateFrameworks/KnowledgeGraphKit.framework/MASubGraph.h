
@interface MASubGraph : NSObject {
    NSMutableDictionary * _edgesByIdentifier;
    NSMutableDictionary * _edgesByLabel;
    NSMutableDictionary * _edgesByName;
    MABaseGraph * _graph;
    NSMutableDictionary * _nodesByIdentifier;
    NSMutableDictionary * _nodesByLabel;
    NSMutableDictionary * _nodesByName;
    NSMutableDictionary * _nodesByNameGroupByNodes;
}

@property (nonatomic, readonly) MABaseGraph *graph;

+ (id)subGraphIntersectionsWithSubGraphs:(id)arg1;
+ (id)subGraphWithGraph:(id)arg1;

- (void).cxx_destruct;
- (void)_addEdge:(id)arg1 withName:(id)arg2;
- (void)_addNode:(id)arg1 withName:(id)arg2;
- (void)_addNode:(id)arg1 withName:(id)arg2 forKeyNode:(id)arg3;
- (void)addEdges:(id)arg1 withName:(id)arg2;
- (void)addNodes:(id)arg1 withName:(id)arg2;
- (id)allEdges;
- (id)allNamedEdges;
- (id)allNamedNodes;
- (id)allNodes;
- (id)description;
- (id)edgeForIdentifier:(unsigned long long)arg1;
- (unsigned long long)edgesCount;
- (unsigned long long)edgesCountForLabel:(id)arg1;
- (unsigned long long)edgesCountForName:(id)arg1;
- (id)edgesForLabel:(id)arg1;
- (id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)edgesForName:(id)arg1;
- (id)edgesLabels;
- (id)edgesNames;
- (void)enumerateEdgesByNameUsingBlock:(id /* block */)arg1;
- (void)enumerateEdgesWithBlock:(id /* block */)arg1;
- (void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEdgesWithName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesByNameUsingBlock:(id /* block */)arg1;
- (void)enumerateNodesWithBlock:(id /* block */)arg1;
- (void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesWithName:(id)arg1 fromNode:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateNodesWithName:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)graph;
- (id)graphRepresentation;
- (id)init;
- (void)mergeWithSubGraph:(id)arg1;
- (id)nodeForIdentifier:(unsigned long long)arg1;
- (unsigned long long)nodesCount;
- (unsigned long long)nodesCountForLabel:(id)arg1;
- (unsigned long long)nodesCountForName:(id)arg1;
- (unsigned long long)nodesCountForName:(id)arg1 fromNode:(id)arg2;
- (id)nodesForLabel:(id)arg1;
- (id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)nodesForName:(id)arg1;
- (id)nodesForName:(id)arg1 fromNode:(id)arg2;
- (id)nodesForNames:(id)arg1;
- (id)nodesLabels;
- (id)nodesNames;
- (id)objectForKeyedSubscript:(id)arg1;

@end
