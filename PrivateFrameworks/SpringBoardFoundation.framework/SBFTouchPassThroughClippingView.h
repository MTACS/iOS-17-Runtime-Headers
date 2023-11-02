
@interface SBFTouchPassThroughClippingView : SBFTouchPassThroughView {
    bool  _contentClippingEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentClippingFrame;
    _SBFActualClippingView * _contentClippingView;
    double  _contentCornerRadius;
    bool  _hitTestsSubviewsOutsideBounds;
}

@property (getter=isContentClippingEnabled, nonatomic) bool contentClippingEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentClippingFrame;
@property (nonatomic, retain) _SBFActualClippingView *contentClippingView;
@property (nonatomic) double contentCornerRadius;
@property (nonatomic) bool hitTestsSubviewsOutsideBounds;

- (void).cxx_destruct;
- (void)_layoutContentClippingView;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)addSubview:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentClippingFrame;
- (id)contentClippingView;
- (double)contentCornerRadius;
- (bool)hitTestsSubviewsOutsideBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (bool)isContentClippingEnabled;
- (void)layoutSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentClippingEnabled:(bool)arg1;
- (void)setContentClippingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentClippingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg2;
- (void)setContentClippingView:(id)arg1;
- (void)setContentCornerRadius:(double)arg1;
- (void)setHitTestsSubviewsOutsideBounds:(bool)arg1;
- (void)setOpaque:(bool)arg1;

@end
