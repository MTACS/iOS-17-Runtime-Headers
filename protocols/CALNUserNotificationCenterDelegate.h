
@protocol CALNUserNotificationCenterDelegate

@required

- (void)userNotificationCenter:(void *)arg1 didReceiveNotificationResponse:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: <CALNUserNotificationCenter> *, CALNNotificationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)userNotificationCenter:(void *)arg1 willPresentNotification:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: <CALNUserNotificationCenter> *, CALNNotification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
