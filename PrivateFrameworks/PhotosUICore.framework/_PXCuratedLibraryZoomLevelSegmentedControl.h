
@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl {
    bool  _lastTouchRemainedOnSelectedSegment;
}

@property (nonatomic, readonly) bool lastTouchRemainedOnSelectedSegment;

+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;

- (void)_highlightSegment:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)lastTouchRemainedOnSelectedSegment;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
