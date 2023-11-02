
@protocol _INPBCreateAlarmIntent <NSObject>

@required

- (int)StringAsAlarmRepeatScheduleOptions:(NSString *)arg1;
- (void)addAlarmRepeatScheduleOptions:(int)arg1;
- (int*)alarmRepeatScheduleOptions;
- (NSString *)alarmRepeatScheduleOptionsAsString:(int)arg1;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmRepeatScheduleOptionsCount;
- (void)clearAlarmRepeatScheduleOptions;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (bool)hasRelativeOffsetInMinutes;
- (bool)hasTime;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)label;
- (int)relativeOffsetInMinutes;
- (void)setAlarmRepeatScheduleOptions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasRelativeOffsetInMinutes:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLabel:(_INPBDataString *)arg1;
- (void)setRelativeOffsetInMinutes:(int)arg1;
- (void)setTime:(_INPBDateTimeRange *)arg1;
- (_INPBDateTimeRange *)time;

@end
