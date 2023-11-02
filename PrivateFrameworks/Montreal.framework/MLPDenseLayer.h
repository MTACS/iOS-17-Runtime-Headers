
@interface MLPDenseLayer : MLPMatrixLayer <MLPLayerOptimizerProtocol> {
    MPSVector * _biasVector;
    const void * _initialBias;
    const void * _initialWeights;
    MLPOptimizer * _optimizerBiases;
    MLPOptimizer * _optimizerWeights;
    MPSMatrix * _weights;
}

@property (retain) MPSVector *biasVector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property const void*initialBias;
@property const void*initialWeights;
@property (readonly) NSArray *mlpOptimizers;
@property (retain) MLPOptimizer *optimizerBiases;
@property (retain) MLPOptimizer *optimizerWeights;
@property (readonly) Class superclass;
@property (retain) MPSMatrix *weights;

- (void).cxx_destruct;
- (id)backward:(id)arg1 index:(id)arg2 inputGradientMatrix:(id)arg3;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (id)biasVector;
- (void)createKernel;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(bool)arg4;
- (id)forward:(id)arg1 inputMatrix:(id)arg2 index:(id)arg3 runInference:(bool)arg4;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3;
- (id)initWithName:(id)arg1 numInputs:(unsigned long long)arg2 numOutputs:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5;
- (id)initWithName:(id)arg1 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg2;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 numOutputs:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5;
- (const void*)initialBias;
- (const void*)initialWeights;
- (id)mlpOptimizers;
- (id)optimizerBiases;
- (id)optimizerWeights;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(bool)arg4;
- (void)setBiasVector:(id)arg1;
- (void)setInitialBias:(const void*)arg1;
- (void)setInitialWeights:(const void*)arg1;
- (void)setOptimizerBiases:(id)arg1;
- (void)setOptimizerWeights:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)weights;

@end
