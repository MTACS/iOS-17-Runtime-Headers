
@interface SBRevealContinuousExposeStripOverflowGestureModifier : SBGestureSwitcherModifier {
    NSString * _appExposeBundleIdentifier;
    SBAppSwitcherDefaults * _appSwitcherDefaults;
    bool  _beginAnimatingAppSwitcherLayoutProperty;
    SBSwitcherModifier * _continuousExposeAppSwitcherModifier;
    SBAppLayout * _initialAppLayout;
    bool  _isRevealingSwitcher;
    bool  _showingAppSwitcherLayout;
    double  _stripWidth;
    double  _translation;
}

@property (nonatomic, readonly) SBAppLayout *initialAppLayout;

- (void).cxx_destruct;
- (id)_appSwitcherDefaults;
- (double)_finalScaleForFullScreenAppLayout;
- (bool)_hideDock;
- (id)_layoutSettingsForAppLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animatablePropertyIdentifiers;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 initialAppLayout:(id)arg2;
- (id)initialAppLayout;
- (double)modelValueForAnimatableProperty:(id)arg1 currentValue:(double)arg2 creating:(bool)arg3;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUpdateAnimatableProperty:(id)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (long long)updateModeForAnimatableProperty:(id)arg1;
- (id)visibleAppLayouts;
- (struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })wallpaperGradientAttributesForIndex:(unsigned long long)arg1;

@end
