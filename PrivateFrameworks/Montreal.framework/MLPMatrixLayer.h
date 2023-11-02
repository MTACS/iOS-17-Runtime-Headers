
@interface MLPMatrixLayer : MLPLayer {
    NSMutableDictionary * _inputMatrixToFirstKernel;
    NSMutableDictionary * _inputMatrixToSecondKernel;
    unsigned long long  _numInputs;
    unsigned long long  _numOutputs;
}

@property (retain) NSMutableDictionary *inputMatrixToFirstKernel;
@property (retain) NSMutableDictionary *inputMatrixToSecondKernel;
@property unsigned long long numInputs;
@property unsigned long long numOutputs;

- (void).cxx_destruct;
- (void)allocateInputDictionaries;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg3;
- (id)inputMatrixToFirstKernel;
- (id)inputMatrixToSecondKernel;
- (unsigned long long)numInputs;
- (unsigned long long)numOutputs;
- (void)setInputMatrixToFirstKernel:(id)arg1;
- (void)setInputMatrixToSecondKernel:(id)arg1;
- (void)setNumInputs:(unsigned long long)arg1;
- (void)setNumOutputs:(unsigned long long)arg1;
- (void)updateInputMatrixToFirstKernel:(id)arg1 index:(id)arg2 inference:(bool)arg3;
- (void)updateInputMatrixToSecondKernel:(id)arg1 index:(id)arg2 inference:(bool)arg3;

@end
