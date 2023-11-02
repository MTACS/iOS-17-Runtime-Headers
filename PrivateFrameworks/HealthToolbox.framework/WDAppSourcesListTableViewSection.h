
@interface WDAppSourcesListTableViewSection : WDSourcesListTableViewSection {
    NSArray * _installedSources;
    bool  _uninstalledSourcesExist;
}

@property (nonatomic, copy) NSArray *installedSources;
@property (nonatomic) bool uninstalledSourcesExist;

- (void).cxx_destruct;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)_uninstalledSourcesCellWithTableView:(id)arg1;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)dataSourceDidUpdate;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)installedSources;
- (id)noneString;
- (unsigned long long)numberOfRows;
- (void)setInstalledSources:(id)arg1;
- (void)setUninstalledSourcesExist:(bool)arg1;
- (id)titleForFooter;
- (id)titleForHeader;
- (bool)uninstalledSourcesExist;

@end
