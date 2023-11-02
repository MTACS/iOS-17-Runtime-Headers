
@interface PXSettingsSearchViewController : UITableViewController <PXInfoProvider, PXInfoUpdaterObserver, UISearchBarDelegate> {
    PXSettingsIndex * _index;
    PXSettingsIndexer * _indexer;
    NSProgress * _indexingProgress;
    PXInfoUpdater * _resultsInfoUpdater;
    UISearchBar * _searchBar;
    NSArray * _searchResults;
    PTUISettingsController * _settingsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSettingsIndex *index;
@property (nonatomic, retain) PXSettingsIndexer *indexer;
@property (nonatomic, retain) NSProgress *indexingProgress;
@property (nonatomic, readonly) PXInfoUpdater *resultsInfoUpdater;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, copy) NSArray *searchResults;
@property (nonatomic, readonly) PTUISettingsController *settingsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancelItem:(id)arg1;
- (void)_indexerDidComplete;
- (id)index;
- (id)indexer;
- (id)indexingProgress;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSettingsController:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)resultsInfoUpdater;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)searchResults;
- (void)setIndex:(id)arg1;
- (void)setIndexer:(id)arg1;
- (void)setIndexingProgress:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)settingsController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
