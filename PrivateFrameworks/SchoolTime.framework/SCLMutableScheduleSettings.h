
@interface SCLMutableScheduleSettings : SCLScheduleSettings

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) SCLSchedule *schedule;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSchedule:(id)arg1;

@end
