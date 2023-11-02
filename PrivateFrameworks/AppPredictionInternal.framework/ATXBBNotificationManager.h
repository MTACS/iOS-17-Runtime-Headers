
@interface ATXBBNotificationManager : NSObject {
    bool  _debugOutput;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _recentNotifications;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_purgeNotificationsWithMinDate:(id)arg1;
- (void)addNotificationForBundleId:(id)arg1 withPublicationDate:(id)arg2;
- (id)init;
- (id)initWithDebugOutput:(bool)arg1;
- (id)recentNotifications;

@end
