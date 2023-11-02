
@interface HLPHelpSearchResultTableViewController : UITableViewController {
    UILabel * _footerLabel;
    UIView * _footerView;
    bool  _fullBookView;
    NSArray * _searchResults;
    double  _separatorValue;
}

@property (nonatomic, retain) UIView *footerView;
@property (nonatomic) bool fullBookView;
@property (nonatomic, retain) NSArray *searchResults;

- (void).cxx_destruct;
- (id)footerView;
- (bool)fullBookView;
- (void)preferSeparatorValue:(double)arg1;
- (id)searchResults;
- (void)setFooterView:(id)arg1;
- (void)setFullBookView:(bool)arg1;
- (void)setSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;
- (void)viewDidLoad;

@end
