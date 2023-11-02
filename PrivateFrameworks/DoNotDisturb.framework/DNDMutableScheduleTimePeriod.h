
@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (nonatomic, copy) DNDScheduleTime *endTime;
@property (nonatomic, copy) DNDScheduleTime *startTime;
@property (nonatomic) unsigned long long weekdays;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setWeekdays:(unsigned long long)arg1;

@end
