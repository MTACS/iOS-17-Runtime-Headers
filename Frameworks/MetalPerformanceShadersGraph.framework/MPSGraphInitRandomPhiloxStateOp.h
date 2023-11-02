
@interface MPSGraphInitRandomPhiloxStateOp : MPSGraphOperation {
    unsigned long long  _counterHigh;
    unsigned long long  _counterLow;
    unsigned long long  _key;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 counterLow:(unsigned long long)arg4 counterHigh:(unsigned long long)arg5 key:(unsigned long long)arg6 name:(id)arg7;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
