
@interface FASTChildSetupControllerProvider : NSObject <FASTChildSetupControllerProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isScreenTimeSetupForDSID:(id)arg1;
- (id)newChildSetupControllerOnChildDeviceWithDSID:(id)arg1 childAge:(id)arg2 childName:(id)arg3;
- (id)newChildSetupControllerWithDSID:(id)arg1 updateExistingSettings:(bool)arg2 childAge:(id)arg3 childName:(id)arg4;

@end
