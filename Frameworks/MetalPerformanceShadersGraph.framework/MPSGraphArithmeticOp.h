
@interface MPSGraphArithmeticOp : MPSGraphOperation {
    unsigned long long  _mathOpType;
}

- (id)broadcastGradTernaryWithOutputGradient:(id)arg1 inputIndex:(unsigned long long)arg2 name:(id)arg3;
- (id)broadcastGradWithOutputGradient:(id)arg1 inputIndex:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mathOpType:(unsigned long long)arg4 name:(id)arg5;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
