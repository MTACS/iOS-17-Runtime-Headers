
@interface ATXCandidateRelevanceModel : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)featureContributionsDuringInferenceDescriptionForContext:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;
- (id)featureContributionsDuringInferenceForContext:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;
- (id)featureImportanceDescriptionForFeaturizationManager:(id)arg1;
- (id)featureImportancesForFeaturizationManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)modelType;
- (unsigned long long)numberOfModelWeights;
- (unsigned long long)numberOfNonZeroModelWeights;
- (float)predictForContext:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;

@end
