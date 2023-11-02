
@interface SBFullscreenZoomView : SBZoomView {
    bool  _hasImage;
    id  _surface;
}

@property (nonatomic, readonly) id surface;

- (void).cxx_destruct;
- (void)_addBlackBackground;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_initWithView:(id)arg1 displayConfiguration:(id)arg2;
- (id)initWithContainingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 statusBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(bool)arg7 allowStatusBarToOverlap:(bool)arg8 useLargerCornerRadii:(bool)arg9 preventSplit:(bool)arg10 needsZoomFilter:(bool)arg11 asyncDecodeImage:(bool)arg12 forJail:(bool)arg13 hasOrientationMismatchForClassicApp:(bool)arg14;
- (id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3;
- (id)surface;

@end
