
@interface ATXBiomePrivacyPruner : NSObject

- (void)pruneActivitySuggestionFeedbackStreamWithActivity:(id)arg1;
- (void)pruneAllStreamsWithActivity:(id)arg1;
- (void)pruneAppLaunchInferredModeStreamWithActivity:(id)arg1;
- (void)pruneBlendingStreamsWithActivity:(id)arg1;
- (void)pruneContextHeuristicsStreamWithActivity:(id)arg1;
- (void)pruneDigestOnboardingAppSelectionLoggingStreamWithActivity:(id)arg1;
- (void)pruneDigestOnboardingLoggingStreamWithActivity:(id)arg1;
- (void)pruneDigestOnboardingSuggestionLoggingStreamWithActivity:(id)arg1;
- (void)pruneERMStreamWithActivity:(id)arg1;
- (void)pruneFaceGalleryStreamWithActivity:(id)arg1;
- (void)pruneLightweightClientModelCacheUpdatesStreamWithActivity:(id)arg1;
- (void)pruneLocationStreamWithActivity:(id)arg1;
- (void)pruneMissedNotificationRankingStreamWithActivity:(id)arg1;
- (void)pruneModeConfigurationUIFlowLoggingStreamWithActivity:(id)arg1;
- (void)pruneNotificationDigestStreamWithActivity:(id)arg1;
- (void)pruneNotificationEventStreamWithActivity:(id)arg1;
- (void)pruneNotificationGroupEventStreamWithActivity:(id)arg1;
- (void)pruneNotificationSuggestionInteractionStreamWithActivity:(id)arg1;
- (void)pruneNotificationSuggestionStreamWithActivity:(id)arg1;
- (void)prunePredictionContextStreamWithActivity:(id)arg1;
- (void)prunePrivateStreamWithStreamIdentifier:(id)arg1 activity:(id)arg2;
- (void)pruneProactiveSuggestionUIFeedbackResultStreamWithActivity:(id)arg1;
- (void)pruneSpotlightUIStreamWithActivity:(id)arg1;
- (void)pruneWithStreamIdentifier:(id)arg1 activity:(id)arg2 config:(id)arg3 endTime:(double)arg4;

@end
