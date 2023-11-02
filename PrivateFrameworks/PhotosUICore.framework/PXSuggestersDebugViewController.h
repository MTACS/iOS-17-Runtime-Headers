
@interface PXSuggestersDebugViewController : UITableViewController {
    NSArray * _items;
    NSDictionary * _options;
}

- (void).cxx_destruct;
- (void)_fetchSuggesters;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
