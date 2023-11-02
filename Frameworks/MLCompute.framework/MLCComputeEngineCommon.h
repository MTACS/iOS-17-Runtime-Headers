
@interface MLCComputeEngineCommon : NSObject

+ (void)applyPatternMatcherForGraph:(id)arg1 stopGradientTensorList:(id)arg2 startAtLayerIndex:(unsigned long long)arg3 forInference:(bool)arg4;
+ (bool)doesActivationRequireInput:(id)arg1 forInference:(bool)arg2;
+ (bool)forwardSourceTensorToChildLayersFrom:(id)arg1 stopGradientTensorList:(id)arg2;
+ (bool)isResultTensorInStopGradientTensorList:(id)arg1 resultTensor:(id)arg2 forInference:(bool)arg3;
+ (void)updateLayersAndTensorsForComplexActivationFunction:(id)arg1 inputTensor:(id)arg2;
+ (void)updateTensorsForFusedPaddingAndConvolutionLayer:(id)arg1 layerNext:(id)arg2;
+ (void)updateTensorsForThreeFusedLayers:(id)arg1 layerNext:(id)arg2 layerNext2:(id)arg3;
+ (void)updateTensorsForTwoFusedLayers:(id)arg1 layerNext:(id)arg2;

@end
