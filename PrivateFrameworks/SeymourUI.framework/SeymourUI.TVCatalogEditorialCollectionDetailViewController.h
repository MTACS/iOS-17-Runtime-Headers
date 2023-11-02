
@interface SeymourUI.TVCatalogEditorialCollectionDetailViewController : UIViewController {
    void artworkView;
    void bottomBlurView;
    void dataProvider;
    void dependencies;
    void editorialLayout;
    void ellipsisButton;
    void eventHub;
    void gradientMaskLayer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void layout;
    void menu;
    void platform;
    void resignActiveObserver;
    void settlingTimer;
    void shroudView;
    void storefrontLocalizer;
    void subtitleLabel;
    void timerProvider;
    void titleLabel;
    void visibility;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
