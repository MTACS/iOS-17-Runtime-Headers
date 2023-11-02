
@interface _UIFocusGuideRegion : _UIFocusRegion {
    float  __focusPriority;
    bool  __ignoresSpeedBumpEdges;
    bool  __isUnclippable;
    bool  __isUnoccludable;
    <_UIFocusGuideRegionDelegate> * _delegate;
    <UIFocusEnvironment> * _owningEnvironment;
}

@property (setter=_setFocusPriority:, nonatomic) float _focusPriority;
@property (setter=_setIgnoresSpeedBumpEdges:, nonatomic) bool _ignoresSpeedBumpEdges;
@property (setter=_setIsUnclippable:, nonatomic) bool _isUnclippable;
@property (setter=_setIsUnoccludable:, nonatomic) bool _isUnoccludable;
@property (nonatomic) <_UIFocusGuideRegionDelegate> *delegate;
@property (nonatomic) <UIFocusEnvironment> *owningEnvironment;

- (void).cxx_destruct;
- (bool)_canBeOccludedByRegionsAbove;
- (bool)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 withSnapshot:(id)arg3;
- (float)_focusPriority;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;
- (bool)_ignoresSpeedBumpEdges;
- (bool)_isEnabledForFocusedRegion:(id)arg1 inSnapshot:(id)arg2;
- (bool)_isUnclippable;
- (bool)_isUnoccludable;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;
- (long long)_preferredDistanceComparisonType;
- (void)_setFocusPriority:(float)arg1;
- (void)_setIgnoresSpeedBumpEdges:(bool)arg1;
- (void)_setIsUnclippable:(bool)arg1;
- (void)_setIsUnoccludable:(bool)arg1;
- (bool)_shouldCropRegionToSearchArea;
- (bool)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)owningEnvironment;
- (void)setDelegate:(id)arg1;
- (void)setOwningEnvironment:(id)arg1;

@end
