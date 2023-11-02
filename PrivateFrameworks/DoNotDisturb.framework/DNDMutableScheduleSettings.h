
@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property (nonatomic) unsigned long long bedtimeBehaviorEnabledSetting;
@property (nonatomic) unsigned long long scheduleEnabledSetting;
@property (nonatomic, copy) DNDScheduleTimePeriod *timePeriod;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBedtimeBehaviorEnabledSetting:(unsigned long long)arg1;
- (void)setScheduleEnabledSetting:(unsigned long long)arg1;
- (void)setTimePeriod:(id)arg1;

@end
