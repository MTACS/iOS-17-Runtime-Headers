
@protocol FISleepDataProviderDelegate <NSObject>

@required

- (NSCalendar *)currentCalendar;
- (NSDate *)currentDate;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)sleepDataProviderUserDayDidUpdate;

@end
