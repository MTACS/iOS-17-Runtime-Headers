
@interface ATXUserNotificationGroup : NSObject {
    long long  _hasCommunicationsNotifications;
    long long  _hasCriticalNotifications;
    long long  _hasTimeSensitiveNotifications;
    NSArray * _notifications;
    long long  _qualifiesForHighEngagement;
}

@property (nonatomic, readonly) NSArray *notifications;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (bool)hasCommunicationsNotifications;
- (bool)hasCriticalNotifications;
- (bool)hasTimeSensitiveNotifications;
- (id)initWithNotifications:(id)arg1;
- (double)latestNotificationTimestamp;
- (id)notifications;
- (bool)qualifiesForHighEngagement;
- (bool)runCachedCheckOnNotificationsWithIvar:(long long*)arg1 block:(id /* block */)arg2;

@end
