
@interface PGCityFeatureExtractor : MARelationCollectionFeatureExtractor

+ (id)unlocalizedCityNameFromCityName:(id)arg1 countryCode:(id)arg2 fromCityManager:(id)arg3;

- (id)initWithVersion:(long long)arg1 error:(id*)arg2;
- (id)labelsForVersion:(long long)arg1;

@end
