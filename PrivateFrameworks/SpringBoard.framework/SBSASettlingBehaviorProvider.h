
@interface SBSASettlingBehaviorProvider : SBSABasePreferencesProvider {
    long long  _activePhase;
    bool  _collisionImminent;
    bool  _collisionIsNotOvershooting;
    NSDictionary * _containerIDsToOvershootOutsets;
    SBSAElementLayoutTransition * _lastChangingElementLayoutTransition;
    NSSet * _pendingCollisionPropertyIdentities;
    NSSet * _pendingPhaseTransitionPropertyIdentities;
    NSSet * _pendingSteadyPropertyIdentities;
    NSDictionary * _stackContainerInterfaceElementIdentifiersToBounds;
}

- (void).cxx_destruct;
- (id)_fluidBehaviorSettingsForTransitionPhase:(long long)arg1 forElementContext:(id)arg2;
- (double)_overshootFractionForDampingRatio:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overshootOutsetsForTransitionPhase:(long long)arg1 baseOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overshootOutsetsTargetingContainerDescription:(id)arg1 initialContainerDescription:(id)arg2 settings:(id)arg3 context:(id)arg4;
- (double)_progressMilestoneForTransitionPhase:(long long)arg1;
- (void)_resetSettlingState;
- (id)preferencesFromContext:(id)arg1;

@end
