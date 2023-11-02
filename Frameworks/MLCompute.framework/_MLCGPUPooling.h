
@interface _MLCGPUPooling : _MLCGPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 descriptor:(id)arg2 paddingSizes:(unsigned long long)arg3;

- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 paddingSizes:(unsigned long long)arg3;

@end
