
@interface MPSGraphLocalConvolutionDataGradientOp : MPSGraphLocalConvolutionBase

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dataLayout:(unsigned long long)arg4 kernelShape:(id)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 name:(id)arg8;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
