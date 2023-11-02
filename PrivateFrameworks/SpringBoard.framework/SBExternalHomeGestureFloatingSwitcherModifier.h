
@interface SBExternalHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate> {
    SBHomeGestureDockSwitcherModifier * _dockModifier;
    long long  _initialFloatingConfiguration;
    long long  _interfaceOrientation;
    bool  _stashed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _stashedContainerViewBounds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToResignActive;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (long long)currentFinalDestination;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (bool)isFloatingDockGesturePossible;

@end
