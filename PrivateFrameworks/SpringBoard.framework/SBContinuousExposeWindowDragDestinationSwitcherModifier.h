
@interface SBContinuousExposeWindowDragDestinationSwitcherModifier : SBSwitcherModifier {
    <SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> * _destinationDelegate;
    bool  _dragBeganInOtherSwitcher;
    SBAppLayout * _hoveringOverAppLayout;
    SBAppLayout * _initialAppLayout;
    SBContinuousExposeAutoLayoutSpace * _initialAutoLayoutSpace;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    SBDisplayItemLayoutAttributes * _initialSelectedDisplayItemLayoutAttributes;
    SBAppLayout * _lastAppLayoutForStripCalculation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    SBAppLayout * _proposedAppLayout;
    unsigned long long  _proposedDestination;
    SBDisplayItem * _selectedDisplayItem;
    double  _stripWidthForCancelZone;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) <SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> *destinationDelegate;
@property (nonatomic, readonly) SBAppLayout *hoveringOverAppLayout;
@property (nonatomic, readonly) SBAppLayout *initialAppLayout;
@property (nonatomic, readonly) SBAppLayout *proposedAppLayout;
@property (nonatomic, readonly) unsigned long long proposedDestination;
@property (nonatomic, readonly) SBDisplayItem *selectedDisplayItem;

- (void).cxx_destruct;
- (bool)_anyProposedAppLayoutContainsSelectedDisplayItem;
- (id)_appLayoutByAddingItem:(id)arg1 toAppLayout:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 center:(struct CGPoint { double x1; double x2; })arg4 positionIsSystemManaged:(bool)arg5;
- (id)_appLayoutContainingDisplayItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSelectedAppLayout:(id)arg1 addingToStage:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSelectedDisplayItemAddingToStage:(bool)arg1;
- (id)appLayoutByAddingAppLayout:(id)arg1 toAppLayout:(id)arg2;
- (id)destinationDelegate;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)hoveringOverAppLayout;
- (id)initWithSelectedDisplayItem:(id)arg1 initialAppLayout:(id)arg2 delegate:(id)arg3;
- (id)initialAppLayout;
- (id)proposedAppLayout;
- (id)proposedAppLayoutForWindowDrag;
- (unsigned long long)proposedDestination;
- (id)selectedDisplayItem;
- (void)updateProposedAppLayoutWithAppLayout:(id)arg1 andInitialAppLayout:(id)arg2;

@end
