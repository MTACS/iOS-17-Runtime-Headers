
@interface MPSGraphOneHotOp : MPSGraphOperation {
    unsigned long long  _axis;
    unsigned int  _dataType;
    unsigned long long  _depth;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 depth:(unsigned long long)arg4 axis:(unsigned long long)arg5 dataType:(unsigned int)arg6 name:(id)arg7;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
