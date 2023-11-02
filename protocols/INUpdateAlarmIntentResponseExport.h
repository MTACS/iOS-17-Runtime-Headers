
@protocol INUpdateAlarmIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)conflictAlarms;
- (void)setConflictAlarms:(NSArray *)arg1;
- (void)setUpdatedAlarm:(INAlarm *)arg1;
- (INAlarm *)updatedAlarm;

@end
