
@interface FHSmartCompoundFeature : NSObject <NSSecureCoding> {
    NSString * _compoundFeatureKey;
    NSString * _featureKey;
    NSString * _locale;
    NSArray * _rankedValues;
}

@property (nonatomic, readonly, copy) NSString *compoundFeatureKey;
@property (nonatomic, readonly, copy) NSString *featureKey;
@property (nonatomic, readonly, copy) NSString *locale;
@property (nonatomic, readonly, copy) NSArray *rankedValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compoundFeatureKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompoundFeatureKey:(id)arg1 smartCompoundFeatures:(id)arg2 locale:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)rankedValues;

@end
