
@protocol _INPBDateTime <NSObject>

@required

- (int)StringAsCalendarSystem:(NSString *)arg1;
- (int)calendarSystem;
- (NSString *)calendarSystemAsString:(int)arg1;
- (_INPBLocalDate *)date;
- (bool)hasCalendarSystem;
- (bool)hasDate;
- (bool)hasTime;
- (bool)hasTimeZoneID;
- (void)setCalendarSystem:(int)arg1;
- (void)setDate:(_INPBLocalDate *)arg1;
- (void)setHasCalendarSystem:(bool)arg1;
- (void)setTime:(_INPBLocalTime *)arg1;
- (void)setTimeZoneID:(NSString *)arg1;
- (_INPBLocalTime *)time;
- (NSString *)timeZoneID;

@end
