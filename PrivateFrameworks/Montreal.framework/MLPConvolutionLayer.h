
@interface MLPConvolutionLayer : MLPConvolutionBase {
    MLPModelConvolutionDataSource * _dataSource;
    const void * _initialBias;
    const void * _initialWeights;
}

@property (retain) MLPModelConvolutionDataSource *dataSource;
@property const void*initialBias;
@property const void*initialWeights;

- (void).cxx_destruct;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (void)createKernel;
- (id)dataSource;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(bool)arg4;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6 outputChannels:(unsigned long long)arg7 neuronType:(int)arg8 neuronParams:(id)arg9;
- (id)initWithName:(id)arg1 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg2;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5 outputChannels:(unsigned long long)arg6 neuronType:(int)arg7 neuronParams:(id)arg8;
- (const void*)initialBias;
- (const void*)initialWeights;
- (void)setDataSource:(id)arg1;
- (void)setInitialBias:(const void*)arg1;
- (void)setInitialWeights:(const void*)arg1;
- (void)updatePrimaryCurrentState:(id)arg1 index:(id)arg2 inference:(bool)arg3;

@end
