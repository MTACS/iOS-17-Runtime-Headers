
@interface RBMutableSystemState : RBSystemState

- (void)addAllowLaunchPredicate:(id)arg1;
- (void)addPreventIdleSleepIdentifier:(id)arg1;
- (void)addPreventLaunchPredicate:(id)arg1;
- (void)addTag:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)prewarmIdentity:(id)arg1 withInterval:(double)arg2;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)removePreventIdleSleepIdentifier:(id)arg1;
- (void)setPreventIdleSleep:(bool)arg1;
- (void)setPreventLaunch:(bool)arg1;
- (void)unionState:(id)arg1;
- (void)upgradeCondition:(id)arg1 toValue:(long long)arg2;

@end
