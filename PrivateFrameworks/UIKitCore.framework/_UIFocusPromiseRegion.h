
@interface _UIFocusPromiseRegion : _UIFocusRegion {
    id /* block */  _contentFulfillmentHandler;
    unsigned long long  _fullfillmentCount;
    id  _identifier;
}

@property (nonatomic, copy) id /* block */ contentFulfillmentHandler;

- (void).cxx_destruct;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;
- (id)_descriptionBuilder;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;
- (id /* block */)contentFulfillmentHandler;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setContentFulfillmentHandler:(id /* block */)arg1;

@end
