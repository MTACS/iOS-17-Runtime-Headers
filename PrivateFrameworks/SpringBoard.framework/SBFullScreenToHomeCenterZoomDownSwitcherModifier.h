
@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    SBCoplanarSwitcherModifier * _coplanarModifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffVelocity;
    double  _offsetYPercentOfScreenHeight;
    bool  _shouldForceDefaultAnchorPointForTransition;
}

@property (nonatomic) bool shouldForceDefaultAnchorPointForTransition;

- (void).cxx_destruct;
- (bool)_isIndexCenterZoomAppLayout:(unsigned long long)arg1;
- (id)_layoutSettings;
- (id)_opacitySettings;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 offsetYPercentOfScreenHeight:(double)arg3;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setShouldForceDefaultAnchorPointForTransition:(bool)arg1;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (bool)shouldForceDefaultAnchorPointForTransition;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
