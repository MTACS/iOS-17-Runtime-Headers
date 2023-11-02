
@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    MLUpdateProgressHandlers * _progressHandlers;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _updatableModelIndicies;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (retain) MLUpdateProgressHandlers *progressHandlers;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long long' */ struct  updatableModelIndicies; /* unknown property attribute:  std::allocator<unsigned long long>>=^Q}} */

+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelUpdate;
- (id)dispatchQueue;
- (id)initFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)progressHandlers;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandlers:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })updatableModelIndicies;
- (void)updateModelWithData:(id)arg1;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
