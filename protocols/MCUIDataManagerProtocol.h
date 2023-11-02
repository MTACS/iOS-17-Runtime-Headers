
@protocol MCUIDataManagerProtocol <NSObject>

@required

- (void)allDeviceManagementOutMDMProfileInfo:(id*)arg1 outConfigurationProfilesInfo:(id*)arg2 outUninstalledProfilesInfo:(id*)arg3 outEnterpriseAppSigners:(id*)arg4 outFreeDevAppSigners:(id*)arg5 outBlockedApplications:(id*)arg6;
- (bool)isDeviceManagementHidden;

@end
