
@interface MPSGraphDequantizeLUTOp : MPSGraphOperation {
    NSNumber * _axis;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 axis:(id)arg4 name:(id)arg5;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
