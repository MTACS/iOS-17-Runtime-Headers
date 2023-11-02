
@protocol MPSCNNBatchNormalizationDataSource <NSObject, NSCopying>

@required

- (float*)beta;
- (float*)gamma;
- (NSString *)label;
- (bool)load;
- (float*)mean;
- (unsigned long long)numberOfFeatureChannels;
- (void)purge;
- (float*)variance;

@optional

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id <MTLDevice>)arg2;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)epsilon;
- (id)initWithCoder:(NSCoder *)arg1;
- (bool)updateGammaAndBetaWithBatchNormalizationState:(MPSCNNBatchNormalizationState *)arg1;
- (MPSCNNNormalizationGammaAndBetaState *)updateGammaAndBetaWithCommandBuffer:(id <MTLCommandBuffer>)arg1 batchNormalizationState:(MPSCNNBatchNormalizationState *)arg2;
- (bool)updateMeanAndVarianceWithBatchNormalizationState:(MPSCNNBatchNormalizationState *)arg1;
- (MPSCNNNormalizationMeanAndVarianceState *)updateMeanAndVarianceWithCommandBuffer:(id <MTLCommandBuffer>)arg1 batchNormalizationState:(MPSCNNBatchNormalizationState *)arg2;

@end
