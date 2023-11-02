
@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion {
    <_UIFocusRegionContainer> * _contentFocusRegionContainer;
}

@property (nonatomic, retain) <_UIFocusRegionContainer> *contentFocusRegionContainer;

- (void).cxx_destruct;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 withSnapshot:(id)arg3;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)contentFocusRegionContainer;
- (bool)isEqual:(id)arg1;
- (void)setContentFocusRegionContainer:(id)arg1;

@end
