
@interface CBContainer : NSObject {
    NSObject<OS_os_log> * _logHandle;
    id /* block */  _notificationBlock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)dealloc;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)unregisterNotificationBlock;
- (void)unscheduleWithDispatchQueue:(id)arg1;

@end
