
@protocol IMEventNotificationQueueDelegate <NSObject>

@optional

- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangeBusyState:(bool)arg2;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangePausedState:(bool)arg2;
- (void)eventNotificationQueueDidSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueueWillSendNotifications:(IMEventNotificationQueue *)arg1;

@end
