
@interface MPSGraphStridedSliceGradientOp : MPSGraphOperation {
    unsigned int  _begin_mask;
    unsigned int  _end_mask;
    NSArray * _ends;
    unsigned int  _shrink_axis_mask;
    NSArray * _starts;
    NSArray * _strides;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 starts:(id)arg4 ends:(id)arg5 strides:(id)arg6 startMask:(unsigned int)arg7 endMask:(unsigned int)arg8 shrinkAxisMask:(unsigned int)arg9 name:(id)arg10;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
