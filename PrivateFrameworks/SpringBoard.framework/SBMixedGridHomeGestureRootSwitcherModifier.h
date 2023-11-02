
@interface SBMixedGridHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier <SBChainableModifierDelegate> {
    bool  _continuingGesture;
    SBGestureSwitcherModifier * _gestureModifier;
    bool  _lastGestureWasAnArcSwipe;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> * _mixedGridModifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (bool)canTransitionWithoutGestureModifier;
- (bool)completesWhenChildrenComplete;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1 mixedGridModifier:(id)arg2;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;

@end
