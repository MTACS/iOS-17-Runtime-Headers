
@protocol _INPBLocalTime <NSObject>

@required

- (bool)hasHourOfDay;
- (bool)hasMillisOfSecond;
- (bool)hasMinuteOfHour;
- (bool)hasSecondOfMinute;
- (long long)hourOfDay;
- (long long)millisOfSecond;
- (long long)minuteOfHour;
- (long long)secondOfMinute;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasMillisOfSecond:(bool)arg1;
- (void)setHasMinuteOfHour:(bool)arg1;
- (void)setHasSecondOfMinute:(bool)arg1;
- (void)setHourOfDay:(long long)arg1;
- (void)setMillisOfSecond:(long long)arg1;
- (void)setMinuteOfHour:(long long)arg1;
- (void)setSecondOfMinute:(long long)arg1;

@end
