
@interface STNoUsageReportedGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _noUsageReportedAlertSpecifier;
}

@property (retain) PSSpecifier *noUsageReportedAlertSpecifier;

- (void).cxx_destruct;
- (void)_devicesDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)noUsageReportedAlertSpecifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setNoUsageReportedAlertSpecifier:(id)arg1;

@end
