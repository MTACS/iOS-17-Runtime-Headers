
@interface _UIFocusRegion : NSObject {
    <UICoordinateSpace> * _regionCoordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionFrame;
}

@property (getter=_debugAssociatedObject, nonatomic, readonly) id debugAssociatedObject;
@property (nonatomic, readonly) <UICoordinateSpace> *regionCoordinateSpace;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionFrame;

- (void).cxx_destruct;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (bool)_canBeOccludedByRegionsAbove;
- (bool)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;
- (id)_defaultFocusItem;
- (id)_descriptionBuilder;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1;
- (unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1;
- (float)_focusPriority;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;
- (bool)_ignoresSpeedBumpEdges;
- (bool)_isUnclippable;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;
- (long long)_preferredDistanceComparisonType;
- (bool)_shouldCropRegionToSearchArea;
- (bool)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)regionCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionFrame;

@end
