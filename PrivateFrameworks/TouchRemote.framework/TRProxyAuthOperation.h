
@interface TRProxyAuthOperation : TROperation {
    ACAccount * _account;
    bool  _isCLIMode;
    UIViewController * _presentingViewController;
    NSString * _rawPassword;
    bool  _shouldUseAIDA;
    NSSet * _targetedServices;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool isCLIMode;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) NSString *rawPassword;
@property (nonatomic) bool shouldUseAIDA;
@property (nonatomic, retain) NSSet *targetedServices;

+ (long long)_appleIDServiceTypeForTRAccountServices:(id)arg1;
+ (id)_logStringForAppleIDServiceType:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleProxyAuthenticationResponse:(id)arg1;
- (void)_handleProxyDeviceResponse:(id)arg1;
- (void)_performProxyAuthenticationWithProxiedDevice:(id)arg1;
- (void)_sendProxyDeviceRequest;
- (id)account;
- (void)execute;
- (bool)isCLIMode;
- (id)presentingViewController;
- (id)rawPassword;
- (void)setAccount:(id)arg1;
- (void)setIsCLIMode:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setShouldUseAIDA:(bool)arg1;
- (void)setTargetedServices:(id)arg1;
- (bool)shouldUseAIDA;
- (id)targetedServices;

@end
