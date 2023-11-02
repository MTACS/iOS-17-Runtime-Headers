
@interface MLNeuralNetworkV1Container : MLNeuralNetworkContainer

+ (id)containerFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)readerFromArchive:(void*)arg1 error:(id*)arg2;

@end
