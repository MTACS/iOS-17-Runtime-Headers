
@interface _UIFocusItemRegion : _UIFocusRegion {
    struct { 
        unsigned int itemIsEligibleForFocusOcclusion : 1; 
        unsigned int itemIsFocusable : 1; 
        unsigned int itemIsTransparent : 1; 
    }  _flags;
    <UIFocusItem> * _item;
}

@property (nonatomic, readonly) <UIFocusItem> *item;

- (void).cxx_destruct;
- (bool)_canBeOccludedByRegionsAbove;
- (bool)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;
- (id)_defaultFocusItem;
- (id)_descriptionBuilder;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;
- (long long)_preferredDistanceComparisonType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2 item:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 item:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)item;

@end
