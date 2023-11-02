
@interface DNDMutableBypassSettings : DNDBypassSettings

@property (nonatomic, copy) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic) unsigned long long immediateBypassEventSourceType;
@property (nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setImmediateBypassCNGroupIdentifier:(id)arg1;
- (void)setImmediateBypassEventSourceType:(unsigned long long)arg1;
- (void)setRepeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg1;

@end
