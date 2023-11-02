
@interface _MLCCPUMHAttention : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 descriptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(bool)arg6;
+ (bool)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4;

- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(bool)arg6;

@end
