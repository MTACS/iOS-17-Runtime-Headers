
@interface MLE5EnumeratedShapeExecutionStreamOperationPool : NSObject <MLE5ExecutionStreamOperationPool> {
    MLVersionInfo * _compilerVersionInfo;
    MLModelConfiguration * _configuration;
    NSMutableDictionary * _functionNameToPoolMap;
    NSString * _milFunctionName;
    MLModelDescription * _modelDescription;
    unsigned long long  _modelSignpostId;
    MLE5ProgramLibrary * _programLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) MLVersionInfo *compilerVersionInfo;
@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *functionNameToPoolMap;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *milFunctionName;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long modelSignpostId;
@property (nonatomic, readonly) MLE5ProgramLibrary *programLibrary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_putBack:(id)arg1;
- (id)_takeOutOperationForFunctionName:(id)arg1 error:(id*)arg2;
- (id)_takeOutOperationFromAnyProgramFunction;
- (id)compilerVersionInfo;
- (id)configuration;
- (id)functionNameToPoolMap;
- (id)initWithProgramLibrary:(id)arg1 functionName:(id)arg2 modelDescription:(id)arg3 configuration:(id)arg4 modelSignpostId:(unsigned long long)arg5 compilerVersionInfo:(id)arg6;
- (id)milFunctionName;
- (id)modelDescription;
- (unsigned long long)modelSignpostId;
- (bool)prepareWithInitialPoolSize:(long long)arg1 error:(id*)arg2;
- (id)programLibrary;
- (void)putBack:(id)arg1;
- (id)serialQueue;
- (id)takeOutOperationForFeatures:(id)arg1 error:(id*)arg2;

@end
