
@protocol EDRemindMeNotificationControllerEventDelegate <NSObject>

@required

- (void)controller:(EDRemindMeNotificationController *)arg1 scheduleAlarmForMessage:(id <EDPersistedMessage>)arg2 date:(NSDate *)arg3;

@end
