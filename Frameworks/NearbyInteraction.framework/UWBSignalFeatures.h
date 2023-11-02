
@interface UWBSignalFeatures : NSObject <NSCopying, NSSecureCoding> {
    BiasEstimatorFeatures * _inputFeatures;
    BiasEstimatorOutputs * _outputs;
}

@property (nonatomic, copy) BiasEstimatorFeatures *inputFeatures;
@property (nonatomic, copy) BiasEstimatorOutputs *outputs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUWBSignalFeatures:(id)arg1;
- (id)inputFeatures;
- (bool)isEqual:(id)arg1;
- (id)orderedBiasEstimatorFeatutes;
- (id)outputs;
- (void)setInputFeatures:(id)arg1;
- (void)setOutputs:(id)arg1;

@end
