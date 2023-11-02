
@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier * _appExposeModifier;
    NSSet * _appLayoutsVisibleBeforeTransition;
}

- (void).cxx_destruct;
- (id)_newAppExposeModifier;
- (double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 bundleIdentifier:(id)arg2 appExposeModifier:(id)arg3;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;

@end
