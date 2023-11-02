
@interface HMDCoreFollowUpManagerDataSource : NSObject <HMDCoreFollowUpManagerDataSource>

- (bool)currentDeviceIsAnAppleTV;
- (bool)currentDeviceSupportsDeviceSetup;
- (id)followUpActionForDeviceSetupManager:(id)arg1;
- (id)followUpControllerForDeviceSetupManager:(id)arg1;
- (id)followUpItemForDeviceSetupManager:(id)arg1;
- (id)followUpPreferencesBundleIdentifierForDeviceSetupManager:(id)arg1;

@end
