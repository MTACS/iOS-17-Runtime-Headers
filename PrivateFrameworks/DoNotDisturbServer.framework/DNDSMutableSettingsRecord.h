
@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic, copy) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (nonatomic, copy) DNDSConfigurationsRecord *configurations;
@property (nonatomic, copy) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (nonatomic, copy) DNDSScheduleSettingsRecord *scheduleSettings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBehaviorSettings:(id)arg1;
- (void)setConfigurations:(id)arg1;
- (void)setPhoneCallBypassSettings:(id)arg1;
- (void)setScheduleSettings:(id)arg1;

@end
