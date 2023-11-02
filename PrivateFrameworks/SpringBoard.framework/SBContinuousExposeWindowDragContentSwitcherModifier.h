
@interface SBContinuousExposeWindowDragContentSwitcherModifier : SBSwitcherModifier {
    SBContinuousExposeWindowDragSwitcherModifier * _gestureModifier;
    SBDisplayItem * _selectedDisplayItem;
}

@property (nonatomic, readonly) SBContinuousExposeWindowDragSwitcherModifier *gestureModifier;
@property (nonatomic, readonly) SBDisplayItem *selectedDisplayItem;

- (void).cxx_destruct;
- (void)_createFloorAndMultitaskingModifiersWithAppLayout:(id)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)gestureModifier;
- (id)initWithGestureID:(id)arg1 initialAppLayout:(id)arg2 selectedDisplayItem:(id)arg3;
- (id)selectedDisplayItem;
- (void)updateFloorModifiersWithAppLayout:(id)arg1;

@end
