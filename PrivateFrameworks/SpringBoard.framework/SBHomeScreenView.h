
@interface SBHomeScreenView : UIView {
    SBFStatusBarLegibilityView * _statusBarLegibilityView;
}

@property (nonatomic, readonly) SBFStatusBarLegibilityView *statusBarLegibilityView;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)statusBarLegibilityView;

@end
