
@interface SeymourUI.UpNextQueueViewController : UIViewController {
    void blurView;
    void bookmarkClient;
    void contentInsetInitialBehavior;
    void currentContentInsetBehavior;
    void dataProvider;
    void dependencies;
    void eventHub;
    void galleryTitle;
    void isTransitioningContentInset;
    void layout;
    void mediaTagStringBuilder;
    void menuOptions;
    void platform;
    void queueActionsView;
    void queueActionsViewPresenter;
    void resignActiveObserver;
    void storefrontLocalizer;
    void subscriptionCache;
    void subscriptionToken;
    void upNextQueueClient;
    void visibility;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)dismissView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
