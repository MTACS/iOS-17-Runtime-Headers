
@protocol HMDCoreFollowUpManagerDataSource

@required

- (bool)currentDeviceIsAnAppleTV;
- (bool)currentDeviceSupportsDeviceSetup;
- (<HMDFollowUpAction> *)followUpActionForDeviceSetupManager:(HMDCoreFollowUpManager *)arg1;
- (<HMDFollowUpController> *)followUpControllerForDeviceSetupManager:(HMDCoreFollowUpManager *)arg1;
- (<HMDFollowUpItem> *)followUpItemForDeviceSetupManager:(HMDCoreFollowUpManager *)arg1;
- (NSString *)followUpPreferencesBundleIdentifierForDeviceSetupManager:(HMDCoreFollowUpManager *)arg1;

@end
