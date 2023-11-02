
@interface SHCustomCatalogConfiguration : SHCatalogConfiguration {
    long long  _algorithm;
    long long  _density;
    bool  _supportsSignatureTracking;
}

@property (nonatomic) long long algorithm;
@property (nonatomic) long long density;
@property (nonatomic) bool supportsSignatureTracking;

+ (double)maximumSearchableQuerySignatureDuration;
+ (double)minimumQuerySignatureDurationForTracking;
+ (bool)supportsSecureCoding;

- (long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)density;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAlgorithm:(long long)arg1;
- (void)setDensity:(long long)arg1;
- (void)setSupportsSignatureTracking:(bool)arg1;
- (bool)supportsSignatureTracking;

@end
