
@interface _MLCCPUReduction : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 reduceType:(int)arg2 dimensions:(id)arg3 sourceShapeCount:(unsigned long long)arg4;

- (id)initWithDevice:(id)arg1 reduceType:(int)arg2 dimensions:(id)arg3;

@end
