
@interface PGInfrequentCityFeatureExtractor : MARelationCollectionFeatureExtractor

- (id)initWithError:(id*)arg1;
- (id)initWithFrequentCityLabels:(id)arg1 version:(long long)arg2 graph:(id)arg3 cityManager:(id)arg4 error:(id*)arg5;
- (id)initWithFrequentCityLabels:(id)arg1 version:(long long)arg2 graph:(id)arg3 error:(id*)arg4;
- (id)initWithVersion:(long long)arg1 graph:(id)arg2 error:(id*)arg3;
- (id)labelsForVersion:(long long)arg1;

@end
