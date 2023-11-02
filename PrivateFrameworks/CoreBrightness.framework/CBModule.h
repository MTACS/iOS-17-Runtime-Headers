
@interface CBModule : NSObject {
    NSObject<OS_os_log> * _logHandle;
    id /* block */  _notificationBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (void)unregisterNotificationBlock;

@end
