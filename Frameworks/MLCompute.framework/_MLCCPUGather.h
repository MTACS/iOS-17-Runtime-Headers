
@interface _MLCCPUGather : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 dimension:(unsigned long long)arg2;

- (id)initWithDevice:(id)arg1 dimension:(unsigned long long)arg2;

@end
