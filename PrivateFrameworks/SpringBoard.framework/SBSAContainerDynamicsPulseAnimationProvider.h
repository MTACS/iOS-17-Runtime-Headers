
@interface SBSAContainerDynamicsPulseAnimationProvider : SBSABasePreferencesProvider {
    <SAElementIdentifying> * _elementIdentity;
    SBSAInterfaceElementPropertyIdentity * _pendingCollapsePropertyIdentity;
    long long  _phase;
    NSUUID * _timerIdentifier;
}

@property (nonatomic, readonly, copy) <SAElementIdentifying> *elementIdentity;

- (void).cxx_destruct;
- (bool)_isTimerExpired:(id)arg1;
- (void)_startTimerIfNecessary:(id)arg1;
- (id)elementIdentity;
- (id)initWithElementIdentity:(id)arg1;
- (id)preferencesFromContext:(id)arg1;

@end
