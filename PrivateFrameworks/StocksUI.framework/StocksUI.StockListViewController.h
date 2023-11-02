
@interface StocksUI.StockListViewController : TUViewController <UICollectionViewDelegate, UISearchControllerDelegate> {
    void $__lazy_storage_$_exchangeStatusToolbarItem;
    void appConfigurationManager;
    void applicationStateObserver;
    void backgroundView;
    void blueprintSelectionProvider;
    void blueprintViewController;
    void bootstrapper;
    void commands;
    void contentSizeCategoryObserver;
    void editWatchlistMenuProvider;
    void eventHandler;
    void featureAvailability;
    void keyboardInputMonitor;
    void lastContentOffset;
    void lazySearchController;
    void mastheadViewProvider;
    void quoteAttributionProvider;
    void renderer;
    void scrollTracker;
    void styler;
    void toolbarState;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteItem;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)didTapAttributionButton;
- (void)didTapPlusButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (long long)preferredStatusBarStyle;
- (void)reconfigureLayoutForAccessibilityStateChange;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
