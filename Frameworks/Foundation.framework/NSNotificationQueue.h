
@interface NSNotificationQueue : NSObject {
    NSMutableArray * _asapQueue;
    NSMutableArray * _idleQueue;
    NSNotificationCenter * _notificationCenter;
}

+ (id)defaultQueue;

- (void)_flushNotificationQueue;
- (void)dealloc;
- (void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1;

@end
