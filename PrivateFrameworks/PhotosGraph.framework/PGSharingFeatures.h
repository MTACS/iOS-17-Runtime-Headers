
@interface PGSharingFeatures : NSObject <NSSecureCoding> {
    NSArray * _assetFeatureVectors;
    NSArray * _classes;
    NSArray * _momentFeatureVectors;
}

@property (nonatomic, readonly) NSArray *assetFeatureVectors;
@property (nonatomic, readonly) NSArray *classes;
@property (nonatomic, readonly) NSArray *momentFeatureVectors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetFeatureVectors;
- (id)classes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)momentFeatureVectors;

@end
