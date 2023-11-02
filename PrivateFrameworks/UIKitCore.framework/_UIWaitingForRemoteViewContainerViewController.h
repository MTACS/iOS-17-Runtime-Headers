
@interface _UIWaitingForRemoteViewContainerViewController : UIViewController {
    UIActivityIndicatorView * _loadingSpinner;
}

@property (nonatomic, retain) UIActivityIndicatorView *loadingSpinner;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)loadingSpinner;
- (void)setLoadingSpinner:(id)arg1;
- (void)stopSpinner;
- (void)viewWillLayoutSubviews;

@end
