
@interface MLE5StaticShapeExecutionStreamOperationPool : NSObject <MLE5ExecutionStreamOperationPool> {
    NSString * _functionName;
    MLModelConfiguration * _modelConfiguration;
    MLModelDescription * _modelDescription;
    unsigned long long  _modelSignpostId;
    long long  _numberOfOperationsInUse;
    MLPixelBufferPool * _pixelBufferPool;
    NSMutableSet * _pool;
    MLE5ProgramLibrary * _programLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelConfiguration *modelConfiguration;
@property (readonly) MLModelDescription *modelDescription;
@property (readonly) unsigned long long modelSignpostId;
@property long long numberOfOperationsInUse;
@property (nonatomic, readonly) MLPixelBufferPool *pixelBufferPool;
@property (readonly) NSMutableSet *pool;
@property (readonly) MLE5ProgramLibrary *programLibrary;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_putBack:(id)arg1;
- (id)_takeOut;
- (id)functionName;
- (id)initWithProgramLibrary:(id)arg1 functionName:(id)arg2 modelDescription:(id)arg3 configuration:(id)arg4 modelSignpostId:(unsigned long long)arg5 compilerVersionInfo:(id)arg6;
- (id)modelConfiguration;
- (id)modelDescription;
- (unsigned long long)modelSignpostId;
- (long long)numberOfOperationsInUse;
- (id)pixelBufferPool;
- (id)pool;
- (bool)prepareWithInitialPoolSize:(long long)arg1 error:(id*)arg2;
- (id)programLibrary;
- (void)putBack:(id)arg1;
- (id)serialQueue;
- (void)setNumberOfOperationsInUse:(long long)arg1;
- (id)takeOutOperationForFeatures:(id)arg1 error:(id*)arg2;

@end
