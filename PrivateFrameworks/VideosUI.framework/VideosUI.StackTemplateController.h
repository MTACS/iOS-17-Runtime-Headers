
@interface VideosUI.StackTemplateController : VideosUI.StackViewController {
    void accountMessageAdditionTargetOffset;
    void accountMessageDismissalTargetOffset;
    void accountMessageNeedsDeferredAnimationIn;
    void accountMessageViewController;
    void accountMessageViewModel;
    void anchorIdToHighlight;
    void didEnqueueImpressionMetrics;
    void hasEnabledShowcasing;
    void lastShowcasePercentage;
    void navBarGradientView;
    void notificationCenter;
    void pagePerformanceProvider;
    void pastFirstViewDidAppear;
    void showcasePercentageObserver;
    void statusBarGradientView;
    void statusBarStyle;
    void supportsTabBarChildContentInsets;
    void supportsTabBarChildControllerBehaviours;
    void targetParentController;
    void viewIsVisibleForAccountMessage;
    void waitingForPresentationDismissal;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)vuiScrollViewDidScroll:(id)arg1;
- (bool)vuiScrollViewShouldScrollToTop:(id)arg1;
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)vui_didMoveToParentViewController:(id)arg1;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;
- (void)vui_willMoveToParentViewController:(id)arg1;
- (void)willEnterForeground:(id)arg1;

@end
