
@interface _MLCGPUGroupNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 groupCount:(unsigned long long)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6;

- (id)initWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 groupCount:(unsigned long long)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6;

@end
