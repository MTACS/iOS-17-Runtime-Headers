
@interface SBMedusaWindowDragGestureDestinationModifier : SBSwitcherModifier {
    SBAppLayout * _currentAppLayout;
    unsigned long long  _currentDestination;
    CADisplayLink * _displayLink;
    bool  _dragBeganInOtherSwitcher;
    bool  _dragBeganInOurSwitcher;
    <SBMedusaWindowDragGestureDestinationModifierDelegate> * _dragDestinationDelegate;
    unsigned long long  _dragPauseCounter;
    bool  _enteredPlatterZone;
    unsigned long long  _gesturePhase;
    bool  _hasResizedEnoughToUnblur;
    SBAppLayout * _initialFloatingAppLayout;
    long long  _initialFloatingConfiguration;
    SBAppLayout * _initialMainAppLayout;
    bool  _isResizingToFullScreen;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    SBSwitcherModifierEventResponse * _pendingEnterPlatterZoneResponse;
    SBAppLayout * _proposedAppLayout;
    SBAppLayout * _selectedLeafAppLayout;
    bool  _supportsCenterRole;
    bool  _supportsMedusa;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) SBAppLayout *currentAppLayout;
@property (nonatomic, readonly) unsigned long long currentDestination;
@property (getter=hasEnteredPlatterZone, nonatomic, readonly) bool enteredPlatterZone;
@property (nonatomic, readonly) SBAppLayout *proposedAppLayout;

- (void).cxx_destruct;
- (double)_contentDraggingCommandeerWidth;
- (double)_contentDraggingFloatingActivationWidth;
- (double)_contentDraggingSideActivationWidth;
- (double)_dismissLeftBoundary;
- (double)_dismissRightBoundary;
- (void)_displayLinkFired:(id)arg1;
- (bool)_draggingCenterWindow;
- (bool)_draggingFullScreenApp;
- (bool)_draggingSlideOverApp;
- (bool)_draggingSplitViewApp;
- (struct CGSize { double x1; double x2; })_fullscreenActivationRegionSize;
- (bool)_isDragOverFullscreenRegionAtLocation:(struct CGPoint { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_isDragOverSideGutterRegionsAtLocation:(struct CGPoint { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 totalContentDragGutterWidth:(double)arg3;
- (long long)_layoutRoleForDraggedApp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftFloatingZoneForCenterWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightFloatingZoneForCenterWindow;
- (bool)_shouldMinimizeOrEnterSplitHomeScreen;
- (double)_sideActivationGutterSize;
- (id)_transitionRequestForDestination:(unsigned long long)arg1 complete:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_universalCenterZone;
- (void)_updateCurrentDropAction;
- (id)_updateForWindowDrag;
- (id)currentAppLayout;
- (unsigned long long)currentDestination;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleResizeProgressEvent:(id)arg1;
- (bool)hasEnteredPlatterZone;
- (id)initWithSelectedLeafAppLayout:(id)arg1 initialMainAppLayout:(id)arg2 initialFloatingAppLayout:(id)arg3 initialFloatingConfiguration:(long long)arg4 delegate:(id)arg5;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (id)proposedAppLayout;
- (id)proposedAppLayoutForWindowDrag;
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;

@end
