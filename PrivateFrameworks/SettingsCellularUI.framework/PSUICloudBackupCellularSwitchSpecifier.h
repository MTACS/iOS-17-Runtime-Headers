
@interface PSUICloudBackupCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    ACAccountStore * _accountStore;
    MBManager * _backupManager;
}

+ (id)accountStore;

- (void).cxx_destruct;
- (id)appleAccount;
- (id)cellularUsagePolicy;
- (id)cloudBackupGroupSpecifier;
- (id)getLogger;
- (id)init;
- (id)initWithAppleAccountStore:(id)arg1;
- (void)setCellularUsagePolicy:(id)arg1;
- (bool)shouldShowCloudBackupCarrier;

@end
