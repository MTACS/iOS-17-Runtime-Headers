
@protocol _INPBDeleteAlarmIntent <NSObject>

@required

+ (Class)alarmsType;

- (void)addAlarms:(_INPBAlarm *)arg1;
- (_INPBAlarmSearch *)alarmSearch;
- (NSArray *)alarms;
- (_INPBAlarm *)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (bool)hasAlarmSearch;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAlarmSearch:(_INPBAlarmSearch *)arg1;
- (void)setAlarms:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
