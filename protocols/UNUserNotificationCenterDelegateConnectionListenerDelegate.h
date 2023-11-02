
@protocol UNUserNotificationCenterDelegateConnectionListenerDelegate <NSObject>

@required

- (void)didChangeSettings:(UNNotificationSettings *)arg1;
- (void)didOpenApplicationForResponse:(UNNotificationResponse *)arg1;
- (void)didReceiveNotificationResponse:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: UNNotificationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
