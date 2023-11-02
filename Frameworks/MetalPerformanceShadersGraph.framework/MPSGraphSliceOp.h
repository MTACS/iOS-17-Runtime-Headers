
@interface MPSGraphSliceOp : MPSGraphOperation {
    long long  _dimensionIndex;
    long long  _length;
    long long  _start;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dimension:(unsigned long long)arg4 start:(long long)arg5 length:(long long)arg6 name:(id)arg7;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
