
@interface SBSAShakeBehaviorProvider : SBSASequencedBehaviorProvider

- (struct CGPoint { double x1; double x2; })_defaultContainerParentViewCenterFromContext:(id)arg1;
- (id)_updatedIdlePreferencesFromPreferences:(id)arg1 context:(id)arg2;
- (id)_updatedKickingPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (id)_updatedPreparingToSettlePreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (id)_updatedSettlingPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (bool)canProceedWithContext:(id)arg1 shouldRetry:(out bool*)arg2;
- (long long)finalPhase;
- (double)milestoneForPhase:(long long)arg1;
- (id)nameForPhase:(long long)arg1;
- (id)updatedContextFromContext:(id)arg1;
- (id)updatedPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;

@end
