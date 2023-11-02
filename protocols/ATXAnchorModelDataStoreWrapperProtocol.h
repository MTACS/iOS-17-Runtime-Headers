
@protocol ATXAnchorModelDataStoreWrapperProtocol <NSObject>

@required

+ (NSDictionary *)actionCandidateFeaturesFromActionEvent:(ATXAppIntentDuetEvent *)arg1 actionMetadata:(ATXAnchorModelPBActionMetadata *)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4;
+ (NSDictionary *)anchorFeaturesForAnchorOccurrence:(ATXDuetEvent *)arg1 anchor:(ATXAnchor *)arg2 anchorMetadata:(ATXAnchorModelPBAnchorMetadata *)arg3;
+ (NSDictionary *)appCandidateFeaturesFromAppLaunchEvent:(ATXAppLaunchDuetEvent *)arg1 appMetadata:(ATXAnchorModelPBAppLaunchMetadata *)arg2 appWasLaunched:(bool)arg3 appEngaged:(bool)arg4;
+ (NSDictionary *)linkActionCandidateFeaturesFromLinkActionEvent:(BMStoreEvent *)arg1 actionMetadata:(ATXAnchorModelPBLinkActionMetadata *)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4;
+ (NSDictionary *)modeCandidateFeaturesFromModeEvent:(BMStoreEvent *)arg1 modeMetadata:(ATXAnchorModelPBModeMetadata *)arg2 modeOccurred:(bool)arg3 modeEngaged:(bool)arg4;

- (ATXAppIntentDuetEvent *)appIntentDuetEventFromCandidateId:(NSString *)arg1 date:(NSDate *)arg2;
- (NSArray *)appIntentDuetEventsFromCandidateIds:(NSArray *)arg1 date:(NSDate *)arg2;
- (ATXAppLaunchDuetEvent *)appLaunchDuetEventFromCandidateId:(NSString *)arg1 date:(NSDate *)arg2;
- (NSArray *)appLaunchDuetEventsFromCandidateIds:(NSArray *)arg1 date:(NSDate *)arg2;
- (void)assignMetricsForTrainingResult:(ATXAnchorModelPhase1TrainingResult *)arg1 anchorType:(NSString *)arg2 anchorEventIdentifier:(NSString *)arg3 candidateId:(NSString *)arg4;
- (NSDate *)dateAnchorModelWasLastTrainedForAnchor:(ATXAnchor *)arg1;
- (NSDate *)dateOfFirstPositiveCandidateOccurrence:(NSString *)arg1 anchor:(ATXAnchor *)arg2 startDate:(NSDate *)arg3 limit:(unsigned long long)arg4;
- (unsigned long long)deleteSamplesForBundleIdsNotInList:(NSArray *)arg1;
- (unsigned long long)deleteSamplesThatAreMoreThan28DaysOld;
- (void)insertAnchorSuggestionOutcome:(unsigned long long)arg1 date:(NSDate *)arg2 anchorType:(NSString *)arg3 anchorEventIdentifier:(NSString *)arg4 candidateId:(NSString *)arg5;
- (BMStoreEvent *)linkActionBiomeEventFromCandidateId:(NSString *)arg1 date:(NSDate *)arg2;
- (NSArray *)linkActionBiomeEventsFromCandidateIds:(NSArray *)arg1 date:(NSDate *)arg2;
- (BMStoreEvent *)modeBiomeEventFromCandidateId:(NSString *)arg1 date:(NSDate *)arg2;
- (NSArray *)modeBiomeEventsFromCandidateIds:(NSArray *)arg1 date:(NSDate *)arg2;
- (long long)numCandidateIdOccurrencesInJointAnchorContext:(NSString *)arg1 anchor:(ATXAnchor *)arg2 anchorMetadata:(ATXAnchorModelPBAnchorMetadata *)arg3;
- (long long)numCandidateOccurrencesInAllContextsForCandidate:(NSString *)arg1;
- (long long)numCandidateOccurrencesInAllContextsForCandidateType:(NSString *)arg1;
- (long long)numCandidateOccurrencesInAnchorContextForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (long long)numCandidateOccurrencesInAnchorContextForCandidateType:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (long long)numUniqueAnchorOccurrencesForAnchor:(ATXAnchor *)arg1 candidateId:(NSString *)arg2;
- (long long)numUniqueAnchorOccurrencesForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (void)populateCachedCountsForCandidateIds:(NSSet *)arg1;
- (NSArray *)secondsAfterAnchorWhenCandidateOccurredForAnchor:(ATXAnchor *)arg1 candidateId:(NSString *)arg2 onlyConsiderFirstOccurrencePerAnchor:(bool)arg3;
- (double)timestampOfMostRecentRecordedAnchorOccurrenceForAnchor:(ATXAnchor *)arg1;
- (NSArray *)trainingDataForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2 replacementStringForNilStringValues:(NSString *)arg3;
- (NSArray *)trainingResultsForAnchor:(ATXAnchor *)arg1;
- (NSSet *)uniqueAnchorEventIdentifiersForAnchor:(ATXAnchor *)arg1;
- (NSSet *)uniqueCandidateIdsThatOccurredAfterAnchor:(ATXAnchor *)arg1;
- (NSSet *)uniqueCandidateIdsThatOccurredAfterAnchor:(ATXAnchor *)arg1 candidateType:(NSString *)arg2;
- (NSSet *)uniqueCandidateIdsThatOccurredAfterAnchor:(ATXAnchor *)arg1 candidateType:(NSString *)arg2 minOccurrences:(long long)arg3;
- (void)updateOrInsertActionTrainingSample:(ATXAppIntentDuetEvent *)arg1 featurizedAction:(ATXAnchorModelPBActionMetadata *)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4 anchorEvent:(ATXDuetEvent *)arg5 anchor:(ATXAnchor *)arg6;
- (void)updateOrInsertAnchorEvent:(ATXDuetEvent *)arg1 anchor:(ATXAnchor *)arg2 featureMetadata:(ATXAnchorModelPBAnchorMetadata *)arg3;
- (void)updateOrInsertAnchorModelTrainingResults:(NSArray *)arg1 anchor:(ATXAnchor *)arg2;
- (void)updateOrInsertAppTrainingSample:(ATXAppLaunchDuetEvent *)arg1 featurizedApp:(ATXAnchorModelPBAppLaunchMetadata *)arg2 appWasLaunched:(bool)arg3 appEngaged:(bool)arg4 anchorEvent:(ATXDuetEvent *)arg5 anchor:(ATXAnchor *)arg6;
- (void)updateOrInsertLinkActionTrainingSample:(BMStoreEvent *)arg1 featurizedAction:(ATXAnchorModelPBLinkActionMetadata *)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4 anchorEvent:(ATXDuetEvent *)arg5 anchor:(ATXAnchor *)arg6;
- (void)updateOrInsertModeTrainingSample:(BMStoreEvent *)arg1 featurizedMode:(ATXAnchorModelPBModeMetadata *)arg2 modeOccurred:(bool)arg3 modeEngaged:(bool)arg4 anchorEvent:(ATXDuetEvent *)arg5 anchor:(ATXAnchor *)arg6;

@end
