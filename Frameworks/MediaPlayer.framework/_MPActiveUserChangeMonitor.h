
@interface _MPActiveUserChangeMonitor : NSObject {
    <_MPActiveUserChangeMonitorDelegate> * _delegate;
    NSSet * _expectedNotifications;
    NSObject<OS_dispatch_source> * _notificationTimer;
    NSMutableSet * _receivedNotifications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic) <_MPActiveUserChangeMonitorDelegate> *delegate;
@property (nonatomic, readonly) NSSet *expectedNotifications;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *notificationTimer;
@property (nonatomic, retain) NSMutableSet *receivedNotifications;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } stateLock;

- (void).cxx_destruct;
- (void)_cancelNotificationTimerWithReason:(id)arg1;
- (void)_startNotificationTimerWithEventHandler:(id /* block */)arg1;
- (id)delegate;
- (id)expectedNotifications;
- (void)ingestNotificationName:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)notificationTimer;
- (id)receivedNotifications;
- (void)setDelegate:(id)arg1;
- (void)setNotificationTimer:(id)arg1;
- (void)setReceivedNotifications:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })stateLock;

@end
