
@interface _MLCGPULSTM : _MLCGPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 descriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 inferenceOnly:(bool)arg9;
+ (void)setBiasOptimizerDataForMomentumMatrices:(id)arg1 velocityMatrices:(id)arg2 centerWeightMatrices:(id)arg3 momentumArray:(id)arg4 velocityArray:(id)arg5 centerWeightArray:(id)arg6 accumulatorIndex:(unsigned long long)arg7 matrixId:(unsigned long long)arg8 bias:(id)arg9 device:(id)arg10 deviceOps:(id)arg11 deviceNumber:(unsigned long long)arg12 lstmNumber:(unsigned long long)arg13;
+ (bool)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 biasTerms:(id)arg5;
+ (void)setOptimizerDataForMomentumMatrices:(id)arg1 velocityMatrices:(id)arg2 centerWeightMatrices:(id)arg3 momentumArray:(id)arg4 velocityArray:(id)arg5 centerWeightArray:(id)arg6 accumulatorIndex:(unsigned long long)arg7 matrixId:(unsigned long long)arg8 weight:(id)arg9 device:(id)arg10 deviceOps:(id)arg11 deviceNumber:(unsigned long long)arg12 lstmNumber:(unsigned long long)arg13 isRecurrent:(bool)arg14;

- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 inferenceOnly:(bool)arg9;

@end
