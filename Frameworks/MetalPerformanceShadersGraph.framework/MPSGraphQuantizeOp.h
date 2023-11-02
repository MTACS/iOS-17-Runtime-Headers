
@interface MPSGraphQuantizeOp : MPSGraphOperation {
    NSNumber * _axis;
    unsigned int  _dataType;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dataType:(unsigned int)arg4 axis:(id)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
