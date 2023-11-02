
@interface PXSettingsMeaningsTableViewController : UITableViewController {
    NSDictionary * _meaningDataContainerByMeaningLabels;
    NSArray * _meaningLabels;
}

@property (nonatomic, retain) NSDictionary *meaningDataContainerByMeaningLabels;
@property (nonatomic, retain) NSArray *meaningLabels;

- (void).cxx_destruct;
- (id)_meaningDataContainerByMeaningLabels;
- (id)_momentIdentifiersByMeaningLabel;
- (id)init;
- (id)meaningDataContainerByMeaningLabels;
- (id)meaningLabels;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setMeaningDataContainerByMeaningLabels:(id)arg1;
- (void)setMeaningLabels:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
