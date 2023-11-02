
@interface PGAssetCollectionFeatureProvider : NSObject <NSSecureCoding> {
    NSArray * _featureSpecifications;
}

@property (nonatomic, readonly) NSArray *featureSpecifications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureInstancesWithMomentNode:(id)arg1 atMomentIngest:(bool)arg2;
- (id)featureSpecifications;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureSpecifications:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
