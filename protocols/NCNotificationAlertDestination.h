
@protocol NCNotificationAlertDestination <NCNotificationDestination>

@required

- (<NCNotificationAlertDestinationDelegate> *)delegate;
- (bool)isAlertDestination;
- (void)setDelegate:(id <NCNotificationAlertDestinationDelegate>)arg1;

@optional

- (void)prepareDestinationToReceiveCriticalNotificationRequest:(NCNotificationRequest *)arg1;

@end
