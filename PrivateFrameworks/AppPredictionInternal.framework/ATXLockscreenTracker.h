
@interface ATXLockscreenTracker : NSObject {
    ATXNotificationsActionPredictionRecord * _current;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _recordsTable;
}

- (void).cxx_destruct;
- (bool)addNotificationId:(id)arg1 withBundle:(id)arg2 timestamp:(id)arg3;
- (bool)addNotificationRecord:(id)arg1 timestamp:(id)arg2;
- (id)getBundleIds;
- (id)init;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (bool)isEmpty;

@end
