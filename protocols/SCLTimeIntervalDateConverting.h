
@protocol SCLTimeIntervalDateConverting <NSObject>

@required

- (NSCalendar *)calendar;
- (NSDateInterval *)canonicalDateIntervalForTimeInterval:(SCLTimeInterval *)arg1;
- (SCLScheduleTime *)scheduleTimeWithDate:(NSDate *)arg1;

@end
