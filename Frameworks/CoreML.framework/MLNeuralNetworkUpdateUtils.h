
@interface MLNeuralNetworkUpdateUtils : NSObject

+ (id)createClassLabelToIndexMapWith:(id)arg1;
+ (id)loadParameterDescriptionsAndContainerFromUpdateParameters:(const void*)arg1 modelDescription:(id)arg2;
+ (bool)loadUpdateParameters:(void*)arg1 fromCompiledArchive:(void*)arg2 error:(id*)arg3;

@end
