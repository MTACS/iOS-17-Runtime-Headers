
@interface PLChangeHandlingNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> * _highNotifyQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _lowNotifyQueue;
    id /* block */  _notificationBlock;
    int  _notifyTokenHigh;
    int  _notifyTokenLow;
    NSObject<OS_dispatch_workloop> * _targetWorkloop;
    double  _throttleInterval;
}

@property (readonly, copy) id /* block */ notificationBlock;
@property (readonly) int notifyTokenHigh;
@property (readonly) int notifyTokenLow;

- (void).cxx_destruct;
- (void)_inq_handleHighPriorityNotification;
- (void)_inq_handleLowPriorityNotification;
- (void)_inq_handleThrottleTimer;
- (void)_inq_suspendIfThrottling;
- (void)_locked_startObservingRemoteNotificationsWithBlock:(id /* block */)arg1;
- (bool)_locked_stopObservingRemoteNotifications;
- (void)dealloc;
- (id)initWithLowPriorityThrottleInterval:(double)arg1 targetWorkloop:(id)arg2;
- (id /* block */)notificationBlock;
- (int)notifyTokenHigh;
- (int)notifyTokenLow;
- (void)startObservingRemoteNotificationsWithBlock:(id /* block */)arg1;
- (bool)stopObservingRemoteNotifications;

@end
