
@interface MPSGraphNonMaximumSuppressionOp : MPSGraphOperation {
    unsigned long long  _coordinateMode;
    float  _iouThreshold;
    bool  _perClassSuppression;
    float  _scoreThreshold;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 iouThreshold:(float)arg4 scoreThreshold:(float)arg5 perClassSuppression:(bool)arg6 coordinateMode:(unsigned long long)arg7 name:(id)arg8;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
