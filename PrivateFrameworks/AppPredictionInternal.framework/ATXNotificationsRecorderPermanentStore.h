
@interface ATXNotificationsRecorderPermanentStore : ATXAbstractVersionedDatabase {
    ATXNotificationsDedupeTracker * _dedupeTracker;
    ATXNotificationRecorder * _internalRecorder;
    NSDate * _lastUpdate;
    ATXLockscreenTracker * _lockscreenTracker;
    NSObject<OS_dispatch_source> * _timer;
}

@property (retain) NSDate *lastUpdate;

- (void).cxx_destruct;
- (void)addNotificationRecordInRecentStore:(id)arg1 timestamp:(id)arg2;
- (void)addNotificationsRecordWithMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)addNotificationsRecordWithSerializedMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (id)createCustomSchema;
- (id)getLockscreenBundleIds;
- (id)init;
- (void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3;
- (id)lastUpdate;
- (long long)latestVersion;
- (bool)migrate;
- (void)replay;
- (void)replayWithCallback:(id /* block */)arg1;
- (void)resetNotificationsHistory;
- (void)setLastUpdate:(id)arg1;

@end
