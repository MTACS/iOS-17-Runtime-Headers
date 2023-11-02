
@interface MPSGraphRandomTruncatedNormalOp : MPSGraphOperation {
    unsigned int  _dataType;
    float  _maximum;
    float  _mean;
    float  _minimum;
    unsigned long long  _samplingMethod;
    float  _standardDeviation;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end
