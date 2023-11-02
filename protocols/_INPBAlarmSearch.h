
@protocol _INPBAlarmSearch <NSObject>

@required

- (int)StringAsAlarmReferenceType:(NSString *)arg1;
- (int)StringAsAlarmSearchStatus:(NSString *)arg1;
- (int)StringAsPeriod:(NSString *)arg1;
- (int)alarmReferenceType;
- (NSString *)alarmReferenceTypeAsString:(int)arg1;
- (int)alarmSearchStatus;
- (NSString *)alarmSearchStatusAsString:(int)arg1;
- (bool)hasAlarmReferenceType;
- (bool)hasAlarmSearchStatus;
- (bool)hasIdentifier;
- (bool)hasIncludeSleepAlarm;
- (bool)hasIsMeridianInferred;
- (bool)hasLabel;
- (bool)hasPeriod;
- (bool)hasTime;
- (NSString *)identifier;
- (bool)includeSleepAlarm;
- (bool)isMeridianInferred;
- (_INPBDataString *)label;
- (int)period;
- (NSString *)periodAsString:(int)arg1;
- (void)setAlarmReferenceType:(int)arg1;
- (void)setAlarmSearchStatus:(int)arg1;
- (void)setHasAlarmReferenceType:(bool)arg1;
- (void)setHasAlarmSearchStatus:(bool)arg1;
- (void)setHasIncludeSleepAlarm:(bool)arg1;
- (void)setHasIsMeridianInferred:(bool)arg1;
- (void)setHasPeriod:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIncludeSleepAlarm:(bool)arg1;
- (void)setIsMeridianInferred:(bool)arg1;
- (void)setLabel:(_INPBDataString *)arg1;
- (void)setPeriod:(int)arg1;
- (void)setTime:(_INPBDateTimeRangeValue *)arg1;
- (_INPBDateTimeRangeValue *)time;

@end
