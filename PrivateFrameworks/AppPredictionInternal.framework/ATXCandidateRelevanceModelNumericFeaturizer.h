
@interface ATXCandidateRelevanceModelNumericFeaturizer : ATXCandidateRelevanceModelFeaturizer

- (unsigned long long)dimensions;
- (id)featureVectorForContext:(id)arg1 candidate:(id)arg2;
- (id)immutableCopy;
- (id)numericFeatureValueForContext:(id)arg1 candidate:(id)arg2;
- (void)observeContext:(id)arg1 candidate:(id)arg2;

@end
