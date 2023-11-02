
@protocol INUpdateAlarmIntentExport <NSObject, JSExport>

@required

- (INAlarm *)alarm;
- (INAlarmSearch *)alarmSearch;
- (id)init;
- (long long)operation;
- (INSpeakableString *)proposedLabel;
- (INDateComponentsRange *)proposedTime;
- (void)setAlarm:(INAlarm *)arg1;
- (void)setAlarmSearch:(INAlarmSearch *)arg1;
- (void)setOperation:(long long)arg1;
- (void)setProposedLabel:(INSpeakableString *)arg1;
- (void)setProposedTime:(INDateComponentsRange *)arg1;

@end
