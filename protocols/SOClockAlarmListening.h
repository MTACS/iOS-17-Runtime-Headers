
@protocol SOClockAlarmListening <NSObject>

@required

- (void)clockAlarmObserver:(SOClockAlarmObserver *)arg1 alarmDidDismiss:(NSUUID *)arg2;
- (void)clockAlarmObserver:(SOClockAlarmObserver *)arg1 alarmDidFire:(NSUUID *)arg2;
- (void)clockAlarmObserver:(SOClockAlarmObserver *)arg1 snapshotDidUpdateFrom:(AFClockAlarmSnapshot *)arg2 to:(AFClockAlarmSnapshot *)arg3;

@end
