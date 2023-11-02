
@interface _TtCV15FocusSettingsUI22AvailableAppsTableView11Coordinator : NSObject <UITableViewDataSource, UITableViewDelegate> {
    void _selectedApps;
    void availableApps;
    void collation;
    void excludedApps;
    void iconCache;
    void sections;
    void showCheckmarks;
}

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
