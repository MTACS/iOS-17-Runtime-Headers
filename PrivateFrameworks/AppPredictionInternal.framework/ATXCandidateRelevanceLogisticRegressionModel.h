
@interface ATXCandidateRelevanceLogisticRegressionModel : ATXCandidateRelevanceModel {
    PMLLogisticRegressionModel * _model;
}

@property (nonatomic, readonly) PMLLogisticRegressionModel *model;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureContributionsDuringInferenceDescriptionForContext:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;
- (id)featureContributionsDuringInferenceForContext:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;
- (id)featureImportanceDescriptionForFeaturizationManager:(id)arg1;
- (id)featureImportancesForFeaturizationManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXCandidateRelevanceLogisticRegressionModel:(id)arg1;
- (id)model;
- (unsigned long long)modelType;
- (unsigned long long)numberOfModelWeights;
- (unsigned long long)numberOfNonZeroModelWeights;
- (float)predictForContext:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;

@end
