
@interface MPSGraphGatherOp : MPSGraphOperation {
    bool  _allowNegativeIndices;
    long long  _axis;
    unsigned long long  _batchDims;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 axis:(long long)arg4 batchDimensions:(unsigned long long)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
