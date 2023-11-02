
@protocol INChangeAlarmStatusIntentExport <NSObject, JSExport>

@required

- (INAlarmSearch *)alarmSearch;
- (NSArray *)alarms;
- (id)init;
- (long long)operation;
- (void)setAlarmSearch:(INAlarmSearch *)arg1;
- (void)setAlarms:(NSArray *)arg1;
- (void)setOperation:(long long)arg1;

@end
