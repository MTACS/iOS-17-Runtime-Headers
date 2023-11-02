
@interface MLDelegateUpdatableModel : MLDelegateModel <MLUpdatable>

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;
@property (nonatomic, readonly) <MLUpdatable> *updatableEngine;

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (void)cancelUpdate;
- (id)initWithEngine:(id)arg1 error:(id*)arg2;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (id)updatableEngine;
- (void)updateModelWithData:(id)arg1;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
