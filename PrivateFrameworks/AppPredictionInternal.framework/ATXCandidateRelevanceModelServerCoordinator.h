
@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    NSArray * _configs;
    ATXCoreDuetContextHelper * _contextHelper;
    NSUserDefaults * _defaults;
    ATXTimeBucketedRateLimiter * _rateLimiter;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

+ (id)sharedInstance;
+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)arg1;

- (void).cxx_destruct;
- (void)_syncForTests;
- (id /* block */)callbackForAnchor:(id)arg1;
- (id)currentDuetEventForAnchor:(id)arg1;
- (void)dealloc;
- (id)exitNotificationIdentifierForAnchor:(id)arg1;
- (void)handleAnchorNotificationForAnchor:(id)arg1;
- (void)handleLOIEntranceNotification;
- (void)handleLOIExitNotification;
- (void)handleMicrolocationVisitNotification;
- (id)init;
- (id)initWithContextHelper:(id)arg1 configs:(id)arg2 defaults:(id)arg3;
- (id)lastCacheUpdateDateForConfig:(id)arg1;
- (id)notificationIdentifierForAnchor:(id)arg1;
- (void)registerAnchorEventNotificationsForAnchor:(id)arg1;
- (void)registerForSupportedAnchorNotificatons;
- (void)sendSuggestionsToBlendingForConfig:(id)arg1;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)arg1;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)setCacheUpdateDate:(id)arg1 forConfig:(id)arg2;
- (void)start;
- (id)supportedAnchorsForNotifications;
- (void)unregisterAnchorEventListenerForAnchor:(id)arg1;
- (void)unregisterAnchorEventListeners;

@end
