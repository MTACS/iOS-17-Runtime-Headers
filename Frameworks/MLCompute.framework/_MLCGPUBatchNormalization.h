
@interface _MLCGPUBatchNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)arg1 fusedWithNeuronDescriptor:(id)arg2 numOfFeatureChannels:(unsigned long long)arg3 mean:(id)arg4 variance:(id)arg5 beta:(id)arg6 gamma:(id)arg7 varianceEpsilon:(float)arg8 momentum:(float)arg9;
+ (id)layerWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;
+ (bool)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 beta:(id)arg3 gamma:(id)arg4;

- (id)initWithDevice:(id)arg1 fusedWithNeuronDescriptor:(id)arg2 numOfFeatureChannels:(unsigned long long)arg3 mean:(id)arg4 variance:(id)arg5 beta:(id)arg6 gamma:(id)arg7 varianceEpsilon:(float)arg8 momentum:(float)arg9;
- (id)initWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;

@end
