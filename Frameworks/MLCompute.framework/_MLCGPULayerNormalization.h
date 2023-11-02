
@interface _MLCGPULayerNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)arg1 normalizedShape:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 isFusedWithArithmeticLayer:(bool)arg6;

- (id)initWithDevice:(id)arg1 normalizedShape:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 isFusedWithArithmeticLayer:(bool)arg6;

@end
