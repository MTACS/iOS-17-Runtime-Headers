
@interface _MLCGPUArithmetic : _MLCGPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 operation:(int)arg2 activationDescriptor:(id)arg3;

- (id)initWithDevice:(id)arg1 operation:(int)arg2 activationDescriptor:(id)arg3;

@end
