
@interface MATransitiveNeighborRelation : MANeighborRelation

- (id)initWithEdgeType:(unsigned long long)arg1 edgeFilter:(id)arg2;
- (id)initWithNeighborRelation:(id)arg1;
- (bool)isTransitive;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;

@end
