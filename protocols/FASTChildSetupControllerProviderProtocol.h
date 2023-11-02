
@protocol FASTChildSetupControllerProviderProtocol <NSObject>

@required

- (bool)isScreenTimeSetupForDSID:(NSNumber *)arg1;
- (STChildSetupController *)newChildSetupControllerOnChildDeviceWithDSID:(NSNumber *)arg1 childAge:(NSNumber *)arg2 childName:(NSString *)arg3;
- (STChildSetupController *)newChildSetupControllerWithDSID:(NSNumber *)arg1 updateExistingSettings:(bool)arg2 childAge:(NSNumber *)arg3 childName:(NSString *)arg4;

@end
