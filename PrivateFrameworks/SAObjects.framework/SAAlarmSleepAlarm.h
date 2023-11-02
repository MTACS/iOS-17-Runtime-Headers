
@interface SAAlarmSleepAlarm : SAAlarmObject

@property (nonatomic, copy) NSNumber *bedtimeHour;
@property (nonatomic, copy) NSNumber *bedtimeMinute;
@property (nonatomic, copy) NSNumber *isFiringNext;
@property (nonatomic, copy) NSNumber *isOverride;

+ (id)sleepAlarmWithDictionary:(id)arg1 context:(id)arg2;

- (id)bedtimeHour;
- (id)bedtimeMinute;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isFiringNext;
- (id)isOverride;
- (void)setBedtimeHour:(id)arg1;
- (void)setBedtimeMinute:(id)arg1;
- (void)setIsFiringNext:(id)arg1;
- (void)setIsOverride:(id)arg1;

@end
