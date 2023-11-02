
@interface STDevicePickupsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_specifierIdentifierDidChange:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (id)getPickupsInfo:(id)arg1;
- (id)init;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)showMostUsedDetailListController:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;

@end
