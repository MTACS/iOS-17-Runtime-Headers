
@interface SBSAEjectStretchBehaviorProvider : SBSABasePreferencesProvider {
    NSUUID * _identifierOfActiveTimer;
    SBSAInterfaceElementPropertyIdentity * _pendingCollapsePropertyIdentity;
    long long  _phase;
}

- (void).cxx_destruct;
- (bool)_checkContextForExpiredContractionMilestone:(id)arg1;
- (bool)_isTimerExpired:(id)arg1;
- (void)_startTimerIfNecessary:(id)arg1;
- (id)preferencesFromContext:(id)arg1;

@end
