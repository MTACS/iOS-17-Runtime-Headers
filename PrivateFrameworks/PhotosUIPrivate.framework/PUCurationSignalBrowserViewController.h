
@interface PUCurationSignalBrowserViewController : UITableViewController {
    NSArray * _availableScoreConfiguration;
}

@property (nonatomic, retain) NSArray *availableScoreConfiguration;

- (void).cxx_destruct;
- (id)availableScoreConfiguration;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAvailableScoreConfiguration:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
