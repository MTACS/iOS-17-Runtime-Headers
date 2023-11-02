
@interface StocksUI.ForYouFeedViewController : UIViewController <UICollectionViewDelegate> {
    void blueprintSelectionProvider;
    void blueprintViewController;
    void cancellables;
    void cardViewScrollViewCoordinator;
    void collapsingAnimator;
    void commands;
    void eventHandler;
    void eventManager;
    void forYouTitleView;
    void keyboardInputMonitor;
    void sharingActivityProviderFactory;
    void statusBarView;
    void styler;
    void toolbarManager;
    void toolbarTitleIsHidden;
    void watchlistManager;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
