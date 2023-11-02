
@interface DNDSMutableBypassSettingsRecord : DNDSBypassSettingsRecord

@property (nonatomic, copy) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic, copy) NSNumber *immediateBypassEventSourceType;
@property (nonatomic, copy) NSNumber *repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setImmediateBypassCNGroupIdentifier:(id)arg1;
- (void)setImmediateBypassEventSourceType:(id)arg1;
- (void)setRepeatEventSourceBehaviorEnabledSetting:(id)arg1;

@end
