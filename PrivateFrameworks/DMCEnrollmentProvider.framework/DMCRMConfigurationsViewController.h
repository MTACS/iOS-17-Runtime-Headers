
@interface DMCRMConfigurationsViewController : DMCProfileTableViewController {
    NSArray * _rmSectionTitles;
    RMConfigurationsSpecifierProvider * _rmSpecifierProvider;
    NSArray * _rmTableSectionCells;
}

@property (nonatomic, retain) NSArray *rmSectionTitles;
@property (nonatomic, retain) RMConfigurationsSpecifierProvider *rmSpecifierProvider;
@property (nonatomic, retain) NSArray *rmTableSectionCells;

- (void).cxx_destruct;
- (void)_rmConfigsChanged:(id)arg1;
- (void)_setSections;
- (id)initWithRMConfigurationsSpecifierProvider:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)rmSectionTitles;
- (id)rmSpecifierProvider;
- (id)rmTableSectionCells;
- (void)setRmSectionTitles:(id)arg1;
- (void)setRmSpecifierProvider:(id)arg1;
- (void)setRmTableSectionCells:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
