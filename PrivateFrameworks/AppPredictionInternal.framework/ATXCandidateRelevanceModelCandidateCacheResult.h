
@interface ATXCandidateRelevanceModelCandidateCacheResult : NSObject {
    NSArray * _candidates;
    ATXCandidateRelevanceModelFeaturizationManager * _featurizationManager;
}

@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) ATXCandidateRelevanceModelFeaturizationManager *featurizationManager;

- (void).cxx_destruct;
- (id)candidates;
- (id)featurizationManager;
- (id)initWithCandidates:(id)arg1 featurizationManager:(id)arg2;

@end
