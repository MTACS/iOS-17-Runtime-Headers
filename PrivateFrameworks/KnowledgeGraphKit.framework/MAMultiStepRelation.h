
@interface MAMultiStepRelation : MARelation {
    MARelation * _base;
    unsigned long long  _maxNumberOfSteps;
    unsigned long long  _minNumberOfSteps;
}

@property (nonatomic, readonly) MARelation *base;
@property (nonatomic, readonly) unsigned long long maxNumberOfSteps;
@property (nonatomic, readonly) unsigned long long minNumberOfSteps;

+ (id)scanRelationWithScanner:(id)arg1;

- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;
- (id)base;
- (unsigned long long)hash;
- (id)initWithBase:(id)arg1 minNumberOfSteps:(unsigned long long)arg2 maxNumberOfSteps:(unsigned long long)arg3;
- (id)initWithBase:(id)arg1 numberOfSteps:(unsigned long long)arg2;
- (id)inverse;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxNumberOfSteps;
- (unsigned long long)minNumberOfSteps;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;
- (id)visualString;

@end
