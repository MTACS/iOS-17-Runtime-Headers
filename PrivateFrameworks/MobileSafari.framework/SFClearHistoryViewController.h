
@interface SFClearHistoryViewController : UITableViewController <SFTableViewDiffableDataSourceDelegate> {
    bool  _closeAllTabsToggleEnabled;
    NSIndexPath * _currentlySelectedProfileIndex;
    NSIndexPath * _currentlySelectedTimeframeIndex;
    SFTableViewDiffableDataSource * _dataSource;
    <SFClearHistoryViewControllerDelegate> * _delegate;
    unsigned long long  _numberOfProfileRows;
    NSArray * _profiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFClearHistoryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellForActionItemIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)_cellForAdditionalOptionsItemIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)_cellForProfileItemIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)_cellForTimeFrameItemIdentifier:(id)arg1 indexPath:(id)arg2;
- (void)_reloadDataAnimatingDifferences:(bool)arg1;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (id)delegate;
- (id)initWithTabGroupManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)submitButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)toggleSwitchChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
