
@interface PLServerChangePublisher : NSObject <PLChangePublisher> {
    _Atomic bool  _hasPendingWatchNotification;
    _Atomic long long  _postCount;
    _Atomic bool  _suppressWatchNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_postChangeHubNotification;
- (void)_postWatchUpdateNotification;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postWatchUpdateNotificationIfPending;
- (void)dealloc;
- (void)distributeChangeEvent:(id)arg1 transaction:(id)arg2;
- (id)init;
- (void)pauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (void)unpauseLaunchEventNotifications;

@end
