
@interface MLCPatternMatcher : NSObject

+ (bool)canTransformToGELUFromLayer:(id)arg1 stopGradientTensorList:(id)arg2 fusedLayers:(id)arg3 inputTensor:(id*)arg4;
+ (bool)canTransformToGELUType1FromLayer:(id)arg1 fusedLayers:(id)arg2 inputTensor:(id)arg3 withAccuracy:(float)arg4;
+ (bool)canTransformToGELUType2FromLayer:(id)arg1 fusedLayers:(id)arg2 inputTensor:(id)arg3 withAccuracy:(float)arg4;
+ (bool)canTransformToHardSwishFromLayer:(id)arg1 stopGradientTensorList:(id)arg2 fusedLayers:(id)arg3 inputTensor:(id*)arg4;
+ (bool)canTransformToReLUNFromLayer:(id)arg1 stopGradientTensorList:(id)arg2 fusedLayers:(id)arg3 alpha:(float*)arg4 beta:(float*)arg5;
+ (bool)checkIntermediateTensorsOfFusedLayers:(id)arg1 stopGradientTensorList:(id)arg2 forPattern:(id)arg3;
+ (float)getAccuracyForLayer:(id)arg1;
+ (bool)isActivationLayer:(id)arg1 withActivationType:(int)arg2;
+ (bool)isArithmeticLayer:(id)arg1 withOperation:(int)arg2;
+ (bool)isConstTensor:(id)arg1 withValue:(float)arg2 withAccuracy:(float)arg3;

@end
