
@interface ETTask : NSObject {
    bool  _dumpData;
    ETImageDescriptorExtractor * _extractor;
    ETModelDef * _model;
    ETOptimizerDef * _optimizer;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  network;
}

@property (nonatomic) bool dumpData;
@property (nonatomic, retain) ETImageDescriptorExtractor *extractor;
@property (nonatomic, retain) ETModelDef *model;
@property (nonatomic, retain) ETOptimizerDef *optimizer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)dumpData;
- (id)evaluate:(id)arg1;
- (id)extractor;
- (bool)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 outputNames:(id)arg3 batchCallback:(id /* block */)arg4;
- (float)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 withProgress:(id /* block */)arg3;
- (bool)fit:(id)arg1 numberOfEpochs:(int)arg2 outputNames:(id)arg3 batchCallback:(id /* block */)arg4;
- (float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(id /* block */)arg3;
- (id)init;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(bool)arg4;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 extractor:(id)arg4;
- (id)model;
- (bool)moveToGPU:(int)arg1 error:(id*)arg2;
- (id)optimizer;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })reinitializeVariables;
- (bool)runBatches:(id)arg1 numberOfBatches:(unsigned int)arg2 outputNames:(id)arg3 batchCallback:(id /* block */)arg4;
- (bool)runInference:(id)arg1 outputNames:(id)arg2 batchCallback:(id /* block */)arg3;
- (void)saveNetwork:(id)arg1;
- (void)saveNetwork:(id)arg1 revertToInferenceMode:(bool)arg2;
- (void)setDumpData:(bool)arg1;
- (void)setExtractor:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setOptimizer:(id)arg1;

@end
