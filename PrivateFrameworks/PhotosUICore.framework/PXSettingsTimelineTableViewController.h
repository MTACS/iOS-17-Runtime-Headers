
@interface PXSettingsTimelineTableViewController : UITableViewController {
    NSArray * _widgetSizes;
}

@property (nonatomic, retain) NSArray *widgetSizes;

- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setWidgetSizes:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)widgetSizes;

@end
