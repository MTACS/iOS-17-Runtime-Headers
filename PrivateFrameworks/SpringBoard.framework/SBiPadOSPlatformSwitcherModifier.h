
@interface SBiPadOSPlatformSwitcherModifier : SBSwitcherModifier {
    NSSet * _activatingLiveAppLayouts;
    long long  _currentUnlockedEnvironmentMode;
    NSSet * _displayItems;
    SBDisplayItem * _lastGesturedDisplayItem;
    SBDisplayItem * _lastPulsedDisplayItem;
    SBTransitionSwitcherModifierEvent * _lastTransitionEvent;
    NSSet * _previousDisplayItems;
}

- (void).cxx_destruct;
- (BOOL)activityModeForAppLayout:(id)arg1;
- (id)foregroundAppLayouts;
- (id)handleGestureEvent:(id)arg1;
- (id)handlePrepareForSceneUpdateEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)handleUpdateWindowingModeEvent:(id)arg1;
- (BOOL)jetsamModeForAppLayout:(id)arg1;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg1 fromAppLayouts:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
