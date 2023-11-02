
@interface _SFSettingsAlertItemBackgroundView : UIView {
    NSLayoutConstraint * _highlightPixelHeightConstraint;
    NSLayoutConstraint * _highlightPixelWidthConstraint;
    NSLayoutConstraint * _highlightToBottomConstraint;
    NSLayoutConstraint * _highlightToLeadingConstraint;
    NSLayoutConstraint * _highlightToLeadingWithSpaceConstraint;
    NSLayoutConstraint * _highlightToTopConstraint;
    UIVisualEffectView * _highlightView;
    long long  _mode;
}

@property (nonatomic) long long mode;

- (void).cxx_destruct;
- (id)_highlightEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (void)updateConstraints;

@end
