
@interface MARelationCollectionFeatureExtractor : MAFeatureExtractor {
    MAIndexCache * _featureNameIndexCache;
    NSString * _labelForEmptyRelation;
    id /* block */  _labelForTargetBlock;
    NSString * _name;
    MARelation * _relation;
}

@property (nonatomic, readonly) MAIndexCache *featureNameIndexCache;
@property (nonatomic, readonly) NSString *labelForEmptyRelation;
@property (nonatomic, readonly) id /* block */ labelForTargetBlock;
@property (nonatomic, readonly) MARelation *relation;

- (void).cxx_destruct;
- (id)featureNameIndexCache;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 featureNames:(id)arg2 relation:(id)arg3 labelForEmptyRelation:(id)arg4 labelForTargetBlock:(id /* block */)arg5;
- (id)initWithName:(id)arg1 featureNames:(id)arg2 relation:(id)arg3 labelForTargetBlock:(id /* block */)arg4;
- (id)labelForEmptyRelation;
- (id /* block */)labelForTargetBlock;
- (id)name;
- (id)relation;

@end
