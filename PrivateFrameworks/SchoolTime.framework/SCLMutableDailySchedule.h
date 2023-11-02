
@interface SCLMutableDailySchedule : SCLDailySchedule

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeScheduleForDay:(long long)arg1;
- (void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(long long)arg3;

@end
