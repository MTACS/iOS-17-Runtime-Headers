
@interface MLNeuralNetworkMLComputeLayer : NSObject

+ (id)adamOptimizerWithLearningRate:(double)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(double)arg4 timeStep:(unsigned long long)arg5;
+ (id)batchNormLayerWithFeatureChannels:(unsigned long long)arg1 varianceEpsilon:(float)arg2 gamma:(id)arg3 beta:(id)arg4 mean:(id)arg5 variance:(id)arg6;
+ (id)categoricalCrossEntropyLossWithNumberOfClasses:(unsigned long long)arg1;
+ (id)concatNDLayerWithAxis:(unsigned long long)arg1;
+ (id)convolutionalLayerWithKernelHeight:(unsigned long long)arg1 kernelWidth:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 outputChannels:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 dilationRateInX:(unsigned long long)arg7 dilationRateInY:(unsigned long long)arg8 nGroups:(unsigned long long)arg9 weight:(id)arg10 bias:(id)arg11 paddingPolicy:(int)arg12;
+ (id)fullyConnectedLayerWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 outputChannels:(unsigned long long)arg4 weight:(id)arg5 bias:(id)arg6;
+ (id)leakyRelu;
+ (id)matMulLayerWithTransposesX:(bool)arg1 transposesY:(bool)arg2;
+ (id)meanSquaredErrorLoss;
+ (id)poolingLayerWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 paddingPolicy:(int)arg5 poolingType:(int)arg6;
+ (id)relu;
+ (id)reluNLayerWithAlpha:(float)arg1 beta:(float)arg2;
+ (id)reshapeLayerWithChannelFirstOrderingAndTargetShape:(id)arg1;
+ (id)sgdOptimizerWithLearningRate:(double)arg1 momentum:(double)arg2;
+ (id)sigmoid;
+ (id)softmax;
+ (id)transposeLayerWithAxes:(id)arg1;
+ (id)uniDirectionalLSTMLayerWithInputSize:(unsigned long long)arg1 outputSize:(unsigned long long)arg2 inputWeightsData:(id)arg3 recursionWeightsData:(id)arg4 hasBias:(bool)arg5 biasTermsData:(id)arg6 sequenceOutput:(bool)arg7 inputGateActivation:(id)arg8 cellGateActivation:(id)arg9 hiddenOutputActivation:(id)arg10;

@end
