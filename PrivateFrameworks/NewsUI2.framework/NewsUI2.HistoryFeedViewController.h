
@interface NewsUI2.HistoryFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void $__lazy_storage_$_clearButton;
    void blueprintViewController;
    void commandContainer;
    void eventHandler;
    void newsActivityManager;
    void sharingActivityProviderFactory;
    void styler;
    void toolbarManager;
}

- (void).cxx_destruct;
- (void)clearHistory;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
