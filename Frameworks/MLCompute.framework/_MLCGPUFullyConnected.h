
@interface _MLCGPUFullyConnected : _MLCGPULayer

+ (id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5;
+ (void)setGradientComputeWeightsAndBiasOnly:(id)arg1 deviceOps:(id)arg2;

- (id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5;

@end
