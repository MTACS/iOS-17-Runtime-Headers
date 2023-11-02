
@protocol TCMPSConvolutionWeightsOptimizing <NSObject>

@required

- (void)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 batchNormalizationState:(MPSCNNBatchNormalizationState *)arg2 batchNormData:(TCMPSBatchNormWeights *)arg3;
- (void)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 convolutionGradientState:(MPSCNNConvolutionGradientState *)arg2 convolutionWeights:(TCMPSConvolutionWeights *)arg3;
- (void)setLearningRate:(float)arg1;

@end
