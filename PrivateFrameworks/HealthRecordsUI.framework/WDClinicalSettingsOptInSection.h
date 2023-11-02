
@interface WDClinicalSettingsOptInSection : HRWDTableViewSection {
    bool  _optIn;
}

@property (nonatomic, readonly) bool optIn;

- (void)_fetchOptInStatus;
- (void)_handleOptInSwitchChanged:(id)arg1;
- (id)_optInCellForTableView:(id)arg1;
- (void)_setOptInStatus:(long long)arg1;
- (id)_viewDataCellForTableView:(id)arg1;
- (void)applicationWillEnterForeground;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)numberOfRows;
- (bool)optIn;
- (id)titleForHeader;
- (void)viewWillAppear:(bool)arg1;

@end
