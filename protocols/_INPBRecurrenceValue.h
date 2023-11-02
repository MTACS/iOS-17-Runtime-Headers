
@protocol _INPBRecurrenceValue <NSObject>

@required

- (int)StringAsFrequency:(NSString *)arg1;
- (int)StringAsWeeklyRecurrenceDays:(NSString *)arg1;
- (void)addWeeklyRecurrenceDays:(int)arg1;
- (void)clearWeeklyRecurrenceDays;
- (int)frequency;
- (NSString *)frequencyAsString:(int)arg1;
- (bool)hasFrequency;
- (bool)hasInterval;
- (bool)hasOrdinal;
- (unsigned long long)interval;
- (long long)ordinal;
- (void)setFrequency:(int)arg1;
- (void)setHasFrequency:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setOrdinal:(long long)arg1;
- (void)setWeeklyRecurrenceDays:(int*)arg1 count:(unsigned long long)arg2;
- (int*)weeklyRecurrenceDays;
- (NSString *)weeklyRecurrenceDaysAsString:(int)arg1;
- (int)weeklyRecurrenceDaysAtIndex:(unsigned long long)arg1;
- (unsigned long long)weeklyRecurrenceDaysCount;

@end
