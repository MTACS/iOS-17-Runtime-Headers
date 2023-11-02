
@interface WKUserNotificationInterfaceController : WKInterfaceController

- (void)_didReceiveNotification:(id)arg1 remoteNotification:(id)arg2 localNotification:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)didReceiveLocalNotification:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didReceiveNotification:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didReceiveRemoteNotification:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;

@end
