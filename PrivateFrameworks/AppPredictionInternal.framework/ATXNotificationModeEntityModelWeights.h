
@interface ATXNotificationModeEntityModelWeights : NSObject {
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
    NSDictionary * _notificationModeEntityModelWeights;
}

- (void).cxx_destruct;
- (id)abGroup;
- (double)appCategoryScoreComponent;
- (double)appClassConditionalProbabilityComponent;
- (double)appGlobalOccurrencesComponent;
- (double)appGlobalPopularityComponent;
- (double)appModePopularityComponent;
- (double)appPosteriorProbabilityComponent;
- (double)bias;
- (double)clearClassConditionalProbabilityComponent;
- (double)clearGlobalPopularityComponent;
- (double)clearModePopularityComponent;
- (double)clearPosteriorProbabilityComponent;
- (double)contactClassConditionalProbabilityComponent;
- (double)contactGlobalOccurrencesComponent;
- (double)contactGlobalPopularityComponent;
- (double)contactIsFavoriteComponent;
- (double)contactIsVIPComponent;
- (double)contactPosteriorProbabilityComponent;
- (double)dismissClassConditionalProbabilityComponent;
- (double)dismissGlobalPopularityComponent;
- (double)dismissModePopularityComponent;
- (double)dismissPosteriorProbabilityComponent;
- (double)engagementClassConditionalProbabilityComponent;
- (double)engagementGlobalPopularityComponent;
- (double)engagementModePopularityComponent;
- (double)engagementPosteriorProbabilityComponent;
- (double)hiddenClassConditionalProbabilityComponent;
- (double)hiddenGlobalPopularityComponent;
- (double)hiddenModePopularityComponent;
- (double)hiddenPosteriorProbabilityComponent;
- (id)init;
- (int)numOfDays;

@end
