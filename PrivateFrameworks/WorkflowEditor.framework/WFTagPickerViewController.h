
@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating> {
    <WFTagPickerViewControllerDelegate> * _delegate;
    UISearchController * _searchController;
    NSMutableOrderedSet * _selectedTags;
    NSArray * _tags;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTagPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UISearchController *searchController;
@property (nonatomic, readonly) NSMutableOrderedSet *selectedTags;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)cancel;
- (id)currentResults;
- (id)delegate;
- (void)dismiss;
- (id)initWithTitle:(id)arg1 tags:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)searchController;
- (id)selectedTags;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tags;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
