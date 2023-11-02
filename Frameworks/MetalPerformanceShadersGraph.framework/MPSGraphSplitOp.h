
@interface MPSGraphSplitOp : MPSGraphOperation {
    long long  _dimensionIndex;
    unsigned long long  _numSplits;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dimension:(long long)arg4 name:(id)arg5;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dimension:(long long)arg4 numSplits:(unsigned long long)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativesForInputTensors:(id)arg1 incomingGradients:(id)arg2 name:(id)arg3;

@end
