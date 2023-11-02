
@interface CRTextSequenceRecognizerModelEspresso : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration * _configuration;
    void * _context;
    NSString * _currentConfigurationHash;
    int  _engine;
    struct vector<const char *, std::allocator<const char *>> { 
        char **__begin_; 
        char **__end_; 
        struct __compressed_pair<const char **, std::allocator<const char *>> { 
            char **__value_; 
        } __end_cap_; 
    }  _names;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    void * _plan;
    int  _precision;
    NSObject<OS_dispatch_queue> * _predictionQueue;
    CRNeuralRecognizerConfiguration * _recognizerConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _submissionLock;
}

@property void*context;
@property (retain) NSString *currentConfigurationHash;
@property int engine;
@property /* Warning: unhandled struct encoding: '{vector<const char *' */ struct  names; /* unknown property attribute:  std::allocator<const char *>>=^*}} */
@property struct { void *x1; int x2; } network;
@property (readonly) NSArray *outputNames;
@property void*plan;
@property int precision;
@property (retain) NSObject<OS_dispatch_queue> *predictionQueue;
@property (retain) CRNeuralRecognizerConfiguration *recognizerConfiguration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_configurationHashForInput:(id)arg1;
- (id)_configurationHashForInput:(id)arg1 batchSize:(unsigned long long)arg2;
- (bool)_configurePlanForInput:(id)arg1 error:(id*)arg2;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })_createBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 channels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 sequenceLength:(unsigned long long)arg5;
- (void*)_createContextForEngine:(int)arg1 configuration:(id)arg2;
- (id)_modelConfigurationNameForInput:(id)arg1;
- (void)_resetEspressoState;
- (bool)_setupContextAndPlanForConfiguration:(id)arg1 error:(id*)arg2;
- (bool)_shouldReconfigurePlanForInput:(id)arg1;
- (id)configuration;
- (void*)context;
- (id)currentConfigurationHash;
- (void)dealloc;
- (int)engine;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)inputBatchFromLineRegions:(id)arg1 image:(id)arg2 regionWidth:(double)arg3 configuration:(id)arg4 rectifier:(id)arg5;
- (id)modelFilePath;
- (struct vector<const char *, std::allocator<const char *>> { char **x1; char **x2; struct __compressed_pair<const char **, std::allocator<const char *>> { char **x_3_1_1; } x3; })names;
- (struct { void *x1; int x2; })network;
- (id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x_3_1_1; } x3; })arg1 featureInfo:(id)arg2;
- (id)outputNames;
- (void*)plan;
- (int)precision;
- (id)predictFromInputs:(id)arg1 error:(id*)arg2;
- (id)predictionQueue;
- (bool)preheatWithError:(id*)arg1;
- (id)recognizerConfiguration;
- (void)releaseIntermediateBuffers;
- (void)setContext:(void*)arg1;
- (void)setCurrentConfigurationHash:(id)arg1;
- (void)setEngine:(int)arg1;
- (void)setNames:(struct vector<const char *, std::allocator<const char *>> { char **x1; char **x2; struct __compressed_pair<const char **, std::allocator<const char *>> { char **x_3_1_1; } x3; })arg1;
- (void)setNetwork:(struct { void *x1; int x2; })arg1;
- (void)setPlan:(void*)arg1;
- (void)setPrecision:(int)arg1;
- (void)setPredictionQueue:(id)arg1;
- (void)setRecognizerConfiguration:(id)arg1;
- (bool)shouldSaturateInputBatches;

@end
