
@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowUpgradeToThumperButton;
@property (readonly) Class superclass;
@property (getter=isThumperProvisioningInProcess, nonatomic, readonly) bool thumperProvisioningInProcess;

- (id)capabilityProvisioningPostData;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (void)enableCapability;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isCapabilityEnabled;
- (bool)isCapabilityProvisioningURLInvalid;
- (bool)isThumperProvisioningInProcess;
- (id)requestTimeoutController;
- (bool)shouldShowEmergencyAddress;
- (bool)shouldShowUpgradeToThumperButton;
- (void)webSheetCompletion;

@end
