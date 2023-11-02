
@protocol MLE5ExecutionStreamOperationPool <NSObject>

@required

- (id)initWithProgramLibrary:(MLE5ProgramLibrary *)arg1 functionName:(NSString *)arg2 modelDescription:(MLModelDescription *)arg3 configuration:(MLModelConfiguration *)arg4 modelSignpostId:(unsigned long long)arg5 compilerVersionInfo:(MLVersionInfo *)arg6;
- (bool)prepareWithInitialPoolSize:(long long)arg1 error:(id*)arg2;
- (void)putBack:(MLE5ExecutionStreamOperation *)arg1;
- (MLE5ExecutionStreamOperation *)takeOutOperationForFeatures:(id <MLFeatureProvider>)arg1 error:(id*)arg2;

@end
