
@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController> {
    UIView<HUSearchBar> * _searchBar;
    unsigned long long  _searchBarPosition;
    UIScrollView * _searchBarWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView<HUSearchBar> *searchBar;
@property (nonatomic, readonly) unsigned long long searchBarPosition;
@property (nonatomic, readonly) UIScrollView *searchBarWrapper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4;
- (id)searchBar;
- (unsigned long long)searchBarPosition;
- (id)searchBarWrapper;
- (void)setupSearchBar;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateForSearch;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
