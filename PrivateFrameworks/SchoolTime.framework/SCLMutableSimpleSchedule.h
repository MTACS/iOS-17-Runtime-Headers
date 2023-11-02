
@interface SCLMutableSimpleSchedule : SCLSimpleSchedule

@property (nonatomic, copy) SCLScheduleTime *endTime;
@property (nonatomic) long long repeatSchedule;
@property (nonatomic, copy) SCLScheduleTime *startTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEndTime:(id)arg1;
- (void)setRepeatSchedule:(long long)arg1;
- (void)setStartTime:(id)arg1;

@end
