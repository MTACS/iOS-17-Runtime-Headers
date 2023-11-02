
@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    SBCoplanarSwitcherModifier * _coplanarModifier;
    unsigned long long  _direction;
    double  _homeScreenIconCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _homeScreenIconFrame;
    bool  _homeScreenIconLocationIsFloatingDock;
    double  _homeScreenIconScale;
    bool  _itemContainerOverlapsDock;
    bool  _shouldAcceleratedHomeButtonPressBegin;
    bool  _shouldDisableAsyncRendering;
    bool  _shouldDockOrderFrontDuringTransition;
    bool  _shouldForceDefaultAnchorPointForTransition;
    bool  _shouldMatchMoveToIconView;
    bool  _shouldUpdateIconViewVisibility;
    bool  _wantsDockWindowLevelAssertion;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic) bool shouldDisableAsyncRendering;
@property (nonatomic) bool shouldDockOrderFrontDuringTransition;
@property (nonatomic) bool shouldForceDefaultAnchorPointForTransition;
@property (nonatomic) bool shouldMatchMoveToIconView;
@property (nonatomic) bool shouldUpdateIconViewVisibility;

- (void).cxx_destruct;
- (bool)_isEffectivelyHome;
- (bool)_isIndexZoomAppLayout:(unsigned long long)arg1;
- (id)_layoutSettings;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint { double x1; double x2; })arg1;
- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint { double x1; double x2; })arg1;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayout;
- (id)appLayoutsForContinuousExposeIdentifier:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (bool)asyncRenderingDisabled;
- (id)containerLeafAppLayoutForShelf:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullyPresentedFrameForIndex:(unsigned long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)handleTimerEvent:(id)arg1;
- (double)homeScreenAlpha;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3;
- (id)initWithTransitionID:(id)arg1 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 appLayout:(id)arg3 direction:(unsigned long long)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)layoutSettingsForTargetCenter:(struct CGPoint { double x1; double x2; })arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (struct SBSwitcherShelfPresentationAttributes { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; })presentationAttributesForShelf:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setShouldDisableAsyncRendering:(bool)arg1;
- (void)setShouldDockOrderFrontDuringTransition:(bool)arg1;
- (void)setShouldForceDefaultAnchorPointForTransition:(bool)arg1;
- (void)setShouldMatchMoveToIconView:(bool)arg1;
- (void)setShouldUpdateIconViewVisibility:(bool)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (bool)shouldDisableAsyncRendering;
- (bool)shouldDockOrderFrontDuringTransition;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (bool)shouldForceDefaultAnchorPointForTransition;
- (bool)shouldMatchMoveToIconView;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldUpdateIconViewVisibility;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;

@end
