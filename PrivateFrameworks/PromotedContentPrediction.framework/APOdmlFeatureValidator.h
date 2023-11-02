
@interface APOdmlFeatureValidator : NSObject

- (id)imputeFeature:(id)arg1;
- (id)imputeMissingFeatures:(id)arg1;
- (id)missingFeatures:(id)arg1 inputDescriptions:(id)arg2;
- (void)reportMissingFeatureError:(id)arg1;
- (id)validateFeatureProvider:(id)arg1 inputDescriptions:(id)arg2;
- (id)validateFeatures:(id)arg1 predictionModel:(id)arg2;

@end
