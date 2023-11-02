
@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {
    STScreenTimeReportController * _reportController;
    PSSpecifier * _screenTimeReportSpecifier;
    PSSpecifier * _seeAllActivitySpecifier;
    PSSpecifier * _usageSummarySpecifier;
}

@property (retain) STScreenTimeReportController *reportController;
@property (readonly) PSSpecifier *screenTimeReportSpecifier;
@property (readonly) PSSpecifier *seeAllActivitySpecifier;
@property (readonly) PSSpecifier *usageSummarySpecifier;

- (void).cxx_destruct;
- (id)_createScreenTimeReportControllerWithSpecifier:(id)arg1;
- (id)_createUsageDetailListControllerWithSpecifier:(id)arg1;
- (void)_displayNameDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_hasDeviceActivityDataDidChange:(bool)arg1;
- (void)_hasWatchOSDevicesOnlyDidChange:(bool)arg1;
- (void)_refreshingDidChange:(bool)arg1;
- (id)_rootViewModelCoordinator:(id)arg1;
- (void)_screenTimeEnabledDidChange:(bool)arg1;
- (void)_showScreenTimeReportViewController:(id)arg1;
- (void)_showUsageDetailListController:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (void)_usageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)reportController;
- (id)screenTimeReportSpecifier;
- (id)seeAllActivitySpecifier;
- (void)setCoordinator:(id)arg1;
- (void)setReportController:(id)arg1;
- (id)usageSummarySpecifier;

@end
