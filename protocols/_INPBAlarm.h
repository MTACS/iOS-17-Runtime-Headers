
@protocol _INPBAlarm <NSObject>

@required

- (int)StringAsAlarmRepeatScheduleOptions:(NSString *)arg1;
- (void)addAlarmRepeatScheduleOptions:(int)arg1;
- (int*)alarmRepeatScheduleOptions;
- (NSString *)alarmRepeatScheduleOptionsAsString:(int)arg1;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmRepeatScheduleOptionsCount;
- (void)clearAlarmRepeatScheduleOptions;
- (_INPBDateTime *)dateTime;
- (bool)enabled;
- (bool)firing;
- (bool)hasDateTime;
- (bool)hasEnabled;
- (bool)hasFiring;
- (bool)hasIdentifier;
- (bool)hasLabel;
- (bool)hasSleepAlarmAttribute;
- (NSString *)identifier;
- (_INPBDataString *)label;
- (void)setAlarmRepeatScheduleOptions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDateTime:(_INPBDateTime *)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFiring:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasFiring:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setLabel:(_INPBDataString *)arg1;
- (void)setSleepAlarmAttribute:(_INPBSleepAlarmAttribute *)arg1;
- (_INPBSleepAlarmAttribute *)sleepAlarmAttribute;

@end
