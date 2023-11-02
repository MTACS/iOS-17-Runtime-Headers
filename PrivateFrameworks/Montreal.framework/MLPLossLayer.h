
@interface MLPLossLayer : MLPImageLayer {
    MPSMatrixCopy * _matrixLargeCopyFilter;
    MPSMatrixLogSoftMax * _matrixLogSoftMax;
    MPSMatrixCopy * _matrixSingleCopyFilter;
    MPSMatrixSoftMax * _matrixSoftMax;
    MPSNDArrayMultiplication * _multiplication;
    MPSMatrixNeuron * _negativeNeuron;
    MPSNDArrayReductionSum * _reductionSum;
}

@property (retain) MPSMatrixCopy *matrixLargeCopyFilter;
@property (retain) MPSMatrixLogSoftMax *matrixLogSoftMax;
@property (retain) MPSMatrixCopy *matrixSingleCopyFilter;
@property (retain) MPSMatrixSoftMax *matrixSoftMax;
@property (retain) MPSNDArrayMultiplication *multiplication;
@property (retain) MPSMatrixNeuron *negativeNeuron;
@property (retain) MPSNDArrayReductionSum *reductionSum;

- (void).cxx_destruct;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (void)createKernel;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(bool)arg4;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3;
- (id)imageInferenceForward:(id)arg1 input:(id)arg2 lossLabels:(id)arg3;
- (id)imageTrainingForward:(id)arg1 input:(id)arg2 lossLabels:(id)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5;
- (id)initWithName:(id)arg1 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg2;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (id)matrixLargeCopyFilter;
- (id)matrixLogSoftMax;
- (id)matrixSingleCopyFilter;
- (id)matrixSoftMax;
- (id)multiplication;
- (id)negativeNeuron;
- (id)reductionSum;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(bool)arg4;
- (id)seqForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 runInference:(bool)arg4;
- (id)seqInferenceForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3;
- (id)seqTrainingForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 computeLossGradient:(bool)arg4;
- (id)seqTrainingForward:(id)arg1 subMatrix:(id)arg2 reductionSumResults:(id)arg3 alphaVec:(id)arg4 labels:(id)arg5 rowOffset:(unsigned long long)arg6 computeNRows:(unsigned long long)arg7 computeLossGradient:(bool)arg8;
- (void)setMatrixLargeCopyFilter:(id)arg1;
- (void)setMatrixLogSoftMax:(id)arg1;
- (void)setMatrixSingleCopyFilter:(id)arg1;
- (void)setMatrixSoftMax:(id)arg1;
- (void)setMultiplication:(id)arg1;
- (void)setNegativeNeuron:(id)arg1;
- (void)setReductionSum:(id)arg1;
- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;

@end
