
@protocol _INPBUpdateAlarmIntentResponse <NSObject>

@required

+ (Class)conflictAlarmsType;

- (void)addConflictAlarms:(_INPBAlarm *)arg1;
- (void)clearConflictAlarms;
- (NSArray *)conflictAlarms;
- (_INPBAlarm *)conflictAlarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictAlarmsCount;
- (bool)hasUpdatedAlarm;
- (void)setConflictAlarms:(NSArray *)arg1;
- (void)setUpdatedAlarm:(_INPBAlarm *)arg1;
- (_INPBAlarm *)updatedAlarm;

@end
