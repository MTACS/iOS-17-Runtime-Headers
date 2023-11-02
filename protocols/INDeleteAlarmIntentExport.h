
@protocol INDeleteAlarmIntentExport <NSObject, JSExport>

@required

- (INAlarmSearch *)alarmSearch;
- (NSArray *)alarms;
- (id)init;
- (void)setAlarmSearch:(INAlarmSearch *)arg1;
- (void)setAlarms:(NSArray *)arg1;

@end
