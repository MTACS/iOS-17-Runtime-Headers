
@interface MPSGraphSampleGridDataGradientOp : MPSGraphOperation {
    bool  _normalizeCoordinates;
    long long  _paddingMode;
    bool  _relativeCoordinates;
    unsigned long long  _samplingMode;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 normalizeCoordinates:(bool)arg4 relativeCoordinates:(bool)arg5 paddingMode:(long long)arg6 samplingMode:(unsigned long long)arg7 name:(id)arg8;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
