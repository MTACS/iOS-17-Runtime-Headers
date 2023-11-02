
@interface ATXModeSetupPredictionMetricsLogger : NSObject

- (id)appSessionInterruptionsCalculatorSinceDate:(id)arg1 andForModeSemanticTypes:(id)arg2;
- (id)fetchAllRelevantModeSemanticTypesInLastSevenDays:(id)arg1;
- (id)getRecommendedAndCandidateAppsInAllowListForSemanticTypes:(id)arg1;
- (id)getRecommendedAndCandidateAppsInDenyListForSemanticTypes:(id)arg1;
- (id)globalAppSessionInterruptionsCalculatorSinceDate:(id)arg1;
- (id)init;
- (void)logMetrics;

@end
