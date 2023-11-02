
@interface SBSlideOverPeekSwitcherModifier : SBSwitcherModifier {
    long long  _environmentMode;
    SBActiveAppLayoutFloatingSwitcherModifier * _floorModifier;
    long long  _fromFloatingConfiguration;
    long long  _peekConfiguration;
    SBAppLayout * _peekingAppLayout;
    SBAppSwitcherSettings * _switcherSettings;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithAppLayout:(id)arg1 peekConfiguration:(long long)arg2 environmentMode:(long long)arg3 fromFloatingConfiguration:(long long)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(id)arg2;
- (id)keyboardSuppressionMode;
- (bool)shouldAllowContentViewTouchesForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldConfigureInAppDockHiddenAssertion;
- (unsigned long long)slideOverTongueDirection;
- (id)visibleHomeAffordanceLayoutElements;
- (long long)wallpaperStyle;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;
- (bool)wantsHomeScreenPointerInteractions;

@end
