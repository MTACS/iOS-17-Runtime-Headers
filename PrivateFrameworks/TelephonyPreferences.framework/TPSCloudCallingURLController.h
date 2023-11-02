
@interface TPSCloudCallingURLController : NSObject {
    bool  _capabilityEnabled;
    NSData * _capabilityProvisioningPostData;
    int  _capabilityProvisioningStatus;
    NSURL * _capabilityProvisioningURL;
    bool  _capabilityProvisioningURLInvalid;
    TPSCarrierBundleController * _carrierBundleController;
    <TPSCloudCallingURLControllerDelegate> * _delegate;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    TPSCloudCallingWebViewController * _webViewController;
}

@property (getter=isCapabilityEnabled, nonatomic, readonly) bool capabilityEnabled;
@property (nonatomic, readonly, copy) NSData *capabilityProvisioningPostData;
@property (nonatomic, readonly) int capabilityProvisioningStatus;
@property (nonatomic, readonly, copy) NSURL *capabilityProvisioningURL;
@property (getter=isCapabilityProvisioningURLInvalid, nonatomic, readonly) bool capabilityProvisioningURLInvalid;
@property (nonatomic, retain) TPSCarrierBundleController *carrierBundleController;
@property (nonatomic) <TPSCloudCallingURLControllerDelegate> *delegate;
@property (nonatomic, readonly) bool shouldEnableCapability;
@property (nonatomic, readonly) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) TPSCloudCallingWebViewController *webViewController;

- (void).cxx_destruct;
- (id)_webViewControllerWithType:(long long)arg1;
- (id)capabilityProvisioningPostData;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (id)carrierBundleController;
- (id)delegate;
- (void)enableCapability;
- (id)genericErrorAlertController;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isCapabilityEnabled;
- (bool)isCapabilityProvisioningURLInvalid;
- (void)loadWebViewController;
- (id)provisionCapabilityController;
- (void)reloadWebViewController;
- (void)setCarrierBundleController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebViewController:(id)arg1;
- (bool)shouldEnableCapability;
- (id)subscriptionCapabilities;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1;
- (id)subscriptionContext;
- (id)updateEmergencyAddressController;
- (void)webSheetCompletion;
- (id)webViewController;

@end
