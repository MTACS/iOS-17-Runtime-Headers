
@interface _MLCGPUSoftmax : _MLCGPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 operation:(int)arg2 dimension:(unsigned long long)arg3;

- (id)initWithDevice:(id)arg1 operation:(int)arg2 dimension:(unsigned long long)arg3;

@end
