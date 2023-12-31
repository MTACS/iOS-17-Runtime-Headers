
@interface MLCMHAGPUDeviceOps : MLCGPUDeviceOps {
    NSArray * _mhaAttentionBiasTensors;
    id  _mhaBiasAddKernel;
    id  _mhaDropoutForwardKernel;
    id  _mhaDropoutGradientKernel;
    id  _mhaDropoutSource;
    id  _mhaDropoutState;
    bool  _mhaHasAttentionMask;
    bool  _mhaHasAttnBias;
    bool  _mhaHasBias;
    bool  _mhaHasKeyMask;
    bool  _mhaHasZeroAttention;
    unsigned long long  _mhaHeadCount;
    NSMutableArray * _mhaInputProjResults;
    id  _mhaMaskSoftmaxFastForwardKernel;
    id  _mhaMaskSoftmaxForwardKernel;
    id  _mhaMatMulKernel;
    id  _mhaMatMulKernelWithScale;
    NSMutableArray * _mhaMatMulSourcesQKV;
    NSMutableArray * _mhaMatrixDescriptors;
    NSMutableArray * _mhaMatrixDescriptorsForBias;
    unsigned long long  _mhaModelDimension;
    id  _mhaMultiGPUChildOps;
    NSMutableArray * _mhaNDArrayDescriptors;
    NSMutableArray * _mhaNDArrayDescriptorsForBias;
    id  _mhaQKSoftmaxResultMatrix;
    NSArray * _mhaReduceSumKernels;
    id  _mhaSoftmaxGradientKernel;
    NSMutableArray * _mhaSourcesQKV;
}

@property (nonatomic, retain) NSArray *mhaAttentionBiasTensors;
@property (nonatomic, retain) id mhaBiasAddKernel;
@property (nonatomic, retain) id mhaDropoutForwardKernel;
@property (nonatomic, retain) id mhaDropoutGradientKernel;
@property (nonatomic, retain) id mhaDropoutSource;
@property (nonatomic, retain) id mhaDropoutState;
@property (nonatomic) bool mhaHasAttentionMask;
@property (nonatomic) bool mhaHasAttnBias;
@property (nonatomic) bool mhaHasBias;
@property (nonatomic) bool mhaHasKeyMask;
@property (nonatomic) bool mhaHasZeroAttention;
@property (nonatomic) unsigned long long mhaHeadCount;
@property (nonatomic, retain) NSMutableArray *mhaInputProjResults;
@property (nonatomic, retain) id mhaMaskSoftmaxFastForwardKernel;
@property (nonatomic, retain) id mhaMaskSoftmaxForwardKernel;
@property (nonatomic, retain) id mhaMatMulKernel;
@property (nonatomic, retain) id mhaMatMulKernelWithScale;
@property (nonatomic, retain) NSMutableArray *mhaMatMulSourcesQKV;
@property (nonatomic, retain) NSMutableArray *mhaMatrixDescriptors;
@property (nonatomic, retain) NSMutableArray *mhaMatrixDescriptorsForBias;
@property (nonatomic) unsigned long long mhaModelDimension;
@property (nonatomic, retain) id mhaMultiGPUChildOps;
@property (nonatomic, retain) NSMutableArray *mhaNDArrayDescriptors;
@property (nonatomic, retain) NSMutableArray *mhaNDArrayDescriptorsForBias;
@property (nonatomic, retain) id mhaQKSoftmaxResultMatrix;
@property (nonatomic, retain) NSArray *mhaReduceSumKernels;
@property (nonatomic, retain) id mhaSoftmaxGradientKernel;
@property (nonatomic, retain) NSMutableArray *mhaSourcesQKV;

+ (id)deviceOps;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)mhaAttentionBiasTensors;
- (id)mhaBiasAddKernel;
- (id)mhaDropoutForwardKernel;
- (id)mhaDropoutGradientKernel;
- (id)mhaDropoutSource;
- (id)mhaDropoutState;
- (bool)mhaHasAttentionMask;
- (bool)mhaHasAttnBias;
- (bool)mhaHasBias;
- (bool)mhaHasKeyMask;
- (bool)mhaHasZeroAttention;
- (unsigned long long)mhaHeadCount;
- (id)mhaInputProjResults;
- (id)mhaMaskSoftmaxFastForwardKernel;
- (id)mhaMaskSoftmaxForwardKernel;
- (id)mhaMatMulKernel;
- (id)mhaMatMulKernelWithScale;
- (id)mhaMatMulSourcesQKV;
- (id)mhaMatrixDescriptors;
- (id)mhaMatrixDescriptorsForBias;
- (unsigned long long)mhaModelDimension;
- (id)mhaMultiGPUChildOps;
- (id)mhaNDArrayDescriptors;
- (id)mhaNDArrayDescriptorsForBias;
- (id)mhaQKSoftmaxResultMatrix;
- (id)mhaReduceSumKernels;
- (id)mhaSoftmaxGradientKernel;
- (id)mhaSourcesQKV;
- (void)setMhaAttentionBiasTensors:(id)arg1;
- (void)setMhaBiasAddKernel:(id)arg1;
- (void)setMhaDropoutForwardKernel:(id)arg1;
- (void)setMhaDropoutGradientKernel:(id)arg1;
- (void)setMhaDropoutSource:(id)arg1;
- (void)setMhaDropoutState:(id)arg1;
- (void)setMhaHasAttentionMask:(bool)arg1;
- (void)setMhaHasAttnBias:(bool)arg1;
- (void)setMhaHasBias:(bool)arg1;
- (void)setMhaHasKeyMask:(bool)arg1;
- (void)setMhaHasZeroAttention:(bool)arg1;
- (void)setMhaHeadCount:(unsigned long long)arg1;
- (void)setMhaInputProjResults:(id)arg1;
- (void)setMhaMaskSoftmaxFastForwardKernel:(id)arg1;
- (void)setMhaMaskSoftmaxForwardKernel:(id)arg1;
- (void)setMhaMatMulKernel:(id)arg1;
- (void)setMhaMatMulKernelWithScale:(id)arg1;
- (void)setMhaMatMulSourcesQKV:(id)arg1;
- (void)setMhaMatrixDescriptors:(id)arg1;
- (void)setMhaMatrixDescriptorsForBias:(id)arg1;
- (void)setMhaModelDimension:(unsigned long long)arg1;
- (void)setMhaMultiGPUChildOps:(id)arg1;
- (void)setMhaNDArrayDescriptors:(id)arg1;
- (void)setMhaNDArrayDescriptorsForBias:(id)arg1;
- (void)setMhaQKSoftmaxResultMatrix:(id)arg1;
- (void)setMhaReduceSumKernels:(id)arg1;
- (void)setMhaSoftmaxGradientKernel:(id)arg1;
- (void)setMhaSourcesQKV:(id)arg1;

@end
