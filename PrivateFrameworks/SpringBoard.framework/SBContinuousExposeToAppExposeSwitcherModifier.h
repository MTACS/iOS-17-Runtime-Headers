
@interface SBContinuousExposeToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    NSString * _appExposeBundleID;
    SBAppExposeContinuousExposeSwitcherModifier * _appExposeModifier;
    NSSet * _appLayoutsVisibleBeforeTransition;
    unsigned long long  _direction;
    NSString * _timerReason;
}

@property (nonatomic, readonly, copy) NSString *appExposeBundleID;
@property (nonatomic, readonly) unsigned long long direction;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appExposeBundleID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)direction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appExposeBundleID:(id)arg2 direction:(unsigned long long)arg3 appExposeModifier:(id)arg4;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;

@end
