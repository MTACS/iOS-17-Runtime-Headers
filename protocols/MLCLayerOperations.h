
@protocol MLCLayerOperations <NSObject>

@required

- (NSArray *)arithmeticLayerWithOperation:(int)arg1 activationDescriptor:(MLCActivationDescriptor *)arg2;
- (NSArray *)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(MLCTensor *)arg2 variance:(MLCTensor *)arg3 beta:(MLCTensor *)arg4 gamma:(MLCTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
- (NSArray *)compareLayerWithOperation:(int)arg1;
- (NSArray *)convolutionLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 weights:(MLCTensor *)arg2 biasTerms:(MLCTensor *)arg3;
- (NSArray *)convolutionTransposeLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 weights:(MLCTensor *)arg2 biasTerms:(MLCTensor *)arg3;
- (NSArray *)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2;
- (NSArray *)fullyConnectedLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 weights:(MLCTensor *)arg2 biasTerms:(MLCTensor *)arg3;
- (NSArray *)gramMatrixLayerWithScaleFactor:(float)arg1;
- (NSArray *)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(MLCTensor *)arg3 gamma:(MLCTensor *)arg4 varianceEpsilon:(float)arg5;
- (NSArray *)instanceNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(MLCTensor *)arg2 variance:(MLCTensor *)arg3 beta:(MLCTensor *)arg4 gamma:(MLCTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
- (NSArray *)layerNormalizationLayerWithNormalizedShape:(NSArray *)arg1 beta:(MLCTensor *)arg2 gamma:(MLCTensor *)arg3 varianceEpsilon:(float)arg4 isFusedWithArithmeticLayer:(bool)arg5;
- (NSArray *)lossLayerWithDescriptor:(MLCLossDescriptor *)arg1;
- (NSArray *)lossYOLOLayerWithDescriptor:(MLCYOLOLossDescriptor *)arg1;
- (NSArray *)lstmLayerWithDescriptor:(MLCLSTMDescriptor *)arg1 inputWeights:(NSArray *)arg2 hiddenWeights:(NSArray *)arg3 peepholeWeights:(NSArray *)arg4 biasTerms:(NSArray *)arg5 gateActivations:(NSArray *)arg6 outputResultActivation:(MLCActivationDescriptor *)arg7 inferenceOnly:(bool)arg8;
- (NSArray *)neuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1;
- (NSArray *)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6 dataType:(int)arg7;
- (NSArray *)poolingLayerWithDescriptor:(MLCPoolingDescriptor *)arg1 paddingSizes:(unsigned long long*)arg2;
- (NSArray *)reductionLayerWithReduceType:(int)arg1 dimensions:(NSArray *)arg2 sourceShapeCount:(unsigned long long)arg3;
- (NSArray *)reshapeLayerWithShape:(NSArray *)arg1;
- (NSArray *)softmaxLayerWithOperation:(int)arg1 dimension:(unsigned long long)arg2 sourceShapeCount:(unsigned long long)arg3;
- (NSArray *)transposeLayerWithShape:(NSArray *)arg1;
- (NSArray *)upsampleLayerWithScaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(bool)arg4;

@optional

- (void)allocateDeviceDataForGlobalNormClippingWithOptimizer:(MLCOptimizer *)arg1 updatableParameterCount:(unsigned long long)arg2;
- (void)allocateParameterGradientsForDeviceOps:(NSArray *)arg1 parameters:(NSArray *)arg2;
- (unsigned long long)allocatedDeviceDataSizeForTraining:(bool)arg1 layer:(NSArray *)arg2;
- (NSData *)betaGradients:(NSArray *)arg1;
- (NSData *)biasesGradients:(NSArray *)arg1;
- (bool)compileLayerDeviceOps:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3;
- (bool)compileLayerDeviceOps:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensors:(NSArray *)arg3;
- (bool)compileOptimizerDeviceOps:(NSArray *)arg1;
- (NSArray *)concatLayerWithConcatDimension:(unsigned long long)arg1 sourceShapeCount:(unsigned long long)arg2;
- (NSArray *)createOptimizerDeviceDataForTensor:(MLCTensor *)arg1 optimizer:(MLCOptimizer *)arg2 optimizerData:(NSArray *)arg3 isVector:(bool)arg4;
- (NSArray *)embeddingLayerWithDescriptor:(MLCEmbeddingDescriptor *)arg1 weights:(MLCTensor *)arg2 inferenceOnly:(bool)arg3;
- (NSData *)embeddingWeightsGradients:(NSArray *)arg1 embeddingCount:(unsigned long long)arg2 embeddingDimension:(unsigned long long)arg3;
- (void)fuseLayersForInferenceGraph:(NSArray *)arg1 startAtLayerIndex:(unsigned long long)arg2;
- (void)fuseLayersForTrainingGraph:(NSArray *)arg1 stopGradientTensorList:(NSArray *)arg2;
- (NSArray *)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(MLCTensor *)arg3 variance:(MLCTensor *)arg4 beta:(MLCTensor *)arg5 gamma:(MLCTensor *)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;
- (NSArray *)fusedConvolutionAndNeuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1 convolutionDescriptor:(MLCConvolutionDescriptor *)arg2 weights:(MLCTensor *)arg3 biasTerms:(MLCTensor *)arg4;
- (NSArray *)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 mean:(MLCTensor *)arg2 variance:(MLCTensor *)arg3 beta:(MLCTensor *)arg4 gamma:(MLCTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(MLCActivationDescriptor *)arg8 weights:(MLCTensor *)arg9 biasTerms:(MLCTensor *)arg10;
- (NSArray *)fusedConvolutionGroupNormalizationAndNeuronLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 beta:(MLCTensor *)arg2 gamma:(MLCTensor *)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 groupCount:(unsigned long long)arg6 neuronDescriptor:(MLCActivationDescriptor *)arg7 weights:(MLCTensor *)arg8 biasTerms:(MLCTensor *)arg9;
- (NSArray *)fusedConvolutionInstanceNormalizationAndNeuronLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 beta:(MLCTensor *)arg2 gamma:(MLCTensor *)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 neuronDescriptor:(MLCActivationDescriptor *)arg6 weights:(MLCTensor *)arg7 biasTerms:(MLCTensor *)arg8;
- (NSArray *)fusedFullyConnectedAndNeuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1 convolutionDescriptor:(MLCConvolutionDescriptor *)arg2 weights:(MLCTensor *)arg3 biasTerms:(MLCTensor *)arg4;
- (NSArray *)fusedFullyConnectedAndSoftmaxLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 weights:(MLCTensor *)arg2 biasTerms:(MLCTensor *)arg3 softmaxOp:(int)arg4;
- (NSArray *)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 mean:(MLCTensor *)arg2 variance:(MLCTensor *)arg3 beta:(MLCTensor *)arg4 gamma:(MLCTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(MLCActivationDescriptor *)arg8 weights:(MLCTensor *)arg9 biasTerms:(MLCTensor *)arg10;
- (NSArray *)fusedFullyConnectedGroupNormalizationAndNeuronLayerWithDescriptor:(MLCConvolutionDescriptor *)arg1 mean:(MLCTensor *)arg2 variance:(MLCTensor *)arg3 beta:(MLCTensor *)arg4 gamma:(MLCTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 groupCount:(unsigned long long)arg8 neuronDescriptor:(MLCActivationDescriptor *)arg9 weights:(MLCTensor *)arg10 biasTerms:(MLCTensor *)arg11;
- (NSArray *)fusedGroupNormalizationAndNeuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1 featureChannelCount:(unsigned long long)arg2 groupCount:(unsigned long long)arg3 beta:(MLCTensor *)arg4 gamma:(MLCTensor *)arg5 varianceEpsilon:(float)arg6;
- (NSArray *)fusedInstanceNormalizationAndNeuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(MLCTensor *)arg3 variance:(MLCTensor *)arg4 beta:(MLCTensor *)arg5 gamma:(MLCTensor *)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;
- (NSArray *)fusedLayerNormalizationAndNeuronLayerWithDescriptor:(MLCActivationDescriptor *)arg1 normalizedShape:(NSArray *)arg2 beta:(MLCTensor *)arg3 gamma:(MLCTensor *)arg4 varianceEpsilon:(float)arg5;
- (NSData *)gammaGradients:(NSArray *)arg1;
- (NSArray *)gatherLayerWithDimension:(unsigned long long)arg1;
- (NSData *)lstmBiasGradient:(NSArray *)arg1 mlcBiasIndex:(unsigned long long)arg2;
- (NSData *)lstmHiddenWeightGradient:(NSArray *)arg1 mlcWeightIndex:(unsigned long long)arg2;
- (NSData *)lstmInputWeightGradient:(NSArray *)arg1 mlcWeightIndex:(unsigned long long)arg2;
- (NSArray *)matMulLayerWithDescriptor:(MLCMatMulDescriptor *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3 inferenceOnly:(bool)arg4;
- (NSData *)mhaAttnBiasGradient:(NSArray *)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (NSData *)mhaBiasGradient:(NSArray *)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (NSData *)mhaWeightGradient:(NSArray *)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (NSArray *)multiheadAttentionLayerWithDescriptor:(MLCMultiheadAttentionDescriptor *)arg1 weights:(NSArray *)arg2 bias:(NSArray *)arg3 attnBias:(NSArray *)arg4 inferenceOnly:(bool)arg5;
- (NSArray *)optimizerAdamWithDescriptor:(MLCOptimizerDescriptor *)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 amsgrad:(bool)arg5 timeStep:(unsigned long long)arg6 isAdamW:(bool)arg7;
- (NSArray *)optimizerRMSPropWithDescriptor:(MLCOptimizerDescriptor *)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(bool)arg5;
- (NSArray *)optimizerSGDWithDescriptor:(MLCOptimizerDescriptor *)arg1 momentunScale:(float)arg2 useNesterovMomentum:(bool)arg3;
- (NSArray *)scatterLayerWithDimension:(unsigned long long)arg1 reduceType:(int)arg2;
- (NSArray *)selectLayer;
- (void)setConvolutionGradientComputeWeightsAndBiasOnly:(NSArray *)arg1;
- (bool)setConvolutionLayerOptimizerDataForDeviceOps:(NSArray *)arg1 weights:(MLCTensor *)arg2 bias:(MLCTensor *)arg3;
- (void)setFullyConnectedGradientComputeWeightsAndBiasOnly:(NSArray *)arg1;
- (bool)setLSTMLayerOptimizerDataForDeviceOps:(NSArray *)arg1 inputWeights:(NSArray *)arg2 hiddenWeights:(NSArray *)arg3 biasTerms:(NSArray *)arg4;
- (bool)setMHALayerOptimizerDataForDeviceOps:(NSArray *)arg1 optimizerDataForWeights:(NSArray *)arg2 optimizerDataForBias:(NSArray *)arg3;
- (bool)setNormalizationLayerOptimizerDataForDeviceOps:(NSArray *)arg1 beta:(MLCTensor *)arg2 gamma:(MLCTensor *)arg3;
- (NSArray *)sliceLayerWithbegin:(NSArray *)arg1 end:(NSArray *)arg2 stride:(NSArray *)arg3 inferenceOnly:(bool)arg4;
- (NSArray *)splitLayerWithDimension:(unsigned long long)arg1;
- (NSData *)weightsGradients:(NSArray *)arg1;

@end
