
@protocol INSearchAlarmIntentExport <NSObject, JSExport>

@required

- (INAlarmSearch *)alarmSearch;
- (long long)alarmSearchType;
- (NSArray *)alarms;
- (id)init;
- (void)setAlarmSearch:(INAlarmSearch *)arg1;
- (void)setAlarmSearchType:(long long)arg1;
- (void)setAlarms:(NSArray *)arg1;

@end
