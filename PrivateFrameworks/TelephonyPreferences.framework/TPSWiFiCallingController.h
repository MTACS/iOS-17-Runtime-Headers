
@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate> {
    TPSCarrierBundleController * _carrierBundleController;
    TPSCloudCallingEmergencyAddressURLController * _emergencyAddressURLController;
    TPSEncryptedIdentityClient * _encryptedIdentityClient;
    NSDictionary * _encryptedIdentityInfo;
    TUSenderIdentityCapabilities * _subscriptionCapabilities;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    TPSCloudCallingThumperProvisioningURLController * _thumperProvisioningURLController;
}

@property (nonatomic, retain) TPSCarrierBundleController *carrierBundleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPSCloudCallingEmergencyAddressURLController *emergencyAddressURLController;
@property (nonatomic, retain) TPSEncryptedIdentityClient *encryptedIdentityClient;
@property (nonatomic, copy) NSDictionary *encryptedIdentityInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWiFiCallingCertified;
@property (nonatomic, readonly, copy) NSString *localizedCarrierName;
@property (nonatomic, retain) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsEncryptedIdentity;
@property (nonatomic, readonly) bool supportsThumperCalling;
@property (nonatomic, readonly) bool supportsWiFiCalling;
@property (nonatomic, readonly) bool supportsWiFiEmergencyCalling;
@property (getter=isThumperCallingEnabled, nonatomic) bool thumperCallingEnabled;
@property (nonatomic, retain) TPSCloudCallingThumperProvisioningURLController *thumperProvisioningURLController;
@property (getter=isWiFiCallingEnabled, nonatomic) bool wiFiCallingEnabled;
@property (getter=isWiFiCallingRoamingEnabled, nonatomic) bool wiFiCallingRoamingEnabled;

- (void).cxx_destruct;
- (id)carrierBundleController;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (id)emergencyAddressURLController;
- (id)encryptedIdentityClient;
- (id)encryptedIdentityInfo;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isThumperCallingEnabled;
- (bool)isWiFiCallingCertified;
- (bool)isWiFiCallingEnabled;
- (bool)isWiFiCallingRoamingEnabled;
- (id)localizedCarrierName;
- (void)setCarrierBundleController:(id)arg1;
- (void)setEmergencyAddressURLController:(id)arg1;
- (void)setEncryptedIdentityClient:(id)arg1;
- (void)setEncryptedIdentityInfo:(id)arg1;
- (void)setSubscriptionCapabilities:(id)arg1;
- (void)setThumperCallingEnabled:(bool)arg1;
- (void)setThumperProvisioningURLController:(id)arg1;
- (void)setWiFiCallingEnabled:(bool)arg1;
- (void)setWiFiCallingRoamingEnabled:(bool)arg1;
- (id)subscriptionCapabilities;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1;
- (id)subscriptionContext;
- (bool)supportsEncryptedIdentity;
- (bool)supportsThumperCalling;
- (bool)supportsWiFiCalling;
- (bool)supportsWiFiEmergencyCalling;
- (id)thumperProvisioningURLController;

@end
