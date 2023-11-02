
@interface CompletionListTableViewController : SFPopoverSizingTableViewController {
    _UIVisualEffectBackdropView * _headerBackdropCaptureView;
    double  _keyboardBottomInset;
    bool  _shouldResetScrollOffsetOnNextLayout;
    bool  _showsWebSearchTipIfExists;
    double  _webSearchTipProposedHeight;
    UIView * _webSearchTipView;
}

@property (nonatomic, readonly) UITableViewHeaderFooterView *defaultHeaderFooterView;
@property (nonatomic) bool showsWebSearchTipIfExists;
@property (nonatomic, retain) UIView *webSearchTipView;

+ (void)configureCell:(id)arg1 backgroundMode:(long long)arg2 separatorStyle:(int)arg3 shouldHaveTopPadding:(bool)arg4 configurationStateDidChangeCallback:(id /* block */)arg5;
+ (id)tableViewCellForSizeEstimation;

- (void).cxx_destruct;
- (bool)_showingWebSearchTip;
- (void)_updateTableViewContentInset;
- (void)_updateWebSearchTipProposedHeightForTableViewWidth:(double)arg1;
- (id)backgroundColorUsingTranslucentAppearance:(bool)arg1;
- (id)defaultHeaderFooterView;
- (id)init;
- (void)keyboardDidChangeFrame:(id)arg1;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;
- (void)setNeedsScrollOffsetReset;
- (void)setShowsWebSearchTipIfExists:(bool)arg1;
- (void)setWebSearchTipView:(id)arg1;
- (bool)showsWebSearchTipIfExists;
- (void)updateContentInsets;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)webSearchTipView;

@end
