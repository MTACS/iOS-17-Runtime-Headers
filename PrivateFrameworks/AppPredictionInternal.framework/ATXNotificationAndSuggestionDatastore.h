
@interface ATXNotificationAndSuggestionDatastore : NSObject <ATXNotificationQuantityProviderProtocol, ATXNotificationResolutionSourceProtocol> {
    <BMBookmark> * _bookmark;
    ATXNotificationAndSuggestionDatabase * _db;
    BPSPublisher * _notificationDeliveryEventPublisher;
    BPSPublisher * _notificationEventPublisher;
    BPSPublisher * _notificationGroupEventPublisher;
    BPSPublisher * _suggestionInteractionEventPublisher;
    BPSPublisher * _suggestionPublisher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchBookmarkFromDb;
- (id)_notificationDeliveryEventPublisher;
- (id)_notificationEventPublisher;
- (id)_notificationGroupEventPublisher;
- (id)_serializeBookmark:(id)arg1;
- (id)_suggestionInteractionEventPublisher;
- (id)_suggestionPublisher;
- (id)_timeBasedMergePublisher:(id)arg1 withOtherPublishers:(id)arg2;
- (id)allNotificationsBetweenStartTimestamp:(id)arg1 endTimestamp:(id)arg2 limit:(unsigned long long)arg3;
- (id)allNotificationsFromBundleId:(id)arg1 sinceTimestamp:(double)arg2;
- (void)analyze;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)arg1;
- (id)currentActiveSuggestions;
- (id)deleteAllData;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)arg1;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)arg1;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)arg1 sinceTimestamp:(double)arg2;
- (id)feedbackHistoriesForKeys:(id)arg1;
- (id)getSmartPauseFeaturesForBundleIds:(id)arg1 sinceTimestamp:(double)arg2;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)arg1;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)arg1;
- (bool)hasSuggestionBeenShownForEntityId:(id)arg1 suggestionType:(long long)arg2 scope:(long long)arg3 sinceTimestamp:(double)arg4;
- (bool)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)arg1 sinceTimestamp:(double)arg2;
- (id)init;
- (id)initWithNotificationAndSuggestionDatabase:(id)arg1;
- (id)initWithNotificationAndSuggestionDatabase:(id)arg1 bookmark:(id)arg2;
- (id)initWithNotificationAndSuggestionDatabase:(id)arg1 bookmark:(id)arg2 notificationEventPublisher:(id)arg3 suggestionPublisher:(id)arg4 suggestionInteractionEventPublisher:(id)arg5;
- (id)initWithNotificationAndSuggestionDatabase:(id)arg1 bookmark:(id)arg2 notificationEventPublisher:(id)arg3 suggestionPublisher:(id)arg4 suggestionInteractionEventPublisher:(id)arg5 notificationGroupEventPublisher:(id)arg6;
- (id)mergedInputEventStream;
- (id)messageNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)arg1;
- (id)mostRecentActiveNotifications;
- (void)notificationAndSuggestionDatastorePerfMetricsLogging;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)arg1;
- (id)numProminentActiveNotificationsPerBundleId;
- (id)numProminentActiveNotificationsPerThreadId;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)pruneDatabaseWithXPCActivity:(id)arg1;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)arg1;
- (id)pruneNotificationsBeforeTimestamp:(double)arg1;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)arg1;
- (id)pruneSuggestionsBeforeTimestamp:(double)arg1;
- (double)receiveTimeStampOfFirstNotification;
- (id)resolutionsForNotifications:(id)arg1;
- (id)suggestionEventTypeShownForEntityId:(id)arg1 suggestionType:(long long)arg2 scope:(long long)arg3 sinceTimestamp:(double)arg4;
- (id)telemetryDataForNotificationsFromTimestamp:(double)arg1 endTimestamp:(double)arg2;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (id)totalNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (void)updateDatabase;
- (void)updateDatabaseForEvent:(id)arg1;
- (void)updateDatabaseForNotificationEvent:(id)arg1;
- (id)vacuumDatabase;

@end
