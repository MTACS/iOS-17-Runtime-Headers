
@interface BCServerSideOAuth2URLProvider : NSObject <BCBaseOAuth2Protocol, NSSecureCoding> {
    NSString * _additionalParameters;
    NSURL * _authorizationURL;
    NSString * _clientIdentifier;
    NSURL * _redirectURI;
    NSString * _responseType;
    NSArray * _scope;
    NSString * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *redirectURI;
@property (readonly) Class superclass;

+ (id)URLProviderWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationSessionURL;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)redirectURI;
- (void)setRedirectURI:(id)arg1;
- (bool)shouldHandleRedirectURI:(id)arg1;

@end
