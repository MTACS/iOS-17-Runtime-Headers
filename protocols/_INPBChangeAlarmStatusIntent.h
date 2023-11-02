
@protocol _INPBChangeAlarmStatusIntent <NSObject>

@required

+ (Class)alarmsType;

- (int)StringAsOperation:(NSString *)arg1;
- (void)addAlarms:(_INPBAlarm *)arg1;
- (_INPBAlarmSearch *)alarmSearch;
- (NSArray *)alarms;
- (_INPBAlarm *)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (bool)hasAlarmSearch;
- (bool)hasIntentMetadata;
- (bool)hasOperation;
- (_INPBIntentMetadata *)intentMetadata;
- (int)operation;
- (NSString *)operationAsString:(int)arg1;
- (void)setAlarmSearch:(_INPBAlarmSearch *)arg1;
- (void)setAlarms:(NSArray *)arg1;
- (void)setHasOperation:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setOperation:(int)arg1;

@end
