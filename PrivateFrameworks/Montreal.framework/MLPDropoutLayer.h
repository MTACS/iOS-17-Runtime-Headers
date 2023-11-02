
@interface MLPDropoutLayer : MLPImageLayer {
    float  _dropoutRatio;
}

@property (readonly) float dropoutRatio;

- (id)backward:(id)arg1 index:(id)arg2 inputGradient:(id)arg3;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (void)createKernel;
- (float)dropoutRatio;
- (id)forward:(id)arg1 input:(id)arg2 index:(id)arg3 runInference:(bool)arg4;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(bool)arg4;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 dropoutRatio:(float)arg4;
- (id)initWithName:(id)arg1 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg2;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 dropoutRatio:(float)arg3;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(bool)arg4;
- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;

@end
