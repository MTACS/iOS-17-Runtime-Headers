
@protocol _INPBSearchAlarmIntent <NSObject>

@required

+ (Class)alarmsType;

- (int)StringAsAlarmSearchType:(NSString *)arg1;
- (void)addAlarms:(_INPBAlarm *)arg1;
- (_INPBAlarmSearch *)alarmSearch;
- (int)alarmSearchType;
- (NSString *)alarmSearchTypeAsString:(int)arg1;
- (NSArray *)alarms;
- (_INPBAlarm *)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (bool)hasAlarmSearch;
- (bool)hasAlarmSearchType;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAlarmSearch:(_INPBAlarmSearch *)arg1;
- (void)setAlarmSearchType:(int)arg1;
- (void)setAlarms:(NSArray *)arg1;
- (void)setHasAlarmSearchType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
