
@interface ATXActionNotificationServer : NSObject <UNUserNotificationCenterDelegate, WFWorkflowRunnerClientDelegate> {
    WFSuggestionsWorkflowRunnerClient * _currentWorkflowRunnerClient;
    ATXEngagementRecordManager * _engagementRecordManager;
    UNUserNotificationCenter * _notificationCenter;
    PETScalarEventTracker * _notifyErrorTracker;
    PETScalarEventTracker * _notifyInitTracker;
    PETScalarEventTracker * _notifySuccessTracker;
    PETScalarEventTracker * _removeTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_requestIdentifierForBundleId:(id)arg1;
+ (id)bundleIdFromRequestIdentifier:(id)arg1;
+ (id)localizedContentBodyStringWithString:(id)arg1 forAction:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_actionKeyFromNotification:(id)arg1;
- (id)_blendingCacheUpdateUUIDFromNotification:(id)arg1;
- (bool)_isRTL;
- (id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 languageCode:(id)arg3;
- (void)_postNotificationForProactiveSuggestion:(id)arg1 blendingCacheUpdateUUID:(id)arg2;
- (void)_postTestNotification;
- (void)_postTestNotificationWithPredictionCount:(long long)arg1;
- (void)_removeNotificationWithIdentifier:(id)arg1 trackEvent:(bool)arg2;
- (void)_sendLockscreenEventToBiomeWithDate:(id)arg1 eventType:(int)arg2 blendingCacheId:(id)arg3 suggestionIds:(id)arg4;
- (void)_setupNotifications;
- (id)_unarchiveProactiveSuggestionFromNotification:(id)arg1;
- (unsigned long long)deliveredNotificationCount;
- (bool)hasLockscreenPrediction;
- (id)init;
- (void)postDemoOrDebugNotificationForATXAction:(id)arg1;
- (void)postNotificationForATXAction:(id)arg1;
- (void)postNotificationForProactiveSuggestion:(id)arg1 blendingCacheUpdateUUID:(id)arg2;
- (id)proactiveSuggestionsCurrentlyOnLockscreen;
- (void)removeActionPredictionNotificationsMatchingAction:(id)arg1;
- (void)removeAllActionPredictionNotificationsAndTrackEvent:(bool)arg1 recordFeedback:(bool)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
