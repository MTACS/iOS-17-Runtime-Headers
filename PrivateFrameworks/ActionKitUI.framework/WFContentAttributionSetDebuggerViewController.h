
@interface WFContentAttributionSetDebuggerViewController : UITableViewController {
    NSArray * _contentItems;
}

@property (nonatomic, retain) NSArray *contentItems;

- (void).cxx_destruct;
- (id)contentItems;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setContentItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
