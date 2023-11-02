
@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler>

+ (void)collectEspressoModelDetails:(void*)arg1 modelPath:(const void*)arg2;
+ (bool)collectNNModelDetailsFromArchive:(void*)arg1 spec:(void*)arg2 error:(id*)arg3;
+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;

@end
