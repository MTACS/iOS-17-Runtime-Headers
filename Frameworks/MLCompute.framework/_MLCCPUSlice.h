
@interface _MLCCPUSlice : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 begin:(id)arg2 end:(id)arg3 stride:(id)arg4;

- (id)initWithDevice:(id)arg1 begin:(id)arg2 end:(id)arg3 stride:(id)arg4;

@end
