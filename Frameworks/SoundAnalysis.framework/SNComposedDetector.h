
@interface SNComposedDetector : NSObject <NSCopying, NSSecureCoding> {
    MLModel * _detectorHeadModel;
    NSString * _featureExtractorType;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
