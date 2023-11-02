
@interface VUIDebugMetricsDictionaryViewController : UITableViewController {
    NSDictionary * _dictionary;
}

@property (nonatomic, retain) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)sortedKeys;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
