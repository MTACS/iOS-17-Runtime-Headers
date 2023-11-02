
@interface CPSViewServicePresentationContext : NSObject <NSSecureCoding> {
    AMSDelegatePurchaseRequest * _delegatePurchaseRequest;
    NSString * _deviceName;
    CPSLearnMoreRequest * _learnMoreRequest;
    NSDictionary * _paymentContext;
    PKPaymentRequest * _paymentRequest;
    CPSRestrictedAccessRequest * _restrictedAccessRequest;
    NSData * _sharingData;
    ACAccount * _storeAccount;
    CPSStoreAuthenticationRequest * _storeAuthenticationRequest;
    CPSSystemAuthenticationRequest * _systemAuthenticationRequest;
    CPSTVProviderRequest * _tvProviderRequest;
    CPSWebRequest * _webAuthenticationRequest;
}

@property (nonatomic, retain) AMSDelegatePurchaseRequest *delegatePurchaseRequest;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) CPSLearnMoreRequest *learnMoreRequest;
@property (nonatomic, retain) NSDictionary *paymentContext;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;
@property (nonatomic, retain) CPSRestrictedAccessRequest *restrictedAccessRequest;
@property (nonatomic, retain) NSData *sharingData;
@property (nonatomic, retain) ACAccount *storeAccount;
@property (nonatomic, retain) CPSStoreAuthenticationRequest *storeAuthenticationRequest;
@property (nonatomic, retain) CPSSystemAuthenticationRequest *systemAuthenticationRequest;
@property (nonatomic, retain) CPSTVProviderRequest *tvProviderRequest;
@property (nonatomic, retain) CPSWebRequest *webAuthenticationRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegatePurchaseRequest;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)learnMoreRequest;
- (id)paymentContext;
- (id)paymentRequest;
- (id)restrictedAccessRequest;
- (void)setDelegatePurchaseRequest:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setLearnMoreRequest:(id)arg1;
- (void)setPaymentContext:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setRestrictedAccessRequest:(id)arg1;
- (void)setSharingData:(id)arg1;
- (void)setStoreAccount:(id)arg1;
- (void)setStoreAuthenticationRequest:(id)arg1;
- (void)setSystemAuthenticationRequest:(id)arg1;
- (void)setTvProviderRequest:(id)arg1;
- (void)setWebAuthenticationRequest:(id)arg1;
- (id)sharingData;
- (id)storeAccount;
- (id)storeAuthenticationRequest;
- (id)systemAuthenticationRequest;
- (id)tvProviderRequest;
- (id)webAuthenticationRequest;

@end
