
@interface MPSGraphMakeListOp : MPSGraphOperation {
    MPSGraphType * _elementType;
    NSNumber * _maxSize;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 elementType:(id)arg4 maxSize:(id)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
