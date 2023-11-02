
@protocol MLComputeEngineOptimizerUpdate <NSObject>

@required

- (void)accumulateParams:(void**)arg1 gradients:(void**)arg2 accumulators:(void**)arg3 numOfParameters:(unsigned long long)arg4 inArrayOfParams:(NSArray *)arg5;
- (void)convertUpdatesToTensorDataForLayer:(MLCLayer *)arg1;
- (void)convertUpdatesToTensorDataForTensorParameters:(MLCTensor *)arg1;
- (void)reloadParameterDataFromHostToDeviceMemoryForTensor:(MLCTensor *)arg1;
- (void)restoreRNNParamsWithDeviceOps:(NSArray *)arg1 optimizer:(NSArray *)arg2 inputWeightsParameter:(NSArray *)arg3 hiddenWeightsParameter:(NSArray *)arg4 biasesParameter:(NSArray *)arg5 arrayOfParams:(NSMutableArray *)arg6;
- (void)setOptimizerLearningRate:(NSArray *)arg1 learningRate:(float)arg2;
- (void)setOptimizerTimeStep:(NSArray *)arg1 timeStep:(unsigned long long)arg2;
- (void)sumSharedGradientsForConvolutionLayerTensorParameter:(MLCTensor *)arg1 layerIndexForSummedGradients:(unsigned long long)arg2;
- (void)sumSharedGradientsForNormalizationLayerTensorParameter:(MLCTensor *)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(bool)arg3;
- (void)synchronizeOptimizerUpdatesForTensor:(MLCTensor *)arg1;
- (void)synchronizeUpdatesForLayer:(MLCLayer *)arg1;
- (void)updateAllParametersWithOptimizer:(NSArray *)arg1 arrayOfParameters:(NSMutableArray *)arg2;
- (void)updateBatchNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4 meanTensor:(MLCTensor *)arg5 varianceTensor:(MLCTensor *)arg6 arrayOfParams:(NSMutableArray *)arg7;
- (void)updateConvolutionLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 weightsParameter:(MLCTensorParameter *)arg3 biasesParameter:(MLCTensorParameter *)arg4 arrayOfParams:(NSMutableArray *)arg5;
- (void)updateEmbeddingLayer:(NSArray *)arg1 weightsParameter:(MLCTensorParameter *)arg2 optimizer:(NSArray *)arg3 arrayOfParams:(NSMutableArray *)arg4;
- (void)updateFullyConnectedLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 weightsParameter:(MLCTensorParameter *)arg3 biasesParameter:(MLCTensorParameter *)arg4 arrayOfParams:(NSMutableArray *)arg5;
- (void)updateGroupNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4 arrayOfParams:(NSMutableArray *)arg5;
- (void)updateInstanceNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4 arrayOfParams:(NSMutableArray *)arg5;
- (void)updateLayerNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4 arrayOfParams:(NSMutableArray *)arg5;
- (void)updateMultiheadAttentionLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 weightsParameter:(NSArray *)arg3 biasesParameter:(NSArray *)arg4 arrayOfParams:(NSMutableArray *)arg5;
- (void)updateRNNLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 inputWeightsParameter:(NSArray *)arg3 hiddenWeightsParameter:(NSArray *)arg4 biasesParameter:(NSArray *)arg5 arrayOfParams:(NSMutableArray *)arg6;
- (void)updateTensorParameter:(MLCTensorParameter *)arg1 optimizer:(NSArray *)arg2 gradient:(MLCTensor *)arg3 arrayOfParams:(NSMutableArray *)arg4;

@optional

- (void)restoreConvolutionParamsWithDeviceOps:(NSArray *)arg1;

@end
