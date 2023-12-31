
@interface MLPLayer : NSObject {
    MPSKernel * _forwardKernel;
    unsigned long long  _inputChannels;
    unsigned long long  _inputLength;
    unsigned long long  _layerType;
    NSString * _name;
    MLPNetwork * _network;
    float  _neuronA;
    float  _neuronB;
    float  _neuronC;
    int  _neuronType;
    MLPLayer * _nextLayer;
    MontrealNNModelNode * _node;
    unsigned long long  _outputChannels;
    unsigned long long  _outputLength;
    MLPLayer * _previousLayer;
    MPSKernel * _primaryGradientKernel;
    MPSKernel * _secondaryForwardKernel;
    MPSKernel * _secondaryGradientKernel;
}

@property (retain) MPSKernel *forwardKernel;
@property unsigned long long inputChannels;
@property unsigned long long inputLength;
@property (readonly) unsigned long long layerType;
@property (readonly) NSString *name;
@property MLPNetwork *network;
@property (readonly) float neuronA;
@property (readonly) float neuronB;
@property (readonly) float neuronC;
@property (readonly) int neuronType;
@property MLPLayer *nextLayer;
@property (retain) MontrealNNModelNode *node;
@property unsigned long long outputChannels;
@property unsigned long long outputLength;
@property MLPLayer *previousLayer;
@property (retain) MPSKernel *primaryGradientKernel;
@property (retain) MPSKernel *secondaryForwardKernel;
@property (retain) MPSKernel *secondaryGradientKernel;

+ (id)layerWithMontrealNode:(id)arg1 modelContainer:(void*)arg2;

- (void).cxx_destruct;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (void)createKernel;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(bool)arg4;
- (id)forwardKernel;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 params:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg4 inputChunks:(id)arg5 outputChunks:(id)arg6;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg3;
- (id)initWithName:(id)arg1 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg2;
- (unsigned long long)inputChannels;
- (unsigned long long)inputLength;
- (unsigned long long)layerType;
- (long long)montrealTypeFromMPSNeuronType:(int)arg1;
- (int)mpsNeuronTypeFromMontrealType:(long long)arg1;
- (id)name;
- (id)network;
- (float)neuronA;
- (float)neuronB;
- (float)neuronC;
- (int)neuronType;
- (id)nextLayer;
- (id)node;
- (unsigned long long)outputChannels;
- (unsigned long long)outputLength;
- (id)previousLayer;
- (id)primaryGradientKernel;
- (void)printMatrix:(id)arg1 name:(id)arg2 cmdBuf:(id)arg3;
- (id)secondaryForwardKernel;
- (id)secondaryGradientKernel;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(bool)arg4;
- (void)setForwardKernel:(id)arg1;
- (void)setInputChannels:(unsigned long long)arg1;
- (void)setInputLength:(unsigned long long)arg1;
- (void)setNetwork:(id)arg1;
- (void)setNextLayer:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setOutputChannels:(unsigned long long)arg1;
- (void)setOutputLength:(unsigned long long)arg1;
- (void)setPreviousLayer:(id)arg1;
- (void)setPrimaryGradientKernel:(id)arg1;
- (void)setSecondaryForwardKernel:(id)arg1;
- (void)setSecondaryGradientKernel:(id)arg1;
- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;

@end
