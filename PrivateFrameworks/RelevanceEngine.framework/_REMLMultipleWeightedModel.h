
@interface _REMLMultipleWeightedModel : _REMLWeightedModel <_REMLMultipleWeightedModelProperties> {
    REFeatureSet * _featureSet;
    REFeature * _identificationFeature;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _models;
    float  _priorMean;
    float  _varianceEpsilon;
}

@property (nonatomic, readonly) NSDictionary *models;

- (void).cxx_destruct;
- (id)_modelForFeatureMap:(id)arg1;
- (id)_modelForKey:(id)arg1;
- (void)enumerateModels:(id /* block */)arg1;
- (id)initWithFeature:(id)arg1 featureSet:(id)arg2 priorMean:(float)arg3 biasFeature:(id)arg4 modelVarianceEpsilon:(float)arg5;
- (bool)loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)models;
- (id)predictWithFeatures:(id)arg1;
- (bool)saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;

@end
