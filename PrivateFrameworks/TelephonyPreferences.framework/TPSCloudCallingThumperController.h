
@interface TPSCloudCallingThumperController : NSObject {
    TPSCarrierBundleController * _carrierBundleController;
    <TPSCloudCallingThumperControllerDelegate> * _delegate;
    NSDictionary * _encryptedIdentityInfo;
    TUSenderIdentityCapabilities * _subscriptionCapabilities;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (nonatomic, retain) TPSCarrierBundleController *carrierBundleController;
@property (nonatomic) <TPSCloudCallingThumperControllerDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *encryptedIdentityInfo;
@property (nonatomic, readonly, copy) NSString *localizedCarrierName;
@property (nonatomic, retain) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, readonly) bool supportsThumperCalling;
@property (getter=isThumperCallingEnabled, nonatomic) bool thumperCallingEnabled;

- (void).cxx_destruct;
- (id)carrierBundleController;
- (id)delegate;
- (id)encryptedIdentityInfo;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isThumperCallingEnabled;
- (id)localizedCarrierName;
- (void)setCarrierBundleController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptedIdentityInfo:(id)arg1;
- (void)setSubscriptionCapabilities:(id)arg1;
- (void)setThumperCallingEnabled:(bool)arg1;
- (id)subscriptionCapabilities;
- (id)subscriptionContext;
- (bool)supportsThumperCalling;

@end
