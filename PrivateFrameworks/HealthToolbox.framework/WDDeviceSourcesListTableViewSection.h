
@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection {
    NSArray * _devices;
    NSMutableSet * _identifiers;
    NSArray * _list;
    NSArray * _sources;
}

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) NSMutableSet *identifiers;
@property (nonatomic, copy) NSArray *list;
@property (nonatomic, copy) NSArray *sources;

- (void).cxx_destruct;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (bool)_isSourceSelectable:(id)arg1;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)_sourceForRow:(long long)arg1;
- (void)applicationWillEnterForeground;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)dataSourceDidUpdate;
- (id)devices;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)identifiers;
- (id)list;
- (id)noneString;
- (unsigned long long)numberOfRows;
- (void)reloadDevices;
- (void)setDevices:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setList:(id)arg1;
- (void)setSourceListDataSource:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setSources:(id)arg1 devices:(id)arg2;
- (id)sources;
- (id)titleForFooter;
- (id)titleForHeader;
- (id)willSelectRow:(id)arg1;

@end
