
@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet * _recentNotifications;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notificationFired:(id)arg1;
- (void)_pruneOldRecents;
- (void)_repostNotificationFromSource:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)registerXPCHandler;

@end
