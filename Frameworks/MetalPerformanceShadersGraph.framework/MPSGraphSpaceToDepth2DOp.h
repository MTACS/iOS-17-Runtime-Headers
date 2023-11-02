
@interface MPSGraphSpaceToDepth2DOp : MPSGraphOperation {
    unsigned long long  _blockSize;
    bool  _pixelShuffleOrder;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 blockSize:(unsigned long long)arg4 usePixelShuffleOrder:(bool)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
