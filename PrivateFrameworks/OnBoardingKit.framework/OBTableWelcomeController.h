
@interface OBTableWelcomeController : OBWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver> {
    bool  _adoptTableViewScrollView;
    OBTableHeaderFooterView * _footerContainer;
    OBTableHeaderFooterView * _headerContainer;
    UIView * _hostedTableFooterView;
    UIView * _hostedTableHeaderView;
    UITableView * _tableView;
}

@property (nonatomic) bool adoptTableViewScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) OBTableHeaderFooterView *footerContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBTableHeaderFooterView *headerContainer;
@property (nonatomic, retain) UIView *hostedTableFooterView;
@property (nonatomic, retain) UIView *hostedTableHeaderView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (bool)_buttonTrayInlined;
- (void)_floatButtonTray;
- (void)_inlineButtonTray;
- (void)_insertPendingTableView;
- (void)_layoutButtonTray;
- (void)_layoutFooterContainerFloatButtonTray;
- (void)_layoutFooterContainerInlineButtonTray;
- (bool)_scrollContentUnderButtonTrayForGroupedStyle;
- (bool)_scrollViewContentIsUnderTray;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)_setTableView:(id)arg1;
- (void)_setTableViewNonHeaderFooterDonation:(id)arg1;
- (void)_setTableViewWithHeaderFooterDonation:(id)arg1;
- (void)_setupScrollView;
- (void)_updateButtonTrayTableFooterContainerSizeIfNeeded;
- (void)_updateDirectionalLayoutMarginsForTableView;
- (void)_updateHeaderFooterViewSizeIfNeeded;
- (void)_updateHeaderTopOffsetConstraint;
- (void)_updateTableHeaderViewSizeIfNeeded;
- (bool)adoptTableViewScrollView;
- (bool)contentViewUnderButtonTray;
- (id)footerContainer;
- (id)headerContainer;
- (double)headerViewBottomToTableViewTopPadding;
- (id)hostedTableFooterView;
- (id)hostedTableHeaderView;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (void)loadView;
- (id)scrollView;
- (void)setAdoptTableViewScrollView:(bool)arg1;
- (void)setFooterContainer:(id)arg1;
- (void)setHeaderContainer:(id)arg1;
- (void)setHostedTableFooterView:(id)arg1;
- (void)setHostedTableHeaderView:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
