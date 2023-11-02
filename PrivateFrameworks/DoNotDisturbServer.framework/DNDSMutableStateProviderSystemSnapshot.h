
@interface DNDSMutableStateProviderSystemSnapshot : DNDSStateProviderSystemSnapshot

@property (nonatomic, copy) NSArray *activeAssertionUUIDs;
@property (nonatomic, copy) NSDictionary *activeDateIntervalByAssertionUUID;
@property (nonatomic, copy) NSArray *assertions;
@property (nonatomic) unsigned long long interruptionBehaviorSetting;
@property (nonatomic, copy) NSDate *lastUpdate;
@property (nonatomic) unsigned long long lostModeState;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveAssertionUUIDs:(id)arg1;
- (void)setActiveDateIntervalByAssertionUUID:(id)arg1;
- (void)setAssertions:(id)arg1;
- (void)setInterruptionBehaviorSetting:(unsigned long long)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)setLostModeState:(unsigned long long)arg1;

@end
