
@interface TCMPSInstanceNormDataLoader : NSObject <MPSCNNInstanceNormalizationDataSource> {
    MPSNNOptimizerAdam * _adamBeta;
    MPSNNOptimizerAdam * _adamGamma;
    NSMutableData * _betaPlaceHolder;
    NSMutableData * _beta_weights;
    <MTLCommandQueue> * _cq;
    NSMutableData * _gammaPlaceHolder;
    NSMutableData * _gamma_weights;
    MPSCNNInstanceNormalization * _instanceNormFilter;
    NSString * _name;
    unsigned long long  _numberOfFeatureChannels;
    unsigned long long  _styleIndex;
    NSMutableArray * _style_props;
    unsigned long long  _styles;
    MPSVectorDescriptor * _vDesc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfFeatureChannels;
@property (nonatomic) unsigned long long styleIndex;
@property (nonatomic) unsigned long long styles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float*)beta;
- (float*)betaWeights;
- (void)checkpoint;
- (void)checkpointWithCommandQueue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float*)gamma;
- (float*)gammaWeights;
- (id)initWithParams:(id)arg1 gammaWeights:(float*)arg2 betaWeights:(float*)arg3 numberFeatureChannels:(unsigned long long)arg4 styles:(unsigned long long)arg5 device:(id)arg6 cmd_queue:(id)arg7;
- (id)label;
- (void)loadBeta:(float*)arg1;
- (void)loadGamma:(float*)arg1;
- (unsigned long long)numberOfFeatureChannels;
- (void)setLearningRate:(float)arg1;
- (void)setNumberOfFeatureChannels:(unsigned long long)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setStyles:(unsigned long long)arg1;
- (unsigned long long)styleIndex;
- (unsigned long long)styles;
- (id)updateGammaAndBetaWithCommandBuffer:(id)arg1 instanceNormalizationStateBatch:(id)arg2;

@end
