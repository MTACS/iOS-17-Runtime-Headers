
@interface VNCoreMLFeatureValueObservation : VNObservation {
    NSString * _featureName;
    MLFeatureValue * _featureValue;
}

@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly, copy) MLFeatureValue *featureValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureName;
- (id)featureValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 featureName:(id)arg2 featureValue:(id)arg3;
- (id)vn_cloneObject;

@end
