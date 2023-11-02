
@interface _SBFActualClippingView : SBFTouchPassThroughView {
    bool  _hitTestsSubviewsOutsideBounds;
}

@property (nonatomic) bool hitTestsSubviewsOutsideBounds;

- (bool)hitTestsSubviewsOutsideBounds;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitTestsSubviewsOutsideBounds:(bool)arg1;

@end
