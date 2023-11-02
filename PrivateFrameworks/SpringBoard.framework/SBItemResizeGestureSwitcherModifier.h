
@interface SBItemResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBContinuousExposeAutoLayoutController * _autoLayoutController;
    unsigned long long  _currentActiveResizeCorner;
    SBAppLayout * _currentAppLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentFrameForDrawingInScreenCoordinates;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSceneSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrameInScreenCoordinates;
    SBDisplayItemLayoutGrid * _layoutGrid;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationEdgeAdjustment;
    unsigned long long  _resizeAnchor;
    unsigned long long  _selectedEdge;
    bool  _selectedItemWasInitiallyInDefaultPosition;
    long long  _selectedLayoutRole;
}

@property (nonatomic, readonly) SBAppLayout *selectedAppLayout;

- (void).cxx_destruct;
- (id)_animationSettingsForLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertToScreenRectFromSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertToSpaceRectFromScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialScaledFrameInScreenCoordinatesForSelectedDisplayItemInAppLayout:(id)arg1;
- (bool)_isStripVisibleForCurrentAppLayout;
- (id)_responseForGestureUpdateAtGestureEnd:(bool)arg1;
- (id)_responseForSceneSizeUpdateToSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2 sceneUpdatesOnly:(bool)arg3;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleGestureEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isItemResizingAllowedForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)layoutRestrictionInfoForItem:(id)arg1;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (id)selectedAppLayout;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;
- (bool)wantsSceneResizesHostedContextForAppLayout:(id)arg1;

@end
