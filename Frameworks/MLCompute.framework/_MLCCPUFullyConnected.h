
@interface _MLCCPUFullyConnected : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 fusedBatchNormAndNeuron:(bool)arg5;
+ (id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 fusedBatchNormAndNeuronLayers:(bool)arg6 mean:(id)arg7 variance:(id)arg8 beta:(id)arg9 gamma:(id)arg10 varianceEpsilon:(float)arg11 momentum:(float)arg12 opType:(int)arg13;
+ (id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 opType:(int)arg6;

- (id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 fusedBatchNormAndNeuronLayers:(bool)arg6 mean:(id)arg7 variance:(id)arg8 beta:(id)arg9 gamma:(id)arg10 varianceEpsilon:(float)arg11 momentum:(float)arg12 opType:(int)arg13;

@end
