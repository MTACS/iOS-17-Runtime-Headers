
@interface MANodeFilterRelation : MARelation {
    MANodeFilter * _nodeFilter;
}

@property (nonatomic, readonly, copy) MANodeFilter *nodeFilter;

+ (id)scanRelationWithScanner:(id)arg1;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (unsigned long long)hash;
- (id)initWithNodeFilter:(id)arg1;
- (id)inverse;
- (bool)isEqual:(id)arg1;
- (id)nodeFilter;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;
- (id)visualString;

@end
