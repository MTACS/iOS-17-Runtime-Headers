
@interface SBMedusaWindowDragGestureSwitcherModifier : SBGestureSwitcherModifier <SBMedusaWindowDragGestureDestinationModifierDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    long long  _currentFloatingConfiguration;
    SBMedusaWindowDragGestureDestinationModifier * _destinationModifier;
    bool  _dragBeganInOtherSwitcher;
    bool  _dragBeganInOurSwitcher;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialAnchorPoint;
    SBAppLayout * _initialFloatingAppLayout;
    SBAppLayout * _initialMainAppLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _progressToMaxTranslation;
    SBDisplayItem * _selectedDisplayItem;
    SBAppLayout * _selectedLeafAppLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeOfSelectedDisplayItem;
    double  _toHomeScreenAlpha;
    double  _toHomeScreenBlurProgress;
    double  _toHomeScreenDimmingAlpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (nonatomic, readonly) long long currentFloatingConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBAppLayout *initialFloatingAppLayout;
@property (nonatomic, readonly) SBAppLayout *initialMainAppLayout;
@property (nonatomic, readonly) SBAppLayout *selectedLeafAppLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_anyProposedAppLayoutContainsSelectedDisplayItem;
- (id)_appLayoutContainingSelectedDisplayItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForDraggingAppLayout;
- (double)_distanceYToMaxTranslation;
- (bool)_draggingFullScreenAppOrSplitView;
- (double)_gestureProgressToMaxTranslationForTranslation:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialTransformedFrameForDraggingAppLayout;
- (bool)_ourProposedAppLayoutContainsSelectedDisplayItem;
- (double)_platterScale;
- (double)_scaleForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_shouldPushInFullScreenContent;
- (bool)_updateHomeScreenStyleInteractively;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (double)blurViewIconScaleForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (unsigned long long)currentDestination;
- (long long)currentFloatingConfiguration;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleGestureEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (id)initWithGestureID:(id)arg1 selectedLeafAppLayout:(id)arg2 initialMainAppLayout:(id)arg3 initialFloatingAppLayout:(id)arg4 initialFloatingConfiguration:(long long)arg5;
- (id)initialFloatingAppLayout;
- (id)initialMainAppLayout;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)platterScaleForWindowDragGestureDestinationModifier:(id)arg1;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)selectedLeafAppLayout;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)topMostLayoutElements;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;
- (id)visibleAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;
- (long long)wallpaperStyle;

@end
