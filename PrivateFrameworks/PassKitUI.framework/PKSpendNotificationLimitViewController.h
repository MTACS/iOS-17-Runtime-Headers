
@interface PKSpendNotificationLimitViewController : UITableViewController {
    id /* block */  _changeHandler;
    PKCurrencyAmountSelectorCustomEntryItem * _customEntryItem;
    PKTableViewDiffableDataSource * _dataSource;
    NSString * _footerText;
    PKCurrencyAmountSelectorOptionProvider * _provider;
}

@property (nonatomic, copy) id /* block */ changeHandler;

- (void).cxx_destruct;
- (void)_deleteOptionAtIndexPath:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_updateNavigationItemsIsEditing:(bool)arg1;
- (void)_updateSnapshotAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id /* block */)changeHandler;
- (id)initWithTitle:(id)arg1 footerText:(id)arg2 provider:(id)arg3;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
