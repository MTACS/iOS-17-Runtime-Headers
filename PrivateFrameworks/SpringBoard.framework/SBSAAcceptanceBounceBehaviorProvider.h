
@interface SBSAAcceptanceBounceBehaviorProvider : SBSASequencedBehaviorProvider {
    SBSAElementLayoutTransition * _lastSeenLastChangingElementTransition;
    bool  _shouldBeRemovedUponLayoutChange;
    long long  _style;
    id /* block */  _triggeredBlock;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_expandedBouncingContainerViewFrameForBounceStyle:(long long)arg1 unexpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_updatedReboundingPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (id)_updatedRevealAcceptedElementPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (id)_updatedStretchingPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;
- (bool)canPersistAcrossLayoutStateChanges;
- (bool)canProceedWithContext:(id)arg1 shouldRetry:(out bool*)arg2;
- (double)delayForPhase:(long long)arg1;
- (long long)finalPhase;
- (id)initWithParticipantIdentifier:(id)arg1 style:(long long)arg2 triggeredBlock:(id /* block */)arg3;
- (double)milestoneForPhase:(long long)arg1;
- (bool)milestoneForPhaseRequiresAnimationFinished:(long long)arg1;
- (id)nameForPhase:(long long)arg1;
- (bool)phaseIsTimeDelayBased:(long long)arg1;
- (void)removeFromParentProvider;
- (id)updatedContextFromContext:(id)arg1;
- (id)updatedPreferencesFromPreferences:(id)arg1 context:(id)arg2 relevantPropertyIdentity:(out id*)arg3;

@end
