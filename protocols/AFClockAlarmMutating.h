
@protocol AFClockAlarmMutating <NSObject>

@required

- (void)setAlarmID:(NSUUID *)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsFiring:(bool)arg1;
- (void)setIsSnoozed:(bool)arg1;
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setRepeatOptions:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(unsigned long long)arg1;

@end
