
@interface PGInfrequentCountryFeatureExtractor : PGGraphFeatureExtractor

+ (id)_labelsForVersion:(long long)arg1;
+ (id)inferredUserLanguageCodesFromGraph:(id)arg1;

- (id)initWithError:(id*)arg1;
- (id)initWithFrequentCountryLabels:(id)arg1 version:(long long)arg2 graph:(id)arg3 error:(id*)arg4;
- (id)initWithVersion:(long long)arg1 graph:(id)arg2 error:(id*)arg3;

@end
