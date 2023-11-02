
@interface SUUIProductPageTableInAppPurchasesSection : SUUIProductPageTableSection {
    SUUIClientContext * _clientContext;
    SUUIColorScheme * _colorScheme;
    SUUIProductPageTableExpandableHeaderView * _headerView;
    NSArray * _inAppPurchases;
    NSNumberFormatter * _numberFormatter;
}

@property (nonatomic, retain) SUUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)colorScheme;
- (id)headerViewForTableView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;
- (long long)numberOfRowsInSection;
- (void)setColorScheme:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
