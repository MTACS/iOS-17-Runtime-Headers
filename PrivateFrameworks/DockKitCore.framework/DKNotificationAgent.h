
@interface DKNotificationAgent : NSObject {
    NotificationAgent * _agent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)deregisterNotifications;
- (id)init;
- (bool)isTracking;
- (bool)registerNotifications:(id /* block */)arg1;

@end
