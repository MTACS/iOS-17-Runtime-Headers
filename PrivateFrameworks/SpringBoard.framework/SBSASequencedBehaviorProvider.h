
@interface SBSASequencedBehaviorProvider : SBSABasePreferencesProvider {
    long long  _activePhase;
    NSArray * _elementContexts;
    <SAElementIdentifying> * _participatingElementIdentification;
    NSUUID * _participatingInterfaceElementIdentifier;
    <SBSAInterfaceElementPropertyIdentifying> * _pendingPhaseTransitionPropertyIdentity;
    NSUUID * _pendingTimerIdentifier;
}

@property (nonatomic, readonly) long long activePhase;
@property (nonatomic, readonly, copy) <SAElementIdentifying> *participatingElementIdentification;
@property (nonatomic, readonly, copy) NSUUID *participatingInterfaceElementIdentifier;

- (void).cxx_destruct;
- (bool)_isTimerExpired:(id)arg1 duration:(out double*)arg2;
- (void)_setActivePhase:(long long)arg1 context:(id)arg2 reason:(id /* block */)arg3;
- (void)_startTimerIfNecessary:(id)arg1 withInterval:(double)arg2;
- (long long)activePhase;
- (bool)canPersistAcrossLayoutStateChanges;
- (bool)canProceedWithContext:(id)arg1 shouldRetry:(out bool*)arg2;
- (double)delayForPhase:(long long)arg1;
- (long long)finalPhase;
- (id)initWithParticipantIdentifier:(id)arg1;
- (double)milestoneForPhase:(long long)arg1;
- (bool)milestoneForPhaseRequiresAnimationFinished:(long long)arg1;
- (id)nameForPhase:(long long)arg1;
- (id)participatingElementIdentification;
- (id)participatingInterfaceElementIdentifier;
- (bool)phaseIsTimeDelayBased:(long long)arg1;
- (id)preferencesFromContext:(id)arg1;
- (id)updatedContextFromContext:(id)arg1;
- (id)updatedPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;

@end
