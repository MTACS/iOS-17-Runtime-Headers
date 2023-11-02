
@interface SBContinuousExposeWindowDragSwitcherModifier : SBGestureSwitcherModifier <SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    UIViewFloatAnimatableProperty * _anchorPointRampingProperty;
    SBContinuousExposeAutoLayoutController * _autoLayoutController;
    SBContinuousExposeWindowDragDestinationSwitcherModifier * _destinationModifier;
    bool  _dragBeganInAnyStrip;
    bool  _dragBeganInOtherSwitcher;
    bool  _dragBeganInOurSwitcher;
    bool  _dragBeganOnAnyStage;
    bool  _gestureWasCanceled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialAnchorPoint;
    SBAppLayout * _initialAppLayout;
    SBContinuousExposeAutoLayoutSpace * _initialAutoLayoutSpace;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    SBContinuousExposeAutoLayoutSpace * _previousAutoLayoutSpace;
    SBDisplayItem * _selectedDisplayItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeOfSelectedDisplayItem;
    UIViewFloatAnimatableProperty * _stageRubberbandingRampingProperty;
    SBFFluidBehaviorSettings * _stageRubberbandingSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBAppLayout *hoveringOverAppLayout;
@property (nonatomic, readonly) SBAppLayout *initialAppLayout;
@property (nonatomic, readonly) SBAppLayout *proposedAppLayout;
@property (nonatomic, readonly) SBDisplayItem *selectedDisplayItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_anyProposedAppLayoutContainsSelectedDisplayItem;
- (id)_appLayoutContainingDisplayItem:(id)arg1;
- (id)_baseLayoutSettings;
- (void)_beginAnimatingAnchorPointRampingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (void)_beginStageRubberbandingRampingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (bool)_isStripStashed;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutByAddingAppLayout:(id)arg1 toAppLayout:(id)arg2;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (id)appLayoutOnStage;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)continuousExposeStripProgress;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)hoveringOverAppLayout;
- (id)initWithGestureID:(id)arg1 initialAppLayout:(id)arg2 selectedDisplayItem:(id)arg3;
- (id)initialAppLayout;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })preferredCenterForSelectedItemInDestinationModifier:(id)arg1 clippingToInitialStageArea:(bool)arg2;
- (id)proposedAppLayout;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)selectedDisplayItem;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (void)updateProposedAppLayoutWithAppLayout:(id)arg1 andInitialAppLayout:(id)arg2;
- (id)visibleAppLayouts;
- (struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })wallpaperGradientAttributesForIndex:(unsigned long long)arg1;
- (bool)wantsSceneResizesHostedContextForAppLayout:(id)arg1;

@end
