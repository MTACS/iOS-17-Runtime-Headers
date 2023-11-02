
@protocol MPSCNNInstanceNormalizationDataSource <NSObject, NSCopying>

@required

- (float*)beta;
- (float*)gamma;
- (NSString *)label;
- (unsigned long long)numberOfFeatureChannels;

@optional

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id <MTLDevice>)arg2;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)epsilon;
- (id)initWithCoder:(NSCoder *)arg1;
- (bool)load;
- (void)purge;
- (MPSCNNNormalizationGammaAndBetaState *)updateGammaAndBetaWithCommandBuffer:(id <MTLCommandBuffer>)arg1 instanceNormalizationStateBatch:(NSArray *)arg2;
- (bool)updateGammaAndBetaWithInstanceNormalizationStateBatch:(NSArray *)arg1;

@end
