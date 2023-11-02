
@interface EKCalendarColorViewController : UITableViewController {
    EKCalendarColorEditItem * _editItem;
}

@property (nonatomic, retain) EKCalendarColorEditItem *editItem;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)editItem;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)resetBackgroundColor;
- (void)setEditItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
