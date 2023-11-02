
@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController {
    NSDictionary * _event;
    NSArray * _results;
}

@property (nonatomic, retain) NSDictionary *event;
@property (nonatomic, retain) NSArray *results;

- (void).cxx_destruct;
- (void)_reloadResults:(id)arg1;
- (id)event;
- (id)initWithEvent:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)results;
- (void)setEvent:(id)arg1;
- (void)setResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
