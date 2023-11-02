
@interface WFAppSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _allowMultipleSelection;
    long long  _appSearchType;
    NSArray * _apps;
    NSMutableDictionary * _cachedAppIconForBundleId;
    <WFAppSearchViewControllerDelegate> * _delegate;
    NSArray * _omittedAppBundleIDs;
    UIImage * _placeholderImage;
    NSMutableOrderedSet * _selectedApps;
    UITableView * _tableView;
}

@property (nonatomic, readonly) bool allowMultipleSelection;
@property (nonatomic, readonly) long long appSearchType;
@property (nonatomic, copy) NSArray *apps;
@property (nonatomic, retain) NSMutableDictionary *cachedAppIconForBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAppSearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *omittedAppBundleIDs;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, retain) NSMutableOrderedSet *selectedApps;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (void)adjustInsetsForKeyboard;
- (bool)allowMultipleSelection;
- (long long)appSearchType;
- (id)applicationIconImageForBundleIdentifier:(id)arg1;
- (id)apps;
- (id)cachedAppIconForBundleId;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)done;
- (id)filteredApps;
- (id)init;
- (id)initWithAppSearchType:(long long)arg1;
- (id)initWithAppSearchType:(long long)arg1 allowMultipleSelection:(bool)arg2 selectedApps:(id)arg3;
- (id)initWithAppSearchType:(long long)arg1 omittedAppBundleIDs:(id)arg2 allowMultipleSelection:(bool)arg3 selectedApps:(id)arg4;
- (void)loadApps;
- (void)loadView;
- (id)omittedAppBundleIDs;
- (id)placeholderImage;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)selectedApps;
- (void)setApps:(id)arg1;
- (void)setCachedAppIconForBundleId:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setSelectedApps:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateDoneButtonEnabledState;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
