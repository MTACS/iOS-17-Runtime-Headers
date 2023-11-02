
@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)capabilityProvisioningPostData;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (void)enableCapability;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isCapabilityEnabled;
- (bool)isCapabilityProvisioningURLInvalid;
- (void)webSheetCompletion;

@end
