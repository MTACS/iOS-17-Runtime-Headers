
@interface SBContinuousExposeAppToInlineAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _activeAppLayout;
    NSString * _appExposeBundleIdentifier;
    long long  _direction;
}

- (void).cxx_destruct;
- (id)_inlineAppExposeAppLayouts;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (double)adjustedSpaceAccessoryViewScale:(double)arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 activeAppLayout:(id)arg3 appExposeBundleIdentifier:(id)arg4;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
