
@protocol CMMotionAlarmDelegateProtocol <NSObject>

@required

- (void)alarmDidFire:(CMMotionAlarm *)arg1 error:(NSError *)arg2;
- (void)alarmDidRegister:(CMMotionAlarm *)arg1 error:(NSError *)arg2;
- (void)alarmDidUnregister:(CMMotionAlarm *)arg1 error:(NSError *)arg2;
- (void)remoteAppLaunchedWithResult:(unsigned int)arg1 error:(NSError *)arg2;

@end
