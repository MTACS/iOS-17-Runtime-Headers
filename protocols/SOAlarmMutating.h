
@protocol SOAlarmMutating <NSObject>

@required

- (void)setAlarmID:(NSUUID *)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsFiring:(bool)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setRepeatSchedule:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;

@end
