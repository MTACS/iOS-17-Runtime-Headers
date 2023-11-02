
@interface AXTelephonyNotificationHandler : VISAXNotificationHandler

- (void)_handleNotification:(id)arg1;
- (id)_notificationTypeDescription;
- (void)_startObserving;
- (void)_stopObserving;

@end
