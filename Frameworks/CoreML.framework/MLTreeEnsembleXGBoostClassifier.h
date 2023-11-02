
@interface MLTreeEnsembleXGBoostClassifier : MLClassifier {
    void * _booster;
    NSArray * _labelsForDataPoints;
    NSURL * _modelURL;
    unsigned long long  _numClasses;
    NSString * _objective;
}

@property (nonatomic) void*booster;
@property (nonatomic, retain) NSArray *labelsForDataPoints;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic) unsigned long long numClasses;
@property (nonatomic, retain) NSString *objective;

- (void).cxx_destruct;
- (id)batchProviderFromXGboostResults:(const float*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (void*)booster;
- (void)dealloc;
- (id)featureProviderArrayFromXGBoostResult:(const float*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)featureProviderFromXGboostResults:(const float*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 indexToStringLabelArray:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg3 indexToIntLabelArray:(struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })arg4 modelURL:(id)arg5 error:(id*)arg6;
- (bool)initializeAndvalidateObjectiveAndNumClassesWithConfiguration:(id)arg1 error:(id*)arg2;
- (bool)initializeBoosterIfOneExists;
- (id)labelsForDataPoints;
- (id)loadLabelsWithStringLabels:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg1 intLabels:(struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })arg2;
- (id)modelURL;
- (unsigned long long)numClasses;
- (id)objective;
- (id)packageOutputWithPredictedLabel:(id)arg1 classProbabilities:(id)arg2;
- (void)populateXGBoostDataFormat:(void*)arg1 trainingData:(id)arg2 dataIndex:(long long)arg3 inputName:(id)arg4 needLabels:(bool)arg5 error:(id*)arg6;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setBooster:(void*)arg1;
- (void)setLabelsForDataPoints:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setNumClasses:(unsigned long long)arg1;
- (void)setObjective:(id)arg1;
- (struct { struct vector<float, std::allocator<float>> { float *x_1_1_1; float *x_1_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; unsigned long long x3; unsigned long long x4; })xgBoostDataFormatFromBatchProvider:(id)arg1 needLabels:(bool)arg2 error:(id*)arg3;
- (struct { struct vector<float, std::allocator<float>> { float *x_1_1_1; float *x_1_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; unsigned long long x3; unsigned long long x4; })xgBoostDataFormatFromFeatureProvider:(id)arg1 error:(id*)arg2;

@end
