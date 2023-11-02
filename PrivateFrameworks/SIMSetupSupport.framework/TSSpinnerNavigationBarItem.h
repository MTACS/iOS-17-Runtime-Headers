
@interface TSSpinnerNavigationBarItem : UIBarButtonItem {
    UIActivityIndicatorView * _activityIndicator;
}

@property (retain) UIActivityIndicatorView *activityIndicator;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)init;
- (void)setActivityIndicator:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end
