
@protocol INCreateAlarmIntentExport <NSObject, JSExport>

@required

- (unsigned long long)alarmRepeatScheduleOptions;
- (id)init;
- (INSpeakableString *)label;
- (NSNumber *)relativeOffsetInMinutes;
- (void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1;
- (void)setLabel:(INSpeakableString *)arg1;
- (void)setRelativeOffsetInMinutes:(NSNumber *)arg1;
- (void)setTime:(INDateComponentsRange *)arg1;
- (INDateComponentsRange *)time;

@end
