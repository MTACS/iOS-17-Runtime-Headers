
@interface ASCredentialRequestPaneViewController : UIViewController <UITableViewDelegate> {
    UIVisualEffectView * _blurryTray;
    <ASCredentialRequestPaneViewControllerDelegate> * _delegate;
    ASCredentialRequestPaneContext * _footerPaneContext;
    NSLayoutConstraint * _footerWidthConstraint;
    ASCredentialRequestPaneContext * _headerPaneContext;
    NSLayoutConstraint * _headerWidthConstraint;
    bool  _isTableViewRequired;
    UIStackView * _paneFooterStackView;
    UIStackView * _paneHeaderStackView;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASCredentialRequestPaneViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ASCredentialRequestPaneContext *footerPaneContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASCredentialRequestPaneContext *headerPaneContext;
@property (nonatomic, readonly) long long numberOfTableRows;
@property (nonatomic, readonly) UIStackView *paneFooterStackView;
@property (nonatomic, readonly) UIStackView *paneHeaderStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_adjustForPositionOfScrollView:(id)arg1;
- (double)_blurryTrayMinimumHeight;
- (id)_indexPathForLastRow;
- (double)_intrinsicContentHeight;
- (bool)_isContentUnderTray;
- (double)_maximumContentHeight;
- (double)_navigationBarHeaderHeight;
- (id)_newContainerView;
- (id)_newStackView;
- (long long)_safeIndexWithCount:(long long)arg1;
- (void)_setCompressedHeightForView:(id)arg1;
- (void)_setUpContexts;
- (void)_updateBlurForTray;
- (id)delegate;
- (id)footerPaneContext;
- (id)headerPaneContext;
- (id)initRequiringTableView:(bool)arg1;
- (long long)numberOfTableRows;
- (id)paneFooterStackView;
- (id)paneHeaderStackView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)sizeToFitPaneContent;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
