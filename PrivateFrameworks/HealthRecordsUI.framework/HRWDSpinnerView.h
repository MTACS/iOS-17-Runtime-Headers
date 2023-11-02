
@interface HRWDSpinnerView : UIView {
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
    NSLayoutConstraint * _spinnerTopConstraint;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)init;
- (bool)isAnimating;
- (void)setMessageFont:(id)arg1;
- (void)setMessageWhileSpinning:(id)arg1;
- (void)startSpinner;
- (void)stopSpinner;
- (void)updateConstraints;

@end
