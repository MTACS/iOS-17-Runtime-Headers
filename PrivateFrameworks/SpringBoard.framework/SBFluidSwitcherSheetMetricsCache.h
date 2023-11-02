
@interface SBFluidSwitcherSheetMetricsCache : NSObject {
    NSMutableDictionary * _boundsToTransformMap;
    NSMutableDictionary * _cacheKeyToSizeValueMap;
}

- (void).cxx_destruct;
- (id)_displayEdgeInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageSheetFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interfaceOrientation:(long long)arg2 configuration:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageSheetFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interfaceOrientation:(long long)arg2 configuration:(long long)arg3 userInterfaceIdiom:(long long)arg4 displayScale:(double)arg5 displayEdgeInfo:(id)arg6;
- (struct CGSize { double x1; double x2; })pageSheetMetricsForBoundsSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 configuration:(long long)arg3;
- (struct CGSize { double x1; double x2; })pageSheetMetricsForBoundsSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 configuration:(long long)arg3 userInterfaceIdiom:(long long)arg4 displayScale:(double)arg5 displayEdgeInfo:(id)arg6;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForCardUnderSheetForBoundsSize:(struct CGSize { double x1; double x2; })arg1;

@end
