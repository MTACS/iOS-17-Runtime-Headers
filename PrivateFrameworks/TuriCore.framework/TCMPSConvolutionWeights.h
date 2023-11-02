
@interface TCMPSConvolutionWeights : NSObject <MPSCNNConvolutionDataSource> {
    MPSVector * _biasMomentumVector;
    MPSVector * _biasVelocityVector;
    MPSCNNConvolutionDescriptor * _convDesc;
    unsigned long long  _inputFeatureChannels;
    unsigned long long  _kernelHeight;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _kernelParamsBinaryName;
    unsigned long long  _kernelWidth;
    <TCMPSConvolutionWeightsOptimizing> * _optimizer;
    struct OptimizerOptions { 
        bool useSGD; 
        float learningRate; 
        float gradientClipping; 
        float weightDecay; 
        float sgdMomentum; 
        float adamBeta1; 
        float adamBeta2; 
        float adamEpsilon; 
    }  _optimizerOptions;
    unsigned long long  _outputFeatureChannels;
    unsigned int  _seed;
    MPSCNNConvolutionWeightsAndBiasesState * _state;
    bool  _updateWeights;
    MPSVector * _weightMomentumVector;
    MPSVector * _weightVelocityVector;
    <MTLBuffer> * biasBuffer;
    <MTLBuffer> * biasMomentumBuffer;
    <MTLBuffer> * biasVelocityBuffer;
    <MTLCommandQueue> * cq;
    unsigned long long  sizeBias;
    unsigned long long  sizeWeights;
    <MTLBuffer> * weightBuffer;
    <MTLBuffer> * weightMomentumBuffer;
    <MTLBuffer> * weightVelocityBuffer;
}

@property (nonatomic, readonly) MPSVector *biasMomentumVector;
@property (nonatomic, readonly) MPSVector *biasVelocityVector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TCMPSConvolutionWeightsOptimizing> *optimizer;
@property (nonatomic, readonly) MPSCNNConvolutionWeightsAndBiasesState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool updateWeights;
@property (nonatomic, readonly) MPSVector *weightMomentumVector;
@property (nonatomic, readonly) MPSVector *weightVelocityVector;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)biasMomentumVector;
- (unsigned long long)biasSize;
- (float*)biasTerms;
- (id)biasVelocityVector;
- (void)checkpoint;
- (void)checkpointWithCommandQueue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (unsigned int)dataType;
- (id)descriptor;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronType:(int)arg5 neuronA:(float)arg6 neuronB:(float)arg7 stride:(unsigned long long)arg8 kernelParamsBinaryName:(const char *)arg9 device:(id)arg10 cmd_queue:(id)arg11 init_weight_ptr:(float*)arg12 init_bias_ptr:(float*)arg13 optimizerOptions:(struct OptimizerOptions { bool x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })arg14;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronType:(int)arg5 strideX:(unsigned long long)arg6 strideY:(unsigned long long)arg7 neuronA:(float)arg8 neuronB:(float)arg9 kernelParamsBinaryName:(const char *)arg10 device:(id)arg11 cmd_queue:(id)arg12 init_weight_ptr:(float*)arg13 init_bias_ptr:(float*)arg14 optimizerOptions:(struct OptimizerOptions { bool x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })arg15;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronType:(int)arg5 strideX:(unsigned long long)arg6 strideY:(unsigned long long)arg7 neuronA:(float)arg8 neuronB:(float)arg9 kernelParamsBinaryName:(const char *)arg10 device:(id)arg11 cmd_queue:(id)arg12 updateWeights:(bool)arg13 init_weight_ptr:(float*)arg14 init_bias_ptr:(float*)arg15 optimizerOptions:(struct OptimizerOptions { bool x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })arg16;
- (id)label;
- (bool)load;
- (void)loadBias:(float*)arg1;
- (void)loadWeight:(float*)arg1;
- (id)optimizer;
- (void)purge;
- (void)setLearningRate:(float)arg1;
- (void)set_cq:(id)arg1;
- (id)state;
- (bool)updateWeights;
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2;
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
- (id)weightMomentumVector;
- (id)weightShape;
- (unsigned long long)weightSize;
- (id)weightVelocityVector;
- (void*)weights;

@end
