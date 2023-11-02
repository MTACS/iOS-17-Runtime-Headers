
@interface ATXAnchorModelTrainingDatasetBuilder : NSObject <ATXAnchorModelTrainingDatasetBuilderProtocol> {
    <ATXAnchorModelDataStoreWrapperProtocol> * _dataStoreWrapper;
    ATXAnchorModelEventHarvester * _harvester;
    ATXXPCActivity * _xpcActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fetchAnchorEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (void).cxx_destruct;
- (id)actionCandidateIdsToTargetForAnchor:(id)arg1 excludeCandidateIdsFromActions:(id)arg2;
- (long long)addActionEventsToDatabaseAfterAnchorEvent:(id)arg1 anchor:(id)arg2;
- (void)addAnchorEventToDatabase:(id)arg1 anchor:(id)arg2;
- (long long)addAppEventsToDatabaseAfterAnchorEvent:(id)arg1 anchor:(id)arg2;
- (long long)addCandidateTrainingSamplesToDatabaseForAnchor:(id)arg1 anchorEvents:(id)arg2;
- (long long)addFeaturizedActionToDatabase:(id)arg1 featurizedAction:(id)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4 anchorEvent:(id)arg5 anchor:(id)arg6;
- (long long)addFeaturizedAppToDatabase:(id)arg1 featurizedApp:(id)arg2 appWasLaunched:(bool)arg3 appEngaged:(bool)arg4 anchorEvent:(id)arg5 anchor:(id)arg6;
- (long long)addFeaturizedLinkActionToDatabase:(id)arg1 featurizedAction:(id)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4 anchorEvent:(id)arg5 anchor:(id)arg6;
- (long long)addFeaturizedModeToDatabase:(id)arg1 featurizedMode:(id)arg2 modeOccurred:(bool)arg3 modeEngaged:(bool)arg4 anchorEvent:(id)arg5 anchor:(id)arg6;
- (long long)addLinkActionEventsToDatabaseAfterAnchorEvent:(id)arg1 anchor:(id)arg2;
- (long long)addModeEventsToDatabaseAfterAnchorEvent:(id)arg1 anchor:(id)arg2;
- (long long)addNewTrainingSamplesToDatabase;
- (long long)addNewTrainingSamplesToDatabaseForAnchor:(id)arg1;
- (long long)addNewTrainingSamplesToDatabaseForAnchorEvent:(id)arg1 anchor:(id)arg2;
- (bool)anchorOccurredLongEnoughAgo:(id)arg1 anchor:(id)arg2;
- (id)anchorsToIncludeInTrainingData;
- (id)appCandidateIdsToTargetForAnchor:(id)arg1 excludeCandidateIdsFromAppLaunches:(id)arg2;
- (id)appLaunchEventsFromNowPlayingStreamForAnchor:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)candidateIdSetFromAppIntentEvents:(id)arg1;
- (id)candidateIdSetFromAppLaunchDuetEvents:(id)arg1;
- (id)candidateIdSetFromLinkActionEvents:(id)arg1;
- (id)candidateIdSetFromModeEvents:(id)arg1;
- (unsigned long long)cleanupDatasetForPrivacyPreservation;
- (id)featurizeActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (id)featurizeAppEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 eventFeaturizer:(id)arg3;
- (id)featurizeLinkActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 eventFeaturizer:(id)arg3;
- (id)featurizeModeEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 eventFeaturizer:(id)arg3;
- (id)fetchNegativeActionEventsAfterAnchorDate:(id)arg1 anchor:(id)arg2 positiveActionEvents:(id)arg3;
- (id)fetchNegativeAppEventsAfterAnchorDate:(id)arg1 anchor:(id)arg2 positiveAppEvents:(id)arg3;
- (id)fetchNegativeLinkActionEventsAfterAnchorDate:(id)arg1 anchor:(id)arg2 positiveLinkActionEvents:(id)arg3;
- (id)fetchNegativeModeEventsAfterAnchorDate:(id)arg1 anchor:(id)arg2 positiveModeEvents:(id)arg3;
- (id)fetchNewAnchorEventsForAnchor:(id)arg1;
- (id)fetchPositiveActionEventsAfterAnchorDate:(id)arg1 durationOfAnchorEvent:(double)arg2;
- (id)fetchPositiveAppEventsAfterAnchorDate:(id)arg1 durationOfAnchorEvent:(double)arg2 anchor:(id)arg3;
- (id)fetchPositiveLinkActionEventsAfterAnchorDate:(id)arg1 durationOfAnchorEvent:(double)arg2 anchor:(id)arg3;
- (id)fetchPositiveModeEventsAfterAnchorDate:(id)arg1 durationOfAnchorEvent:(double)arg2 anchor:(id)arg3;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (id)initWithXPCActivity:(id)arg1 dataStoreWrapper:(id)arg2 harvester:(id)arg3;
- (id)linkActionCandidateIdsToTargetForAnchor:(id)arg1 excludeCandidateIdsFromLinkActions:(id)arg2;
- (id)modeCandidateIdsToTargetForAnchor:(id)arg1 excludeCandidateIdsFromModes:(id)arg2;
- (id)queryStartDateForAnchor:(id)arg1;
- (double)secondsAfterAnchorToCollectPositiveSamples:(id)arg1;
- (bool)shouldCreateTrainingSamplesForAnchorEvent:(id)arg1 anchor:(id)arg2;
- (id)targetedNegativeActionSamplesForAnchor:(id)arg1 anchorOccurrenceDate:(id)arg2 eventsToExclude:(id)arg3;
- (id)targetedNegativeAppSamplesForAnchor:(id)arg1 anchorOccurrenceDate:(id)arg2 eventsToExclude:(id)arg3;
- (id)targetedNegativeLinkActionSamplesForAnchor:(id)arg1 anchorOccurrenceDate:(id)arg2 eventsToExclude:(id)arg3;
- (id)targetedNegativeModeSamplesForAnchor:(id)arg1 anchorOccurrenceDate:(id)arg2 eventsToExclude:(id)arg3;

@end
