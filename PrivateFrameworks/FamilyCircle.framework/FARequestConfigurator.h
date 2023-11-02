
@interface FARequestConfigurator : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AKAppleIDSigningController * _akSigningController;
    bool  _attachSetupHeader;
    AKAppleIDAuthenticationContext * _authContext;
    NSDictionary * _ephemeralAuthResults;
    AAGrandSlamSigner * _familyGrandSlamSigner;
    ACAccount * _grandSlamAccount;
    AAGrandSlamSigner * _grandSlamSigner;
    NSData * _pushToken;
    AKAppleIDServerResourceLoadDelegate * _resourceLoadDelegate;
    AIDAServiceOwnersManager * _serviceOwnersManager;
    <_TtP12FamilyCircle15FARequestSigner_> * _signer;
}

@property (nonatomic) bool attachSetupHeader;
@property (nonatomic, retain) AKAppleIDAuthenticationContext *authContext;
@property (nonatomic, retain) NSDictionary *ephemeralAuthResults;
@property (nonatomic, retain) <_TtP12FamilyCircle15FARequestSigner_> *signer;
@property (nonatomic, readonly) <FAURLProvider> *urlProvider;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (void).cxx_destruct;
- (id)_account;
- (id)_accountStore;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_akSigningController;
- (id)_authContext;
- (bool)_canConnectToAPS;
- (id)_familyGrandSlamSigner;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (id)_fresnoPayloadWithAdditionalPayload:(id)arg1;
- (id)_grandSlamAccount;
- (id)_grandSlamSigner;
- (void)_resourceLoadDelegate:(id /* block */)arg1;
- (id)_serviceOwnersManager;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (bool)attachSetupHeader;
- (id)authContext;
- (id)ephemeralAuthResults;
- (id)initWithAccount:(id)arg1;
- (void)pushTokenWithCompletion:(id /* block */)arg1;
- (void)renewCredentialsWithCompletion:(id /* block */)arg1;
- (void)setAttachSetupHeader:(bool)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setEphemeralAuthResults:(id)arg1;
- (void)setSigner:(id)arg1;
- (void)signURLRequest:(id)arg1;
- (id)signer;
- (void)updateWithEphemeralAuthResults:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

+ (void)addMessageEligibilityToPayload:(id)arg1;

- (id)_urlEndpointForEventType:(id)arg1;
- (void)_urlForEventType:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)urlProvider;

@end
