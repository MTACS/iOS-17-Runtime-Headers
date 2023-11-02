
@interface LCFShadowEvaluation : NSObject {
    LCFFeatureStore * _featureStore;
    LCFModelStore * _modelStore;
}

@property (nonatomic, readonly) LCFFeatureStore *featureStore;
@property (nonatomic, readonly) LCFModelStore *modelStore;

- (void).cxx_destruct;
- (id)evaluateModels:(id)arg1;
- (id)featureStore;
- (id)init:(id)arg1 modelStore:(id)arg2;
- (id)modelStore;

@end
