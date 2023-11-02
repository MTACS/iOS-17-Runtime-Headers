
@interface MLGKDecisionTree : NSObject {
    NSMutableArray * __attributes;
    NSMutableOrderedSet * __objectStore;
    void * _trc;
    MLTreeEnsembleClassifier * _treeClassifier;
}

@property (nonatomic, retain) NSMutableArray *_attributes;
@property (nonatomic, retain) NSMutableOrderedSet *_objectStore;

- (void).cxx_destruct;
- (id)_attributes;
- (id)_init;
- (id)_initWithFlattenedTree:(id)arg1;
- (void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2;
- (id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2;
- (id)_objectStore;
- (bool)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)set_attributes:(id)arg1;
- (void)set_objectStore:(id)arg1;

@end
