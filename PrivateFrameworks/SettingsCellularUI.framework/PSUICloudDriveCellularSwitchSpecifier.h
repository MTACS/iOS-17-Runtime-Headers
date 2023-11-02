
@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    ACAccountStore * _accountStore;
}

+ (id)accountStore;

- (void).cxx_destruct;
- (id)appleAccount;
- (id)cellularUsagePolicy;
- (id)cloudDriveGroupSpecifier;
- (id)getLogger;
- (id)initDefault;
- (id)initWithAppleAccountStore:(id)arg1;
- (void)setCellularUsagePolicy:(id)arg1;
- (bool)shouldShowCloudDrive;

@end
