
@interface MagnifierSupport.FreezeFramePageFlippingController : MagnifierSupport.LensFilteringViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    void $__lazy_storage_$_assetURLs;
    void $__lazy_storage_$_pageController;
    void $__lazy_storage_$_shareBarButtonItem;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activePageIndexPath;
    void cancellables;
    void freezeFrameDisplayAppearanceSubscription;
    void pageSpacing;
    void pages;
    void thumbnailScrollingSubscriber;
}

@property (nonatomic, readonly) bool prefersStatusBarHidden;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleShareFreezeFrameMenuItemActionWithMenuLocation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (bool)prefersStatusBarHidden;
- (void)shareButtonAction:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
