
@interface SBShelfRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier <SBShelfExpansionSwitcherModifierDelegate> {
    unsigned long long  _animationStyle;
    unsigned long long  _appearanceState;
    unsigned long long  _displayMode;
    bool  _isRoutingFrameForIndexToFloating;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _landscapeContainerBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _portraitContainerBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
}

@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) unsigned long long appearanceState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;

- (void)_rebuildContainerBounds;
- (unsigned long long)animationStyle;
- (id)appLayoutsToResignActive;
- (unsigned long long)appearanceState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (void)didMoveToParentModifier:(id)arg1;
- (unsigned long long)displayMode;
- (double)floatingDockHeight;
- (id)floorModifierForGestureEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)keyboardSuppressionMode;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)orderedVisibleAppLayoutsForShelfExpansionModifier:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (void)setAnimationStyle:(unsigned long long)arg1;
- (void)setAppearanceState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (long long)tintStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;

@end
