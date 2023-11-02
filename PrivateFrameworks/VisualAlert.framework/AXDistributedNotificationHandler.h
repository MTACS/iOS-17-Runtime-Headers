
@interface AXDistributedNotificationHandler : VISAXNotificationHandler

+ (void)postDistributedNotificationWithName:(id)arg1;

- (id)_notificationTypeDescription;
- (void)_startObserving;
- (void)_stopObserving;

@end
