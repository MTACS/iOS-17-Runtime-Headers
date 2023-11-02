
@interface TCMPSBatchNormWeights : NSObject <MPSCNNBatchNormalizationDataSource> {
    float  _batchNormEpsilon;
    float * _betaMomentumPointer;
    MPSVector * _betaMomentumVector;
    float * _betaPointer;
    float * _betaVelocityPointer;
    MPSVector * _betaVelocityVector;
    unsigned long long  _channels;
    MPSCNNNormalizationGammaAndBetaState * _gammaBetaState;
    float * _gammaMomentumPointer;
    MPSVector * _gammaMomentumVector;
    float * _gammaPointer;
    float * _gammaVelocityPointer;
    MPSVector * _gammaVelocityVector;
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
    NSString * _label;
    MPSCNNNormalizationMeanAndVarianceState * _meanVarianceState;
    float * _movingMeanPointer;
    MPSVector * _movingMeanVector;
    float * _movingVariancePointer;
    MPSVector * _movingVarianceVector;
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
    MPSNNOptimizerAdam * adamBeta;
    MPSNNOptimizerAdam * adamGamma;
    <MTLBuffer> * betaBuffer;
    <MTLBuffer> * betaMomentumBuffer;
    <MTLBuffer> * betaVelocityBuffer;
    <MTLCommandQueue> * cq;
    <MTLDevice> * dev;
    <MTLBuffer> * gammaBuffer;
    <MTLBuffer> * gammaMomentumBuffer;
    <MTLBuffer> * gammaVelocityBuffer;
    MPSNNOptimizerStochasticGradientDescent * mov_avg_updater;
    MPSNNOptimizerStochasticGradientDescent * mov_var_updater;
    <MTLBuffer> * movingMeanBuffer;
    <MTLBuffer> * movingVarianceBuffer;
    MPSNNOptimizerStochasticGradientDescent * sgdBeta;
    MPSNNOptimizerStochasticGradientDescent * sgdGamma;
    float  t;
    bool  use_sgd_opt;
    MPSVectorDescriptor * vDesc;
}

@property (nonatomic, readonly) MPSVector *betaMomentumVector;
@property (nonatomic, readonly) MPSVector *betaVelocityVector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPSCNNNormalizationGammaAndBetaState *gammaBetaState;
@property (nonatomic, readonly) MPSVector *gammaMomentumVector;
@property (nonatomic, readonly) MPSVector *gammaVelocityVector;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *internalLabel;
@property (nonatomic, readonly) MPSCNNNormalizationMeanAndVarianceState *meanVarianceState;
@property (nonatomic, readonly) MPSVector *movingMeanVector;
@property (nonatomic, readonly) MPSVector *movingVarianceVector;
@property (nonatomic, readonly) <TCMPSConvolutionWeightsOptimizing> *optimizer;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)beta;
- (id)betaMomentumVector;
- (id)betaVelocityVector;
- (void)checkpointWithCommandQueue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (float)epsilon;
- (float*)gamma;
- (id)gammaBetaState;
- (id)gammaMomentumVector;
- (id)gammaVelocityVector;
- (id)initWithChannels:(unsigned long long)arg1 kernelParamsBinaryName:(const char *)arg2 device:(id)arg3 cmd_queue:(id)arg4 gamma:(float*)arg5 beta:(float*)arg6 moving_avg:(float*)arg7 moving_var:(float*)arg8 optimizerOptions:(struct OptimizerOptions { bool x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })arg9 batchNormEpsilon:(float)arg10;
- (id)internalLabel;
- (id)label;
- (bool)load;
- (void)loadBeta:(float*)arg1;
- (void)loadGamma:(float*)arg1;
- (void)loadMovingAvg:(float*)arg1;
- (void)loadMovingVar:(float*)arg1;
- (float*)mean;
- (id)meanVarianceState;
- (id)movingMeanVector;
- (id)movingVarianceVector;
- (unsigned long long)numberOfFeatureChannels;
- (id)optimizer;
- (void)purge;
- (void)setInternalLabel:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)set_cq:(id)arg1;
- (bool)updateGammaAndBetaWithBatchNormalizationState:(id)arg1;
- (id)updateGammaAndBetaWithCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2;
- (float*)variance;

@end
