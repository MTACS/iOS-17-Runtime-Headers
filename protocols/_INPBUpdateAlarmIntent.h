
@protocol _INPBUpdateAlarmIntent <NSObject>

@required

- (int)StringAsOperation:(NSString *)arg1;
- (_INPBAlarm *)alarm;
- (_INPBAlarmSearch *)alarmSearch;
- (bool)hasAlarm;
- (bool)hasAlarmSearch;
- (bool)hasIntentMetadata;
- (bool)hasOperation;
- (bool)hasProposedLabel;
- (bool)hasProposedTime;
- (_INPBIntentMetadata *)intentMetadata;
- (int)operation;
- (NSString *)operationAsString:(int)arg1;
- (_INPBDataString *)proposedLabel;
- (_INPBDateTimeRange *)proposedTime;
- (void)setAlarm:(_INPBAlarm *)arg1;
- (void)setAlarmSearch:(_INPBAlarmSearch *)arg1;
- (void)setHasOperation:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setOperation:(int)arg1;
- (void)setProposedLabel:(_INPBDataString *)arg1;
- (void)setProposedTime:(_INPBDateTimeRange *)arg1;

@end
