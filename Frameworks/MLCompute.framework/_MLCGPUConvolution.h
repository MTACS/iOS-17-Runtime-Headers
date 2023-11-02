
@interface _MLCGPUConvolution : _MLCGPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5;
+ (void)setGradientComputeWeightsAndBiasOnly:(id)arg1 deviceOps:(id)arg2;
+ (bool)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 weights:(id)arg3 bias:(id)arg4;

- (id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5;

@end
