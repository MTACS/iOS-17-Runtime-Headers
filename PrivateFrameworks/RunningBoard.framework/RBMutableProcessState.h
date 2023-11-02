
@interface RBMutableProcessState : RBProcessState

- (void)addInheritance:(id)arg1;
- (void)addLegacyAssertion:(id)arg1;
- (void)addPreventIdleSleepIdentifier:(id)arg1;
- (void)addRBAssertion:(id)arg1;
- (void)addTag:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllInheritances;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)removeInheritance:(id)arg1;
- (void)removePreventIdleSleepIdentifier:(id)arg1;
- (void)setExplicitJetsamBand:(unsigned long long)arg1;
- (void)setForceRoleManage:(bool)arg1;
- (void)setGPURole:(unsigned char)arg1;
- (void)setGuaranteedRunning:(bool)arg1;
- (void)setIsBeingDebugged:(bool)arg1;
- (void)setJetsamLenientMode:(bool)arg1;
- (void)setLegacyFinishTaskReason:(unsigned long long)arg1;
- (void)setMaxCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2;
- (void)setMemoryLimit:(int)arg1;
- (void)setMemoryLimitCategory:(id)arg1;
- (void)setMemoryLimitStrength:(unsigned char)arg1;
- (void)setMinCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2;
- (void)setPreventBaseMemoryLimitReduction:(bool)arg1;
- (void)setPreventIdleSleep:(bool)arg1;
- (void)setPreventSuspend:(bool)arg1;
- (void)setRole:(unsigned char)arg1;
- (void)setTargetedBySuspendableAssertion:(bool)arg1;
- (void)setTerminationResistance:(unsigned char)arg1;
- (void)setThrottleBestEffortNetworking:(bool)arg1;
- (void)unionState:(id)arg1;

@end
