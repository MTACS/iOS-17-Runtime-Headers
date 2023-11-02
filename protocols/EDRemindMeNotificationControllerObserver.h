
@protocol EDRemindMeNotificationControllerObserver <NSObject>

@required

- (void)controller:(EDRemindMeNotificationController *)arg1 messageTimerFired:(id <EDPersistedMessage>)arg2;

@end
