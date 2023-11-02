
@interface _RECrossedFeature : REFeature {
    unsigned long long  _bitCount;
    REFeatureSet * _dependentFeatures;
    unsigned long long  _featureType;
    NSArray * _features;
    unsigned long long  _hash;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *features;

- (void).cxx_destruct;
- (long long)_bitCount;
- (void)_computeHash;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_rootFeatures;
- (void)_updateFeaturesArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)featureType;
- (id)features;
- (unsigned long long)hash;
- (id)initWithFeatures:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
