
@interface AMSUICommonLoadingViewController : AMSUICommonViewController {
    AMSUILoadingView * _loadingView;
}

@property (nonatomic, retain) AMSUILoadingView *loadingView;

- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
