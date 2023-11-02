
@interface SBGridSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _activeAppLayoutInSwitcher;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerViewBounds_lastBounds;
    SBAppLayout * _currentAppLayout;
    _SBGridFloorSwitcherModifier * _floorModifier;
    SBGridLayoutSwitcherModifier * _gridLayoutModifier;
    unsigned long long  _ongoingAppLayoutRemovals;
}

- (void).cxx_destruct;
- (BOOL)activityModeForAppLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (void)didMoveToParentModifier:(id)arg1;
- (id)foregroundAppLayouts;
- (id)gridLayoutModifier;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (BOOL)jetsamModeForAppLayout:(id)arg1;
- (id)topMostLayoutElements;

@end
