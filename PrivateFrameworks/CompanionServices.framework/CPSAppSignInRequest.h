
@interface CPSAppSignInRequest : CPSAuthenticationRequest <NSSecureCoding> {
    AKAuthorizationRequest * _appleIDRequest;
    NSArray * _customAuthenticationMethods;
    NSString * _overrideBundleIdentifier;
    AKPasswordRequest * _passwordRequest;
    ASCPublicKeyCredentialAssertionOptions * _platformKeyCredentialAssertionOptions;
    ASCPublicKeyCredentialCreationOptions * _platformKeyCredentialRegistrationOptions;
    CPSWebRequest * _webRequest;
}

@property (nonatomic, readonly) AKAuthorizationRequest *appleIDRequest;
@property (nonatomic, copy) NSArray *customAuthenticationMethods;
@property (nonatomic, readonly) bool hasAnyNonPasskeyRegistrationRequest;
@property (nonatomic, readonly) bool isAppleIDOnlyRequest;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isPasskeyRegistrationRequest;
@property (nonatomic, readonly) bool isPasskeyRequest;
@property (nonatomic, copy) NSString *overrideBundleIdentifier;
@property (nonatomic, readonly) AKPasswordRequest *passwordRequest;
@property (nonatomic, readonly) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions;
@property (nonatomic, readonly) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialRegistrationOptions;
@property (nonatomic, readonly) CPSWebRequest *webRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isPlatformKeyOnlyRequest;
- (id)appleIDRequest;
- (long long)authType;
- (id)customAuthenticationMethods;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAnyNonPasskeyRegistrationRequest;
- (id)initWithAppleIDRequest:(id)arg1 passwordReqeust:(id)arg2 platformKeyCredentialAssertionOptions:(id)arg3 platformKeyCredentialRegistrationOptions:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequests:(id)arg1;
- (id)initWithWebRequest:(id)arg1;
- (bool)isAppleIDOnlyRequest;
- (bool)isEmpty;
- (bool)isPasskeyRegistrationRequest;
- (bool)isPasskeyRequest;
- (id)overrideBundleIdentifier;
- (id)passwordRequest;
- (id)platformKeyCredentialAssertionOptions;
- (id)platformKeyCredentialRegistrationOptions;
- (void)setCustomAuthenticationMethods:(id)arg1;
- (void)setOverrideBundleIdentifier:(id)arg1;
- (id)webRequest;

@end
