
@protocol AMSMescalBagContract <AMSURLBagContract>

@required

- (AMSBagValue *)mescalCertificateURL;
- (AMSBagValue *)mescalSetupURL;

@optional

- (AMSBagValue *)mescalPrimingURL;
- (AMSBagValue *)mescalSignSapRequests;
- (AMSBagValue *)mescalSignSapResponses;
- (AMSBagValue *)mescalSignedActions;

@end
