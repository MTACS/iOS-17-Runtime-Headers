
@interface MPSGraphCostVolumeOp : MPSGraphOperation {
    bool  _alignCorners;
    bool  _coordinateIs1DInWidth;
    unsigned long long  _layout;
    unsigned long long  _nearestRoundingMode;
    bool  _normalizeCoordinates;
    long long  _paddingMode;
    bool  _relativeCoordinates;
    unsigned long long  _samplingMode;
    unsigned long long  _similarity;
    unsigned long long  _windowHeight;
    unsigned long long  _windowWidth;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 layout:(unsigned long long)arg4 normalizeCoordinates:(bool)arg5 relativeCoordinates:(bool)arg6 alignCorners:(bool)arg7 coordinateIs1DInWidth:(bool)arg8 paddingMode:(long long)arg9 samplingMode:(unsigned long long)arg10 nearestRoundingMode:(unsigned long long)arg11 similarityType:(unsigned long long)arg12 windowWidth:(unsigned long long)arg13 windowHeight:(unsigned long long)arg14 name:(id)arg15;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
