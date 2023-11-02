
@interface KGGraphChangeRequest : NSObject {
    KGMutableElementIdentifierSet * _edgeIdentifiersToRemove;
    NSMutableArray * _edgeUpdates;
    NSMutableArray * _edgesToInsert;
    KGMutableElementIdentifierSet * _nodeIdentifiersToRemove;
    NSMutableArray * _nodeUpdates;
    NSMutableArray * _nodesToInsert;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) KGMutableElementIdentifierSet *edgeIdentifiersToRemove;
@property (nonatomic, retain) NSMutableArray *edgeUpdates;
@property (nonatomic, retain) NSMutableArray *edgesToInsert;
@property (nonatomic, retain) KGMutableElementIdentifierSet *nodeIdentifiersToRemove;
@property (nonatomic, retain) NSMutableArray *nodeUpdates;
@property (nonatomic, retain) NSMutableArray *nodesToInsert;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)edgeIdentifiersToRemove;
- (id)edgeUpdates;
- (id)edgesToInsert;
- (id)init;
- (void)insertEdge:(id)arg1;
- (void)insertNode:(id)arg1;
- (id)nodeIdentifiersToRemove;
- (id)nodeUpdates;
- (id)nodesToInsert;
- (void)removeEdge:(id)arg1;
- (void)removeEdgesForIdentifiers:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)removeNodesForIdentifiers:(id)arg1;
- (void)setEdgeIdentifiersToRemove:(id)arg1;
- (void)setEdgeUpdates:(id)arg1;
- (void)setEdgesToInsert:(id)arg1;
- (void)setNodeIdentifiersToRemove:(id)arg1;
- (void)setNodeUpdates:(id)arg1;
- (void)setNodesToInsert:(id)arg1;
- (void)setResolved;
- (void)updateEdge:(id)arg1 newProperties:(id)arg2;
- (void)updateNode:(id)arg1 newProperties:(id)arg2;

@end
