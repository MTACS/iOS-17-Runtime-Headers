
@interface APOdmlEspressoFacade : NSObject {
    APOdmlEspressoIOBufferController * _bufferController;
    struct { void *x1; int x2; } * _espressoNet;
    void * _espressoPlan;
    unsigned long long  _finalBatchSize;
    APOdmlRecipe * _recipe;
    NSArray * _requiredFeatures;
}

@property (nonatomic, retain) APOdmlEspressoIOBufferController *bufferController;
@property (nonatomic, readonly) struct { void *x1; int x2; }*espressoNet;
@property (nonatomic, readonly) void*espressoPlan;
@property (nonatomic) unsigned long long finalBatchSize;
@property (nonatomic, retain) APOdmlRecipe *recipe;
@property (nonatomic, readonly) NSArray *requiredFeatures;

- (void).cxx_destruct;
- (void)_checkModelOutput:(id)arg1;
- (int)_executeEspressoPlan;
- (id)_extractRequiredFeatures;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })_getEspressoBlobShape:(id)arg1;
- (bool)_loadEspressoNet:(const char *)arg1 recipe:(id)arg2 error:(id*)arg3;
- (void)_preTrainingSetup;
- (bool)_prepareForTraining:(id*)arg1;
- (float)_retrieveLossValue;
- (bool)_setErrorPtr:(id*)arg1 toError:(id)arg2;
- (float)accuracyInBatchWithError:(id*)arg1;
- (id)bufferController;
- (bool)changeEspressoBatchSize:(unsigned long long)arg1 error:(id*)arg2;
- (id)computeAccuracyAndLoss:(id)arg1 error:(id*)arg2;
- (id)computeClientPttr:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (struct { void *x1; int x2; }*)espressoNet;
- (void*)espressoPlan;
- (unsigned long long)finalBatchSize;
- (bool)finalizeEspressoPipeline:(id*)arg1;
- (id)initWithEspressoNetURL:(id)arg1 recipe:(id)arg2 error:(id*)arg3;
- (unsigned long long)numWeightsInBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1;
- (id)recipe;
- (id)requiredFeatures;
- (id)retrieveWeights2D:(id*)arg1;
- (id)retrieveWeights:(id*)arg1;
- (void)setBufferController:(id)arg1;
- (bool)setError:(id*)arg1 errorCode:(long long)arg2;
- (id)setEspressoNetworkFunction;
- (void)setFinalBatchSize:(unsigned long long)arg1;
- (void)setRecipe:(id)arg1;
- (bool)trainWithTrainingSet:(id)arg1 error:(id*)arg2;

@end
