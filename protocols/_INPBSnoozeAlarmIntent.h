
@protocol _INPBSnoozeAlarmIntent <NSObject>

@required

+ (Class)alarmsType;

- (void)addAlarms:(_INPBAlarm *)arg1;
- (NSArray *)alarms;
- (_INPBAlarm *)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAlarms:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
