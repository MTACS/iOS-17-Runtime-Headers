
@interface MPSGraphLocalConvolutionBase : MPSGraphOperation {
    unsigned long long  _dataLayout;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    NSArray * _kernelShape;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dataLayout:(unsigned long long)arg4 kernelShape:(id)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 name:(id)arg8;

@end
