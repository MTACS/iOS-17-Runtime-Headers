
@interface MAOptionalStepRelation : MARelation {
    MARelation * _base;
}

@property (nonatomic, readonly) MARelation *base;

+ (id)scanRelationWithScanner:(id)arg1;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (id)base;
- (unsigned long long)hash;
- (id)initWithBase:(id)arg1;
- (id)inverse;
- (bool)isEqual:(id)arg1;
- (id)transitiveClosure;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;
- (id)visualString;

@end
