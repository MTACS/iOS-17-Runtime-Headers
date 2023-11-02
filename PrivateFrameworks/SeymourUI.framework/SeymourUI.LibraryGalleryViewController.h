
@interface SeymourUI.LibraryGalleryViewController : UIViewController {
    void contentInsetInitialBehavior;
    void currentContentInsetBehavior;
    void currentNavigationBarTintColor;
    void dataProvider;
    void dependencies;
    void destination;
    void eventHub;
    void galleryTitle;
    void isBeyondScrollBoundary;
    void isTransitioningContentInset;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricPageCategory;
    void platform;
    void resignActiveObserver;
    void serviceSubscriptionCache;
    void standardNavigationBarTintColor;
    void storefrontLocalizer;
    void upNextQueueButton;
    void upNextQueueButtonPresenter;
    void visibility;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
