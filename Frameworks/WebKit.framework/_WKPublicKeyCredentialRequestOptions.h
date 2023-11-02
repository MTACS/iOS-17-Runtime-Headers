
@interface _WKPublicKeyCredentialRequestOptions : NSObject {
    NSArray * _allowCredentials;
    long long  _authenticatorAttachment;
    _WKAuthenticationExtensionsClientInputs * _extensions;
    NSData * _extensionsCBOR;
    NSString * _relyingPartyIdentifier;
    NSNumber * _timeout;
    long long  _userVerification;
}

@property (nonatomic, copy) NSArray *allowCredentials;
@property (nonatomic) long long authenticatorAttachment;
@property (nonatomic, retain) _WKAuthenticationExtensionsClientInputs *extensions;
@property (nonatomic, copy) NSData *extensionsCBOR;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic) long long userVerification;

- (id)allowCredentials;
- (long long)authenticatorAttachment;
- (void)dealloc;
- (id)extensions;
- (id)extensionsCBOR;
- (id)init;
- (id)relyingPartyIdentifier;
- (void)setAllowCredentials:(id)arg1;
- (void)setAuthenticatorAttachment:(long long)arg1;
- (void)setExtensions:(id)arg1;
- (void)setExtensionsCBOR:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setUserVerification:(long long)arg1;
- (id)timeout;
- (long long)userVerification;

@end
