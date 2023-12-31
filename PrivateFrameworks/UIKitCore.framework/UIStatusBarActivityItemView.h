
@interface UIStatusBarActivityItemView : UIStatusBarItemView {
    UIActivityIndicatorView * _accessibilityHUDIndicator;
    UIActivityIndicatorView * _activityIndicator;
    bool  _slowActivity;
    bool  _syncActivity;
}

- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (void)_startAnimating;
- (void)_stopAnimating;
- (id)accessibilityHUDRepresentation;
- (void)setVisible:(bool)arg1;
- (double)shadowPadding;
- (double)updateContentsAndWidth;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
