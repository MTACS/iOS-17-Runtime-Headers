
@interface MLCNormalizationGPUDeviceOps : MLCGPUDeviceOps {
    id  _batchNormBetaGammaDeltaKernel;
    id  _batchNormMeanKernel;
    id  _batchNormVarianceKernel;
    unsigned long long  _groupCount;
    id  _instanceNormMovingMeanVarianceKernel;
    bool  _isFusedWithArithmeticLayer;
    float  _momentum;
    id  _normalizationBetaGradient;
    id  _normalizationComputedMean;
    id  _normalizationComputedVariance;
    id  _normalizationGammaGradient;
    id  _normalizationInputNormalized;
    id  _normalizationInverseSqrtVariance;
    id  _normalizationMultiGPUChildOps;
    id  _normalizationRecomputeResultKernel;
    id  _normalizationSumBetaGammaDeltaKernel;
    NSArray * _normalizedShape;
    float  _varianceEpsilon;
}

@property (nonatomic, retain) id batchNormBetaGammaDeltaKernel;
@property (nonatomic, retain) id batchNormMeanKernel;
@property (nonatomic, retain) id batchNormVarianceKernel;
@property (nonatomic) unsigned long long groupCount;
@property (nonatomic, retain) id instanceNormMovingMeanVarianceKernel;
@property (nonatomic) bool isFusedWithArithmeticLayer;
@property (nonatomic) float momentum;
@property (nonatomic, retain) id normalizationBetaGradient;
@property (nonatomic, retain) id normalizationComputedMean;
@property (nonatomic, retain) id normalizationComputedVariance;
@property (nonatomic, retain) id normalizationGammaGradient;
@property (nonatomic, retain) id normalizationInputNormalized;
@property (nonatomic, retain) id normalizationInverseSqrtVariance;
@property (nonatomic, retain) id normalizationMultiGPUChildOps;
@property (nonatomic, retain) id normalizationRecomputeResultKernel;
@property (nonatomic, retain) id normalizationSumBetaGammaDeltaKernel;
@property (nonatomic, retain) NSArray *normalizedShape;
@property (nonatomic) float varianceEpsilon;

+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;

- (void).cxx_destruct;
- (id)batchNormBetaGammaDeltaKernel;
- (id)batchNormMeanKernel;
- (id)batchNormVarianceKernel;
- (unsigned long long)groupCount;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)instanceNormMovingMeanVarianceKernel;
- (bool)isFusedWithArithmeticLayer;
- (float)momentum;
- (id)normalizationBetaGradient;
- (id)normalizationComputedMean;
- (id)normalizationComputedVariance;
- (id)normalizationGammaGradient;
- (id)normalizationInputNormalized;
- (id)normalizationInverseSqrtVariance;
- (id)normalizationMultiGPUChildOps;
- (id)normalizationRecomputeResultKernel;
- (id)normalizationSumBetaGammaDeltaKernel;
- (id)normalizedShape;
- (void)setBatchNormBetaGammaDeltaKernel:(id)arg1;
- (void)setBatchNormMeanKernel:(id)arg1;
- (void)setBatchNormVarianceKernel:(id)arg1;
- (void)setGroupCount:(unsigned long long)arg1;
- (void)setInstanceNormMovingMeanVarianceKernel:(id)arg1;
- (void)setIsFusedWithArithmeticLayer:(bool)arg1;
- (void)setMomentum:(float)arg1;
- (void)setNormalizationBetaGradient:(id)arg1;
- (void)setNormalizationComputedMean:(id)arg1;
- (void)setNormalizationComputedVariance:(id)arg1;
- (void)setNormalizationGammaGradient:(id)arg1;
- (void)setNormalizationInputNormalized:(id)arg1;
- (void)setNormalizationInverseSqrtVariance:(id)arg1;
- (void)setNormalizationMultiGPUChildOps:(id)arg1;
- (void)setNormalizationRecomputeResultKernel:(id)arg1;
- (void)setNormalizationSumBetaGammaDeltaKernel:(id)arg1;
- (void)setNormalizedShape:(id)arg1;
- (void)setVarianceEpsilon:(float)arg1;
- (float)varianceEpsilon;

@end
