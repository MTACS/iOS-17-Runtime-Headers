
@interface CBFilter : NSObject {
    NSObject<OS_os_log> * _logHandle;
    id /* block */  _notificationBlock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)filterEvent:(id)arg1;
- (id)filterEvents:(id)arg1;
- (void)forgetDataForService:(struct __IOHIDServiceClient { }*)arg1;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)unregisterNotificationBlock;
- (void)unscheduleWithDispatchQueue:(id)arg1;

@end
