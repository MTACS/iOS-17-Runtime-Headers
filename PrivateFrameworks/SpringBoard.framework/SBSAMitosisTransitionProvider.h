
@interface SBSAMitosisTransitionProvider : SBSASequencedBehaviorProvider

- (id)_updatedBabyHeadstartPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (id)_updatedInitialUnanimatedPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (id)_updatedPrimaryLayoutPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (bool)canPersistAcrossLayoutStateChanges;
- (bool)canProceedWithContext:(id)arg1 shouldRetry:(out bool*)arg2;
- (double)delayForPhase:(long long)arg1;
- (long long)finalPhase;
- (double)milestoneForPhase:(long long)arg1;
- (id)nameForPhase:(long long)arg1;
- (bool)phaseIsTimeDelayBased:(long long)arg1;
- (id)updatedPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;

@end
