
@interface MAGraphChangeRequest : NSObject {
    KGMutableElementIdentifierSet * _edgeIdentifiersToRemove;
    NSMutableArray * _edgesToInsert;
    KGMutableElementIdentifierSet * _nodeIdentifiersToRemove;
    NSMutableArray * _nodesToInsert;
}

@property (nonatomic, retain) KGMutableElementIdentifierSet *edgeIdentifiersToRemove;
@property (nonatomic, retain) NSMutableArray *edgesToInsert;
@property (nonatomic, retain) KGMutableElementIdentifierSet *nodeIdentifiersToRemove;
@property (nonatomic, retain) NSMutableArray *nodesToInsert;
@property (nonatomic, readonly) unsigned long long numberOfChanges;

- (void).cxx_destruct;
- (void)addEdge:(id)arg1;
- (void)addNode:(id)arg1;
- (id)edgeIdentifiersToRemove;
- (id)edgesToInsert;
- (id)init;
- (id)nodeIdentifiersToRemove;
- (id)nodesToInsert;
- (unsigned long long)numberOfChanges;
- (void)removeEdge:(id)arg1;
- (void)removeEdges:(id)arg1;
- (void)removeEdgesForIdentifier:(unsigned long long)arg1;
- (void)removeEdgesForIdentifiers:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)removeNodeForIdentifier:(unsigned long long)arg1;
- (void)removeNodes:(id)arg1;
- (void)removeNodesForIdentifiers:(id)arg1;
- (void)setEdgeIdentifiersToRemove:(id)arg1;
- (void)setEdgesToInsert:(id)arg1;
- (void)setNodeIdentifiersToRemove:(id)arg1;
- (void)setNodesToInsert:(id)arg1;

@end
