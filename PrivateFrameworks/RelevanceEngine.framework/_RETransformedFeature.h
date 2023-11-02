
@interface _RETransformedFeature : REFeature {
    REFeatureSet * _features;
    unsigned long long  _hash;
    NSString * _name;
    REFeatureTransformer * _transformer;
}

@property (nonatomic, readonly) REFeatureSet *features;
@property (nonatomic, readonly) REFeatureTransformer *transformer;

- (void).cxx_destruct;
- (long long)_bitCount;
- (void)_computeHash;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_rootFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)featureType;
- (id)features;
- (unsigned long long)hash;
- (id)initWithTransformer:(id)arg1 features:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)transformer;

@end
