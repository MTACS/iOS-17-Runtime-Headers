
@interface MCUIDataManagerLite : NSObject <MCUIDataManagerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)allDeviceManagementOutMDMProfileInfo:(id*)arg1 outConfigurationProfilesInfo:(id*)arg2 outUninstalledProfilesInfo:(id*)arg3 outEnterpriseAppSigners:(id*)arg4 outFreeDevAppSigners:(id*)arg5 outBlockedApplications:(id*)arg6;
- (bool)isDeviceManagementHidden;

@end
