
@interface PGGraphRelationsFeatureValidator : PGFeatureValidator

- (long long)featureValidatorType;
- (long long)isValidEntity:(id)arg1 error:(id*)arg2;
- (long long)isValidEntity:(id)arg1 graph:(id)arg2 error:(id*)arg3;

@end
