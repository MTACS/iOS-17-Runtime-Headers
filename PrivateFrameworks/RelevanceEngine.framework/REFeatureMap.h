
@interface REFeatureMap : NSObject <MLFeatureProvider, NSCopying, _REFeatureMapLoggingProperties> {
    unsigned long long  _hash;
    NSDictionary * _indices;
    unsigned long long * _values;
}

@property (nonatomic, readonly) NSSet *allFeatures;
@property (nonatomic, readonly) unsigned long long featureCount;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) NSArray *loggingValues;

+ (id)defaultFeatureName;

- (void).cxx_destruct;
- (unsigned long long)_count;
- (id)allFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateBoolFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateDoubleFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateEmptyFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateInt64FeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateInt64FeaturesUsingIndexedBlock:(id /* block */)arg1 emptyFeatureBlock:(id /* block */)arg2;
- (void)enumerateStringFeaturesUsingBlock:(id /* block */)arg1;
- (unsigned long long)featureCount;
- (id)featureNames;
- (id)featureValueForFeature:(id)arg1;
- (id)featureValueForName:(id)arg1;
- (bool)hasValueForFeature:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeatureMap:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)loggingValues;
- (void)removeAllValues;
- (void)removeValueForFeature:(id)arg1;
- (void)setFeatureValue:(id)arg1 forFeature:(id)arg2;
- (void)setValue:(unsigned long long)arg1 forFeature:(id)arg2;
- (unsigned long long)valueForFeature:(id)arg1;

@end
