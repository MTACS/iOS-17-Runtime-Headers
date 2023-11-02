
@protocol SOClockTimerListening <NSObject>

@required

- (void)clockTimerObserver:(SOClockTimerObserver *)arg1 snapshotDidUpdateFrom:(AFClockTimerSnapshot *)arg2 to:(AFClockTimerSnapshot *)arg3;
- (void)clockTimerObserver:(SOClockTimerObserver *)arg1 timerDidDismiss:(NSUUID *)arg2;
- (void)clockTimerObserver:(SOClockTimerObserver *)arg1 timerDidFire:(NSUUID *)arg2;

@end
