
@protocol SBAmbientScheduledAlarmObserverDelegate <NSObject>

@required

- (void)alarmDidResetForAmbientScheduledAlarmObserver:(SBAmbientScheduledAlarmObserver *)arg1;
- (void)scheduledAlarmObserver:(SBAmbientScheduledAlarmObserver *)arg1 timerFiredForReason:(NSString *)arg2;
- (NSDictionary *)timeIntervalsWithReasonsForScheduledTimersForAmbientScheduledAlarmObserver:(SBAmbientScheduledAlarmObserver *)arg1;

@end
