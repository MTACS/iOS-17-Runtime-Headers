
@interface ATXNotificationRecorder : NSObject {
    _ATXAppLaunchHistogram * _appHistory;
    NSMutableString * _logCache;
    ATXNotificationsLogger * _logger;
    _ATXAppLaunchCategoricalHistogram * _notificationsHistory;
    ATXScreenRepresentation * _offScreen;
    ATXScreenRepresentation * _onLockScreen;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _recordsTable;
    NSMutableDictionary * _relatedApps;
}

- (void).cxx_destruct;
- (void)_addNotificationsRecord:(id)arg1;
- (void)_appendRecordToCache:(id)arg1;
- (void)clearAllAtTimestamp:(id)arg1;
- (void)expungeExpiredRecords;
- (void)expungeExpiredRecordsWithCacheOption:(bool)arg1;
- (id)flushLogCache;
- (id)flushRecords;
- (void)getPositionForId:(id)arg1 position:(unsigned long long*)arg2 onlockscreen:(bool*)arg3;
- (id)init;
- (void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 enableLogCache:(bool)arg4;
- (void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3;
- (void)logRecordInAggd:(id)arg1;
- (void)reset;
- (void)resetNotificationsHistory;

@end
