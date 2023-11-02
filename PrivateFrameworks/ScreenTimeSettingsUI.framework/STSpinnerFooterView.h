
@interface STSpinnerFooterView : UITableViewHeaderFooterView <PSHeaderFooterView> {
    PSSpecifier * _specifier;
    UIActivityIndicatorView * _spinnerView;
    NSLayoutConstraint * _spinnerViewVerticalPositionConstraint;
}

@property (readonly) PSSpecifier *specifier;
@property (readonly) UIActivityIndicatorView *spinnerView;
@property (retain) NSLayoutConstraint *spinnerViewVerticalPositionConstraint;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (void)setSpinnerViewVerticalPositionConstraint:(id)arg1;
- (id)specifier;
- (id)spinnerView;
- (id)spinnerViewVerticalPositionConstraint;
- (void)startAnimatingSpinner;
- (void)stopAnimatingSpinner;

@end
