
@protocol _INPBChangeAlarmStatusIntentResponse <NSObject>

@required

+ (Class)modifiedAlarmsType;

- (void)addModifiedAlarms:(_INPBAlarm *)arg1;
- (void)clearModifiedAlarms;
- (NSArray *)modifiedAlarms;
- (_INPBAlarm *)modifiedAlarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)modifiedAlarmsCount;
- (void)setModifiedAlarms:(NSArray *)arg1;

@end
