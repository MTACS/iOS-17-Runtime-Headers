
@protocol _INPBDateTimeRangeValue <NSObject>

@required

- (bool)allDay;
- (long long)endCalendar;
- (_INPBDateTime *)endDateTime;
- (bool)hasAllDay;
- (bool)hasEndCalendar;
- (bool)hasEndDateTime;
- (bool)hasName;
- (bool)hasRecurrence;
- (bool)hasStartCalendar;
- (bool)hasStartDateTime;
- (bool)hasValueMetadata;
- (NSString *)name;
- (_INPBRecurrenceValue *)recurrence;
- (void)setAllDay:(bool)arg1;
- (void)setEndCalendar:(long long)arg1;
- (void)setEndDateTime:(_INPBDateTime *)arg1;
- (void)setHasAllDay:(bool)arg1;
- (void)setHasEndCalendar:(bool)arg1;
- (void)setHasStartCalendar:(bool)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRecurrence:(_INPBRecurrenceValue *)arg1;
- (void)setStartCalendar:(long long)arg1;
- (void)setStartDateTime:(_INPBDateTime *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (long long)startCalendar;
- (_INPBDateTime *)startDateTime;
- (_INPBValueMetadata *)valueMetadata;

@end
