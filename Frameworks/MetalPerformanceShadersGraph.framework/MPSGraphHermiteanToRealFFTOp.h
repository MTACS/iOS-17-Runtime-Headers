
@interface MPSGraphHermiteanToRealFFTOp : MPSGraphOperation {
    MPSGraphFFTDescriptor * _desc;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativesForInputTensors:(id)arg1 incomingGradients:(id)arg2 name:(id)arg3;

@end
