
@interface CDMCATIChildService : NSObject {
    int  _algoType;
    NSBundle * _catiAssetBundle;
    CDMCATIManifest * _catiManifest;
    float  _confidenceThreshold;
    long long  _embeddingDimensionCATI;
    long long  _embeddingDimensionCATIPlusOne;
    int  _expectedPositiveUtterances;
    FLTCDMCATIBloomFilters * _fbBloomFilters;
    NSMutableArray * _invocationGUIDs;
    bool  _invocationOverridesEnabled;
    bool  _invocationWeightsEnabled;
    bool  _isFlatbuffersCATIOverrideSystem;
    bool  _isLegacyCATIOverrideSystem;
    NSString * _manifestPath;
    NSBundle * _modelBundle;
    float  _multiturnConfidenceThreshold;
    bool  _multiturnEnabled;
    NSArray * _multiturnEnabledExactMatchIntents;
    NSMutableArray * _multiturnGUIDs;
    struct unique_ptr<float[], std::default_delete<float[]>> { 
        struct __compressed_pair<float *, std::default_delete<float[]>> { 
            float *__value_; 
        } __ptr_; 
    }  _multiturnWeightPtr;
    bool  _multiturnWeightsEnabled;
    unsigned long long  _numModels;
    unsigned long long  _numMultiturnModels;
    NSString * _posOverridesDirectoryPath;
    NSDictionary * _positiveOverridesDictionary;
    _TtC13CDMFoundation11BloomFilter * _positiveOverridesInvocationBloomFilter;
    CATIBloomFilter * _positiveOverridesInvocationBloomFilterLegacy;
    NSArray * _positiveOverridesInvocationIndividualBloomFilters;
    NSString * _usoEdge;
    int  _usoElementId;
    NSString * _usoEntity;
    NSString * _usoVerb;
    struct unique_ptr<float[], std::default_delete<float[]>> { 
        struct __compressed_pair<float *, std::default_delete<float[]>> { 
            float *__value_; 
        } __ptr_; 
    }  _weightPtr;
    NSString * _weightsDirectoryPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buildCrisisSupportUserParse:(id)arg1 confidenceScore:(float)arg2;
- (id)buildLegacyBloomFilterAndExactMatchDictForInvocation:(id)arg1;
- (void)buildMultiturnFeatures:(id)arg1;
- (id)buildSocialConversationUserParse:(id)arg1 confidenceScore:(float)arg2;
- (id)buildUserParse:(id)arg1 confidenceScore:(float)arg2;
- (id)checkExactMatch:(id)arg1;
- (id)checkExactMatchForUtterances:(id)arg1;
- (id)checkExactMatchFromPossibleGuids:(id)arg1 forUtterance:(id)arg2 modelType:(unsigned long long)arg3;
- (bool)checkFBBloomFilter:(id)arg1 contains:(id)arg2;
- (void)constructWeightMatrixForInference:(id)arg1 numModels:(unsigned long long)arg2 guids:(id)arg3 modelType:(unsigned long long)arg4;
- (id)createUserParse:(float)arg1;
- (id)getBloomFilter;
- (bool)getBloomFilterAt:(id)arg1;
- (struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })getCATIEmbeddingTensor:(id)arg1;
- (bool)getFlatbuffersBFAt:(id)arg1;
- (id)getIntentLookup;
- (id)getInvocationInferenceResults:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg1;
- (bool)getInvocationOverridesEnabled;
- (id)getManifest;
- (id)getManifestFromPath:(id)arg1;
- (id)getMultiturnEnabledExactMatchIntents;
- (id)getMultiturnInferenceResults:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg1;
- (id)getMultiturnIntentsFromSystemGaveOptions:(id)arg1;
- (id)getMultiturnIntentsFromSystemInformed:(id)arg1;
- (id)getNewBloomFilter;
- (id)getPosOverridesDirectoryPath;
- (id)getPositiveOverrideDictionary;
- (id)getProductAreaName;
- (id)getUsoEntity;
- (id)handle:(id)arg1 assetVersion:(long long)arg2;
- (id)initWithAssetBundle:(id)arg1;
- (bool)isMultiTurnEnabled;
- (id)runCATIModelInferenceWithWeights:(id)arg1;
- (void)setConfidenceThreshold:(float)arg1;
- (void)setInvocationWeightsEnabled:(bool)arg1;
- (void)setMultiturnConfidenceThreshold:(float)arg1;
- (void)setMultiturnEnabled:(bool)arg1;
- (void)setMultiturnWeightsEnabled:(bool)arg1;
- (void)setPositiveOverridesDictionary:(id)arg1;
- (void)setUsoEdge:(id)arg1;
- (void)setUsoEntity:(id)arg1;
- (void)setUsoVerb:(id)arg1;
- (id)setup:(id)arg1 assetVersion:(long long)arg2;
- (bool)shouldSuppressCATIInvocationDueTo:(id)arg1;

@end
