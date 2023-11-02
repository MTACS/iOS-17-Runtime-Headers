
@interface DNDSMutableScheduleSettingsRecord : DNDSScheduleSettingsRecord

@property (nonatomic, copy) NSNumber *bedtimeBehaviorEnabledSetting;
@property (nonatomic, copy) NSNumber *lastUpdatedTimestamp;
@property (nonatomic, copy) NSNumber *scheduleEnabledSetting;
@property (nonatomic, copy) NSNumber *timePeriodEndTimeHour;
@property (nonatomic, copy) NSNumber *timePeriodEndTimeMinute;
@property (nonatomic, copy) NSNumber *timePeriodStartTimeHour;
@property (nonatomic, copy) NSNumber *timePeriodStartTimeMinute;
@property (nonatomic, copy) NSNumber *timePeriodWeekdays;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBedtimeBehaviorEnabledSetting:(id)arg1;
- (void)setLastUpdatedTimestamp:(id)arg1;
- (void)setScheduleEnabledSetting:(id)arg1;
- (void)setTimePeriodEndTimeHour:(id)arg1;
- (void)setTimePeriodEndTimeMinute:(id)arg1;
- (void)setTimePeriodStartTimeHour:(id)arg1;
- (void)setTimePeriodStartTimeMinute:(id)arg1;
- (void)setTimePeriodWeekdays:(id)arg1;

@end
