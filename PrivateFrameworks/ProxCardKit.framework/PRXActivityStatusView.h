
@interface PRXActivityStatusView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    NSLayoutConstraint * _activityIndicatorVerticalConstraint;
    PRXLabel * _statusLabel;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) NSLayoutConstraint *activityIndicatorVerticalConstraint;
@property (nonatomic, readonly) PRXLabel *statusLabel;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)activityIndicatorVerticalConstraint;
- (double)activityIndicatorVerticalShift;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)statusLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
