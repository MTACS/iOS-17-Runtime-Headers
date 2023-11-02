
@interface STScreenTimeUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    PSSpecifier * _usageSummaryGraphSpecifier;
    PSSpecifier * _weeklyTotalSpecifier;
}

@property (nonatomic, retain) PSSpecifier *usageSummaryGraphSpecifier;
@property (nonatomic, retain) PSSpecifier *weeklyTotalSpecifier;

- (void).cxx_destruct;
- (void)_headerButtonPressed:(id)arg1;
- (void)_lastUpdatedDateDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_refreshingDidChange:(bool)arg1;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_specifierIdentifierDidChange:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (id)_weeklyTotal:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setUsageSummaryGraphSpecifier:(id)arg1;
- (void)setWeeklyTotalSpecifier:(id)arg1;
- (id)usageSummaryGraphSpecifier;
- (id)weeklyTotalSpecifier;

@end
