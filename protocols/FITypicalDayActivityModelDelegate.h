
@protocol FITypicalDayActivityModelDelegate <NSObject>

@required

- (NSCalendar *)currentCalendar;
- (NSDate *)currentDate;
- (bool)enumerateActivitySummariesFromDateComponents:(void *)arg1 toDateComponents:(void *)arg2 error:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: NSDateComponents *, NSDateComponents *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKActivitySummary *, void*
- (NSDate *)firstOnWristDateToday;

@optional

- (unsigned long long)bestMoveStreak;
- (double)bestMoveValue;
- (NSDate *)clientProvidedDefaultEndOfDay;
- (NSDate *)clientProvidedUserEndOfDay;
- (NSDate *)clientProvidedUserStartOfDay;
- (unsigned long long)currentMoveStreak;
- (unsigned long long)totalMoveGoalsAttempted;
- (void)typicalDayActivityModelDidUpdate;

@end
