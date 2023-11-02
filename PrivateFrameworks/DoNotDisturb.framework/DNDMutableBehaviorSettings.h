
@interface DNDMutableBehaviorSettings : DNDBehaviorSettings

@property (nonatomic) unsigned long long interruptionBehavior;
@property (nonatomic) unsigned long long interruptionBehaviorSetting;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInterruptionBehavior:(unsigned long long)arg1;
- (void)setInterruptionBehaviorSetting:(unsigned long long)arg1;

@end
