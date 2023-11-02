
@protocol ATXCandidateRelevanceModelTrainingPlanProtocol

@required

- (id)initWithParameters:(NSDictionary *)arg1;
- (ATXCandidateRelevanceModel *)trainModelForDataPoints:(NSArray *)arg1 candidate:(ATXCandidate *)arg2 featurizationManager:(ATXCandidateRelevanceModelFeaturizationManager *)arg3;

@end
