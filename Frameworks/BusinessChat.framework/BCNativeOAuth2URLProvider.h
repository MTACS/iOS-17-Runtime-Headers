
@interface BCNativeOAuth2URLProvider : NSObject <BCNativeOAuth2Protocol, NSSecureCoding> {
    NSURL * _accessTokenURL;
    NSURL * _authorizationURL;
    NSString * _clientIdentifier;
    NSString * _clientSecret;
    NSString * _responseEncryptionKey;
    NSString * _responseType;
    NSArray * _scope;
    NSString * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)URLProviderWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationSessionURL;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseEncryptionKey;
- (bool)shouldHandleRedirectURI:(id)arg1;
- (id)tokenExchangeBodyWithCode:(id)arg1;
- (id)tokenExchangeURL;

@end
