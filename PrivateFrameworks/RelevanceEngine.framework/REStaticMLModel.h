
@interface REStaticMLModel : REMLModel

+ (unsigned long long)featureBitWidth;

- (id)_predictWithFeatures:(id)arg1;
- (float)_relevanceForFeatureMap:(id)arg1;
- (float)_usageForFeatureSet:(id)arg1;

@end
