
@interface StocksUI.StockFeedViewController : UIViewController <EKEventEditViewDelegate, UICollectionViewDelegate> {
    void blueprintSelectionProvider;
    void blueprintViewController;
    void cardViewScrollViewCoordinator;
    void commandCenter;
    void commandContainer;
    void commandTracker;
    void delayedTipPresentation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  earnings;
    void earningsCalendarManager;
    void eventHandler;
    void keyboardInputMonitor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  latestQuote;
    void newlyAddedEventToCalendar;
    void overlayView;
    void prewarmState;
    void sceneProvider;
    void sharingActivityProviderFactory;
    void statusBarView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stock;
    void stockFeedTitleView;
    void stockListSelection;
    void styler;
    void toolbarManager;
    void toolbarTitleIsHidden;
    void watchState;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
