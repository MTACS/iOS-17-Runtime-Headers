
@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue

- (void)_didAddNotification:(id)arg1;
- (void)_didCancelNotifications;
- (void)_didProcessQueue;
- (void)_invokeEvent:(id)arg1;

@end
