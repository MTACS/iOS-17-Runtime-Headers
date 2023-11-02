
@protocol MKFTimerTrigger <MKFTrigger, MKFTimerTriggerPublicExtensions>

@required

- (MKFTimerTriggerDatabaseID *)databaseID;
- (NSDate *)fireDate;
- (NSTimeZone *)fireDateTimeZone;
- (NSDateComponents *)fireRepeatInterval;
- (NSNumber *)recurrenceDays;
- (void)setFireDate:(NSDate *)arg1;
- (void)setFireDateTimeZone:(NSTimeZone *)arg1;
- (void)setFireRepeatInterval:(NSDateComponents *)arg1;
- (void)setRecurrenceDays:(NSNumber *)arg1;
- (void)setSignificantEvent:(NSString *)arg1;
- (void)setSignificantEventOffsetSeconds:(NSNumber *)arg1;
- (NSString *)significantEvent;
- (NSNumber *)significantEventOffsetSeconds;

@end
