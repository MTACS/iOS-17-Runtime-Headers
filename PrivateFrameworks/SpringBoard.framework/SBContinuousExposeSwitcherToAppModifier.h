
@interface SBContinuousExposeSwitcherToAppModifier : SBTransitionSwitcherModifier {
    long long  _direction;
    SBSwitcherModifier * _multitaskingModifier;
}

@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) SBSwitcherModifier *multitaskingModifier;

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsForContinuousExposeIdentifier:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (long long)direction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3;
- (id)multitaskingModifier;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
