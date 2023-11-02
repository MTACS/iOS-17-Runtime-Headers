
@protocol _INPBLocalDate <NSObject>

@required

- (int)StringAsDayOfWeek:(NSString *)arg1;
- (long long)dayOfMonth;
- (int)dayOfWeek;
- (NSString *)dayOfWeekAsString:(int)arg1;
- (bool)hasDayOfMonth;
- (bool)hasDayOfWeek;
- (bool)hasMonth;
- (bool)hasYear;
- (long long)month;
- (void)setDayOfMonth:(long long)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setHasDayOfMonth:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setMonth:(long long)arg1;
- (void)setYear:(long long)arg1;
- (long long)year;

@end
