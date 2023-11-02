
@interface UIExpandedBarItemsTableViewController : UITableViewController {
    UIBarButtonItemGroup * _barButtonGroup;
}

@property (nonatomic, readonly) UIBarButtonItemGroup *barButtonGroup;

- (void).cxx_destruct;
- (id)_displayTitleForBarButtonItem:(id)arg1;
- (unsigned long long)_numberOfItems;
- (id)_visibleItems;
- (id)barButtonGroup;
- (id)initWithBarButtonGroup:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
