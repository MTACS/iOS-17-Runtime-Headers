
@interface SBFullScreenToHomeSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    unsigned long long  _direction;
    SBFullScreenAppLayoutSwitcherModifier * _fullScreenModifier;
    bool  _shouldBlurUnreadyScenes;
    bool  _shouldForceDefaultAnchorPointForTransition;
    long long  _startingScreenEdge;
}

@property (nonatomic) bool shouldBlurUnreadyScenes;
@property (nonatomic) bool shouldForceDefaultAnchorPointForTransition;
@property (nonatomic) long long startingScreenEdge;

- (void).cxx_destruct;
- (bool)_isIndexSlideOverAppLayout:(unsigned long long)arg1;
- (bool)_shouldApplySlideOverLayoutToIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (double)homeScreenAlpha;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3;
- (bool)isHomeScreenContentRequired;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setShouldBlurUnreadyScenes:(bool)arg1;
- (void)setShouldForceDefaultAnchorPointForTransition:(bool)arg1;
- (void)setStartingScreenEdge:(long long)arg1;
- (bool)shouldBlurUnreadyScenes;
- (bool)shouldForceDefaultAnchorPointForTransition;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (long long)startingScreenEdge;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
