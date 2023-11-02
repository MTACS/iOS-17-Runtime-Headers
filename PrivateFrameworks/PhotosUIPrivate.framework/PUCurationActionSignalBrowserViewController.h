
@interface PUCurationActionSignalBrowserViewController : UITableViewController {
    NSArray * _availableActions;
}

@property (nonatomic, retain) NSArray *availableActions;

- (void).cxx_destruct;
- (id)availableActions;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAvailableActions:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
