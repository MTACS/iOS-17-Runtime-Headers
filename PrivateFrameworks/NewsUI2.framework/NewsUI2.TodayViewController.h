
@interface NewsUI2.TodayViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable, TUScrollable, UICollectionViewDelegate> {
    void _lastImpression;
    void barCompressionManager;
    void blueprintLayoutProvider;
    void blueprintSelectionProvider;
    void blueprintViewController;
    void commands;
    void deferLoadingContent;
    void didAppearCompletions;
    void didDisappearCompletions;
    void eventHandler;
    void loadingGate;
    void mastheadViewProviderDelegate;
    void refreshControl;
    void refreshStateMachine;
    void sharingActivityProviderFactory;
    void styler;
    void visibilityEventManager;
}

- (void).cxx_destruct;
- (void)deselect;
- (void)didPullToRefresh;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)significantTimeChangeDidOccur;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
