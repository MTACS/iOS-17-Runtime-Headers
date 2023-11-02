
@interface MSDSearchResultViewController : UIViewController <MSDStoreInfoListViewControllerDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSTimer * _debounceTimer;
    <MSDSearchResultViewControllerDelegate> * _delegate;
    unsigned long long  _mode;
    UISearchBar * _searchBar;
    NSArray * _storeInfoList;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSTimer *debounceTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MSDSearchResultViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long mode;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, retain) NSArray *storeInfoList;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)debounceTimer;
- (id)delegate;
- (void)didConfirmStoreAssignment:(id)arg1;
- (void)dismissAllTopViews;
- (id)initWithDelegate:(id)arg1;
- (bool)isShowingSearchResult;
- (void)listViewDidClose:(id)arg1;
- (unsigned long long)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setDebounceTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setStoreInfoList:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)showInProgress;
- (void)showStoreInfo:(id)arg1;
- (void)showStoreList:(id)arg1 inDisplayMode:(unsigned long long)arg2;
- (id)storeInfoList;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(id)arg1 forStore:(id)arg2;
- (void)viewWillClose:(id)arg1 forStore:(id)arg2;

@end
