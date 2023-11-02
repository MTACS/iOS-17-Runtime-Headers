
@interface ATXNotificationsDedupeTracker : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _recordsTable;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)addNotificationId:(id)arg1;
- (id)init;
- (void)insertEvent:(long long)arg1 notificationID:(id)arg2;

@end
