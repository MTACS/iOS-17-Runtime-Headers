
@interface ATXNotificationAndSuggestionDatabase : ATXAbstractVersionedDatabase {
    ATXNotificationManagementMAConstants * _mobileAssetConstants;
}

- (void).cxx_destruct;
- (id)_countNotificationsPerAppWithFilters:(id)arg1 stmtBinder:(id /* block */)arg2;
- (void)_pruneNotificationsBasedOnHardLimitsForBundleId:(id)arg1 XPCActivity:(id)arg2;
- (bool)_runMigrationSteps:(id)arg1;
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
- (id)getBookmarkDataFromName:(id)arg1;
- (id)getSmartPauseFeaturesForBundleIds:(id)arg1 sinceTimestamp:(double)arg2 positiveEngagementEnums:(id)arg3;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)arg1;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)arg1;
- (bool)hasSuggestionBeenShownForEntityId:(id)arg1 suggestionType:(long long)arg2 scope:(long long)arg3 sinceTimestamp:(double)arg4;
- (id)init;
- (void)insertNotificationFromEvent:(id)arg1 deliveryMethod:(long long)arg2 modeIdentifier:(id)arg3 deliveryReason:(id)arg4;
- (void)insertSuggestion:(id)arg1;
- (long long)latestVersion;
- (id)messageNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)arg1;
- (bool)migrate;
- (id)mostRecentActiveNotifications;
- (struct ATXNotificationAndSuggestionDatastorePerfMetrics { long long x1; long long x2; })notificationAndSuggestionDatastorePerfMetrics;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)arg1;
- (id)numProminentActiveNotificationsByGroupingColumn:(id)arg1;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)prepAndRunQuery:(id)arg1 batchSize:(long long)arg2 XPCActivity:(id)arg3 onPrep:(id /* block */)arg4 onRow:(id /* block */)arg5 onError:(id /* block */)arg6;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)arg1;
- (id)pruneNotificationsBeforeTimestamp:(double)arg1;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)arg1;
- (id)pruneSuggestionsBeforeTimestamp:(double)arg1;
- (double)receiveTimeStampOfFirstNotification;
- (id)resolutionsForNotifications:(id)arg1;
- (void)setAllNotificationsToClearedExceptProminent;
- (void)setAllNotificationsToModified;
- (void)setBookmarkData:(id)arg1 forName:(id)arg2;
- (id)suggestionEventTypeShownForEntityId:(id)arg1 suggestionType:(long long)arg2 scope:(long long)arg3 sinceTimestamp:(double)arg4;
- (id)telemetryDataForNotificationsFromTimestamp:(double)arg1 endTimestamp:(double)arg2;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (id)totalNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (void)updateNotificationFromEvent:(id)arg1;
- (void)updateNotificationUIForNotifications:(id)arg1 nextUI:(unsigned long long)arg2;
- (void)updateSuggestionFromEvent:(id)arg1;
- (id)vacuumDatabase;

@end
