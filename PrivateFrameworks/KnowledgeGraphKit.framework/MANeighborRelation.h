
@interface MANeighborRelation : MARelation {
    MAEdgeFilter * _edgeFilter;
    unsigned long long  _edgeType;
}

@property (nonatomic, readonly, copy) MAEdgeFilter *edgeFilter;
@property (nonatomic, readonly) unsigned long long edgeType;

+ (id)scanRelationWithScanner:(id)arg1;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;
- (id)adjacencyWithEndNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (id)edgeFilter;
- (unsigned long long)edgeType;
- (unsigned long long)hash;
- (id)initWithEdgeType:(unsigned long long)arg1 edgeFilter:(id)arg2;
- (id)inverse;
- (bool)isEqual:(id)arg1;
- (id)transitiveClosure;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;
- (id)visualString;

@end
