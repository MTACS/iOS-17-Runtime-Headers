
@interface SBContinuousExposeAppDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout * _appLayout;
    SBDisplayItem * _displayItemThatWouldBeEvictedIfAny;
    NSString * _draggedSceneIdentifier;
    long long  _draggedSceneOriginalLayoutRole;
    long long  _dropAction;
    SBAppLayout * _dropTransitionFromAppLayout;
    bool  _gestureEnded;
    bool  _hasPlatterized;
    bool  _hasPreviewLifted;
    SBAppLayout * _initialAppLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _platterFrame;
    SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier * _transitionModifier;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (bool)completesWhenChildrenComplete;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (double)homeScreenDimmingAlpha;
- (id)initWithGestureID:(id)arg1 appLayout:(id)arg2 displayItemThatWouldBeEvicted:(id)arg3;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (bool)switcherHitTestsAsOpaque;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;

@end
