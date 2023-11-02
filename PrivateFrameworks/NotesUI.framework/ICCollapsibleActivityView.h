
@interface ICCollapsibleActivityView : ICCollapsibleBaseView {
    UIActivityIndicatorView * _activityIndicator;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) bool isAnimating;

- (void).cxx_destruct;
- (id)activityIndicator;
- (bool)isAnimating;
- (void)performSetup;
- (void)setActivityIndicator:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
