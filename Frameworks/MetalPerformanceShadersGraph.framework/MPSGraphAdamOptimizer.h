
@interface MPSGraphAdamOptimizer : MPSGraphOptimizer {
    MPSGraphTensor * _beta1Tensor;
    MPSGraphTensor * _beta2Tensor;
    MPSGraphTensor * _epsilonTensor;
    MPSGraphVariableOp * _iterationsVariable;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 momentumTensors:(id)arg3 velocityTensors:(id)arg4 maximumVelocityTensors:(id)arg5 beta1:(float)arg6 beta2:(float)arg7 epsilon:(float)arg8 iterations:(unsigned long long)arg9 trainableVariables:(id)arg10 variablesToGradientTensorMap:(id)arg11 name:(id)arg12;
- (id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 variablesToGradientTensorMap:(id)arg4 name:(id)arg5;
- (id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 beta1:(float)arg4 beta2:(float)arg5 epsilon:(float)arg6 iterations:(unsigned long long)arg7 trainableVariables:(id)arg8 name:(id)arg9;
- (id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 momentumTensors:(id)arg4 velocityTensors:(id)arg5 maximumVelocityTensors:(id)arg6 beta1:(float)arg7 beta2:(float)arg8 epsilon:(float)arg9 iterations:(unsigned long long)arg10 trainableVariables:(id)arg11 name:(id)arg12;
- (id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 trainableVariables:(id)arg4 name:(id)arg5;

@end
