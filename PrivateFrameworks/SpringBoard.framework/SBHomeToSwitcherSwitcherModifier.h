
@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _direction;
    SBSwitcherModifier * _multitaskingModifier;
}

@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) SBSwitcherModifier *multitaskingModifier;

- (void).cxx_destruct;
- (id)_dismissForEmptySwitcherResponseName;
- (id)appLayoutToScrollToDuringTransition;
- (double)containerStatusBarAnimationDuration;
- (long long)direction;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3;
- (bool)isEffectivelyHome;
- (id)multitaskingModifier;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;

@end
