
@interface MLCConvolutionGPUDeviceOps : MLCGPUDeviceOps {
    unsigned long long  _biasChannelCount;
    id  _convolutionMultiGPUChildOps;
    bool  _convolutionTranspose;
    bool  _depthWiseConvolution;
    NSMutableArray * _descriptorsForMPSGraph;
    id  _forwardMPSGraph;
    id  _gradientMPSGraph;
    bool  _hasBias;
    NSMutableArray * _mpsGraphTensors;
    id  _transposeDeviceOps;
    NSMutableArray * _transposedTensors;
}

@property (nonatomic) unsigned long long biasChannelCount;
@property (nonatomic, retain) id convolutionMultiGPUChildOps;
@property (nonatomic) bool convolutionTranspose;
@property (nonatomic) bool depthWiseConvolution;
@property (nonatomic, retain) NSMutableArray *descriptorsForMPSGraph;
@property (nonatomic, retain) id forwardMPSGraph;
@property (nonatomic, retain) id gradientMPSGraph;
@property (nonatomic) bool hasBias;
@property (nonatomic, retain) NSMutableArray *mpsGraphTensors;
@property (nonatomic, retain) id transposeDeviceOps;
@property (nonatomic, retain) NSMutableArray *transposedTensors;

+ (id)deviceOpsWithForwardMPSGraph:(id)arg1 gradientMPSGraph:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)biasChannelCount;
- (id)convolutionMultiGPUChildOps;
- (bool)convolutionTranspose;
- (bool)depthWiseConvolution;
- (id)descriptorsForMPSGraph;
- (id)forwardMPSGraph;
- (id)gradientMPSGraph;
- (bool)hasBias;
- (id)initWithForwardMPSGraph:(id)arg1 gradientMPSGraph:(id)arg2;
- (id)mpsGraphTensors;
- (void)setBiasChannelCount:(unsigned long long)arg1;
- (void)setConvolutionMultiGPUChildOps:(id)arg1;
- (void)setConvolutionTranspose:(bool)arg1;
- (void)setDepthWiseConvolution:(bool)arg1;
- (void)setDescriptorsForMPSGraph:(id)arg1;
- (void)setForwardMPSGraph:(id)arg1;
- (void)setGradientMPSGraph:(id)arg1;
- (void)setHasBias:(bool)arg1;
- (void)setMpsGraphTensors:(id)arg1;
- (void)setTransposeDeviceOps:(id)arg1;
- (void)setTransposedTensors:(id)arg1;
- (id)transposeDeviceOps;
- (id)transposedTensors;

@end
