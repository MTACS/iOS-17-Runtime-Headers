
@interface MLPEmbeddingLayer : MLPLayer <MLPLayerOptimizerProtocol> {
    unsigned long long  _embeddingDimension;
    const void * _initialWeights;
    MPSMatrixCopy * _matrixCopy;
    MPSMatrixCopy * _matrixCopyFilter;
    MPSVector * _offsetVector;
    MLPOptimizer * _optimizer;
    MPSMatrixSum * _sumFilter;
    unsigned long long  _vocabSize;
    MPSMatrix * _weightGradients;
    MPSMatrix * _weights;
    MPSMatrix * _weights_mom;
    MPSMatrix * _weights_vel;
    MPSMatrixNeuron * _zeroFilter;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  weightsInitial;
    struct vector<std::map<unsigned int, std::vector<unsigned int>>, std::allocator<std::map<unsigned int, std::vector<unsigned int>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::map<unsigned int, std::vector<unsigned int>> *, std::allocator<std::map<unsigned int, std::vector<unsigned int>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  wordIDRepetitions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long embeddingDimension;
@property (readonly) unsigned long long hash;
@property const void*initialWeights;
@property (retain) MPSMatrixCopy *matrixCopy;
@property (retain) MPSMatrixCopy *matrixCopyFilter;
@property (readonly) NSArray *mlpOptimizers;
@property (retain) MPSVector *offsetVector;
@property (retain) MLPOptimizer *optimizer;
@property (retain) MPSMatrixSum *sumFilter;
@property (readonly) Class superclass;
@property unsigned long long vocabSize;
@property (retain) MPSMatrix *weightGradients;
@property (retain) MPSMatrix *weights;
@property (retain) MPSMatrix *weights_mom;
@property (retain) MPSMatrix *weights_vel;
@property (retain) MPSMatrixNeuron *zeroFilter;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createKernel;
- (unsigned long long)embeddingDimension;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(bool)arg4;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 vocabSize:(unsigned long long)arg3 embeddingDimension:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 parameters:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg2;
- (const void*)initialWeights;
- (id)matrixCopy;
- (id)matrixCopyFilter;
- (id)mlpOptimizers;
- (id)offsetVector;
- (id)optimizer;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (void)seqBackward:(id)arg1 inputGradientMatrix:(id)arg2 matrixIter:(unsigned long long)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(bool)arg4;
- (void)setEmbeddingDimension:(unsigned long long)arg1;
- (void)setInitialWeights:(const void*)arg1;
- (void)setMatrixCopy:(id)arg1;
- (void)setMatrixCopyFilter:(id)arg1;
- (void)setOffsetVector:(id)arg1;
- (void)setOptimizer:(id)arg1;
- (void)setSumFilter:(id)arg1;
- (void)setVocabSize:(unsigned long long)arg1;
- (void)setWeightGradients:(id)arg1;
- (void)setWeights:(id)arg1;
- (void)setWeights_mom:(id)arg1;
- (void)setWeights_vel:(id)arg1;
- (void)setZeroFilter:(id)arg1;
- (id)sumFilter;
- (unsigned long long)vocabSize;
- (id)weightGradients;
- (id)weights;
- (id)weights_mom;
- (id)weights_vel;
- (id)zeroFilter;

@end
