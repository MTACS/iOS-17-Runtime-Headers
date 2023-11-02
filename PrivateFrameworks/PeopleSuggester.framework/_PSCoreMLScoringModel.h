
@interface _PSCoreMLScoringModel : NSObject {
    NSArray * _featureOrder;
    NSOrderedSet * _featureOrderLookup;
    NSString * _inputFeatureName;
    NSArray * _inputShape;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSDictionary * _metadata;
    MLModel * _mlModel;
    LCFModelStore * _modelStore;
    long long  _modelType;
    NSURL * _modelURL;
    NSString * _numCandidatesFeatureName;
    NSString * _outputFeatureName;
}

@property (nonatomic, retain) NSArray *featureOrder;
@property (nonatomic, retain) NSOrderedSet *featureOrderLookup;
@property (nonatomic, retain) NSString *inputFeatureName;
@property (nonatomic, retain) NSArray *inputShape;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } lock;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) MLModel *mlModel;
@property (nonatomic, readonly) LCFModelStore *modelStore;
@property (nonatomic) long long modelType;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, retain) NSString *numCandidatesFeatureName;
@property (nonatomic, retain) NSString *outputFeatureName;

- (void).cxx_destruct;
- (int)_getIndexForIndices:(id)arg1 multiArray:(id)arg2;
- (id)batchPredictWithFeatureDictArray:(id)arg1;
- (id)featureOrder;
- (id)featureOrderLookup;
- (id)getModelDescription;
- (id)getModelPath;
- (long long)getModelTypeWithModelMetadata:(id)arg1;
- (id)getNumberAtIndices:(id)arg1 forMultiArray:(id)arg2;
- (id)getSuggestionProxiesForCandidateToFeatureVectorDict:(id)arg1 predictionContext:(id)arg2 messageInteractionCache:(id)arg3 shareInteractionCache:(id)arg4;
- (id)init;
- (id)initWithCoreMLModel:(id)arg1;
- (id)inputFeatureName;
- (id)inputShape;
- (bool)isGBDTModel;
- (bool)isSetModel;
- (id)loadCoreMLModel:(id)arg1 config:(id)arg2;
- (void)loadModel;
- (void)loadModelMetadata;
- (void)loadProductionModel:(id)arg1;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })lock;
- (id)metadata;
- (id)mlModel;
- (id)modelStore;
- (long long)modelType;
- (id)modelURL;
- (id)numCandidatesFeatureName;
- (id)outputFeatureName;
- (id)predictWithFeatureTensor:(id)arg1 numCandidates:(id)arg2;
- (id)preprocessAndFetchFeatureTensor:(id)arg1;
- (id)reformatCandidateDictionaryIntoFeatureTensor:(id)arg1;
- (id)reformatFeatureVectorsIntoFeatureDictArray:(id)arg1;
- (id)scoreCandidates:(id)arg1 predictionContext:(id)arg2;
- (void)setFeatureOrder:(id)arg1;
- (void)setFeatureOrderLookup:(id)arg1;
- (void)setInputFeatureName:(id)arg1;
- (void)setInputShape:(id)arg1;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setMlModel:(id)arg1;
- (void)setModelType:(long long)arg1;
- (void)setModelURL:(id)arg1;
- (void)setNumCandidatesFeatureName:(id)arg1;
- (void)setNumberAtIndices:(id)arg1 forMultiArray:(id)arg2 value:(id)arg3;
- (void)setOutputFeatureName:(id)arg1;
- (void)unloadModel;

@end
