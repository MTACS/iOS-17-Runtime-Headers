
@interface SBHitTestExtendedView : UIView {
    bool  _hitTestsSubviewsOutsideBounds;
}

@property (nonatomic) bool hitTestsSubviewsOutsideBounds;

- (bool)hitTestsSubviewsOutsideBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitTestsSubviewsOutsideBounds:(bool)arg1;

@end
