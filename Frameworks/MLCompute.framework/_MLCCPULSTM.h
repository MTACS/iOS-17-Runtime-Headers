
@interface _MLCCPULSTM : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 lstmDescriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 ouputResultActivation:(id)arg8 inferenceOnly:(bool)arg9;
+ (bool)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForInputWeights:(id)arg3 dataForHiddenWeights:(id)arg4 dataForPeepholeWeights:(id)arg5 dataForBias:(id)arg6;

- (id)initWithDevice:(id)arg1 lstmDescriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 inferenceOnly:(bool)arg9;

@end
