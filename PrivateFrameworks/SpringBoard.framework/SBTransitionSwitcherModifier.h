
@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    NSArray * _appLayoutsToEnsureExist;
    bool  _asyncRenderingDisabled;
    bool  _isTransitioningToSwitcher;
    NSUUID * _transitionID;
    unsigned long long  _transitionPhase;
    bool  _wantsResignActiveAndAsyncRenderingAssertions;
}

@property (nonatomic, readonly) bool asyncRenderingDisabled;
@property (nonatomic, readonly) NSUUID *transitionID;
@property (nonatomic, readonly) unsigned long long transitionPhase;

- (void).cxx_destruct;
- (void)_setTransitionPhase:(unsigned long long)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (bool)asyncRenderingDisabled;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1;
- (id)interruptAndEndTransition;
- (bool)isPreparingLayout;
- (bool)isUpdatingLayout;
- (id)keyboardSuppressionMode;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (bool)requireStripContentsInViewHierarchy;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (bool)shouldInterruptForRemovalEvent:(id)arg1;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (id)transitionDidEnd;
- (id)transitionID;
- (unsigned long long)transitionPhase;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;

@end
