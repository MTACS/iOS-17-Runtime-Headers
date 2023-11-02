
@interface NewsArticles.IssueViewerViewController : UIViewController <NAANFHostable> {
    void afterLoad;
    void contentViewController;
    void contentViewControllerFactory;
    void coverViewManager;
    void eventHandler;
    void navigationItemStyle;
    void sceneStateManager;
    void styler;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long viewingLocation;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (unsigned long long)viewingLocation;

@end
