
@interface AppleMediaServicesUIDynamic.LoadingViewController : AMSUICommonViewController {
    void activityIndicator;
    void loadingView;
    void style;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
