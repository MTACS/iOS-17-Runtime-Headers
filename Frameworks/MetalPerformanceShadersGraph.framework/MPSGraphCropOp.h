
@interface MPSGraphCropOp : MPSGraphOperation {
    unsigned long long  _amount_after;
    unsigned long long  _amount_before;
    long long  _dimensionIndex;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dimension_index:(long long)arg4 amount_before:(unsigned long long)arg5 amount_after:(unsigned long long)arg6 name:(id)arg7;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
