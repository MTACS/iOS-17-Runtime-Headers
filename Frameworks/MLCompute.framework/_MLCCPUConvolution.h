
@interface _MLCCPUConvolution : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 convolutionTranspose:(bool)arg5;
+ (id)createBNNSNDArrayDescriptorForDescriptor:(id)arg1 biasDelta:(id)arg2 dataType:(int)arg3;
+ (id)createBNNSNDArrayDescriptorForDescriptor:(id)arg1 weightsDelta:(id)arg2 fullyConnected:(bool)arg3 dataType:(int)arg4;
+ (id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5;

- (id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5;

@end
