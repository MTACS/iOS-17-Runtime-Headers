
@interface SBFloatingFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {
    SBAppLayout * _activeAppLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerViewBounds;
    long long  _floatingConfiguration;
    bool  _floatingSwitcherVisible;
    long long  _interfaceOrientation;
}

@property (nonatomic, retain) SBAppLayout *activeAppLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerViewBounds;
@property (nonatomic) long long floatingConfiguration;
@property (getter=isFloatingSwitcherVisible, nonatomic) bool floatingSwitcherVisible;
@property (nonatomic) long long interfaceOrientation;

- (void).cxx_destruct;
- (Class)_defaultMultitaskingModifierClass;
- (id)_entityRemovalModifierForEvent:(id)arg1;
- (id)_newMultitaskingModifier;
- (void)_updateContainerViewBounds;
- (id)activeAppLayout;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (long long)floatingConfiguration;
- (id)floorModifierForGestureEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)highlightModifierForHighlightEvent:(id)arg1;
- (id)init;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isFloatingSwitcherVisible;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (void)setActiveAppLayout:(id)arg1;
- (void)setContainerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingConfiguration:(long long)arg1;
- (void)setFloatingSwitcherVisible:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)shelfModifierForTransitionEvent:(id)arg1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (id)topMostLayoutElements;
- (id)transientlyVisibleSlideOverTongueModifierForEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;

@end
