
@interface KGNeighborRelation : NSObject <KGRelation> {
    unsigned long long  _edgeDirection;
    KGEdgeFilter * _edgeFilter;
}

@property (nonatomic, readonly) unsigned long long edgeDirection;
@property (nonatomic, readonly) KGEdgeFilter *edgeFilter;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 inGraph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 inGraph:(id)arg2;
- (unsigned long long)edgeDirection;
- (id)edgeFilter;
- (id)initWithEdgeFilter:(id)arg1 edgeDirection:(unsigned long long)arg2;
- (id)inverse;
- (id)targetNodeIdentifiersFromSourceNodeIdentifiers:(id)arg1 inGraph:(id)arg2;

@end
