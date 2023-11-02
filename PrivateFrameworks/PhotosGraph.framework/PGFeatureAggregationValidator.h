
@interface PGFeatureAggregationValidator : PGFeatureValidator {
    long long  _featureExtractorType;
}

@property (nonatomic, readonly) long long featureExtractorType;

- (id)_composeFeatureExtractorWithGraph:(id)arg1 error:(id*)arg2;
- (long long)featureExtractorType;
- (long long)featureValidatorType;
- (id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureExtractorType:(long long)arg3 featureName:(id)arg4;
- (long long)isValidEntity:(id)arg1 error:(id*)arg2;
- (long long)isValidEntity:(id)arg1 graph:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4;

@end
