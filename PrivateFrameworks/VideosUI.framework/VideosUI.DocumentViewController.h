
@interface VideosUI.DocumentViewController : VideosUI.VUIViewController <AMSUIMessageViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void bubbletipOverlayController;
    void deferLoadingTemplateController;
    void document;
    void documentDelegate;
    void documentDidSetHandler;
    void ignoreDidMoveToNilParent;
    void isInTabBarMode;
    void isTabBarChild;
    void isTransitioning;
    void loadingViewManager;
    void navBarCachedWidth;
    void navBarOpacity;
    void navBarPrefersLargeTitles;
    void navBarTintColor;
    void navBarTitle;
    void navBarTitleOpacity;
    void navBarTitleView;
    void needsConfigurationWhenMovesToParent;
    void rebaseIdentifier;
    void templateViewController;
    void viewWillAppearAfterTabSwitch;
    void viewWillAppearButNotDidAppear;
}

@property (nonatomic, retain) <UIActivityItemsConfigurationReading> *activityItemsConfiguration;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) bool vuiShouldAutomaticallyForwardAppearanceMethods;

- (void).cxx_destruct;
- (id)activityItemsConfiguration;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)messageViewController:(id)arg1 enqueueEventWithFields:(id)arg2 inTopic:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)playbackUIChanged:(id)arg1;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (void)scrollToTopWithAnimated:(bool)arg1 needsFocusUpdate:(bool)arg2;
- (void)setActivityItemsConfiguration:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)vuiShouldAutomaticallyForwardAppearanceMethods;
- (void)vui_didMoveToParentViewController:(id)arg1;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;
- (void)willResignActive:(id)arg1;
- (void)willTerminate:(id)arg1;

@end
