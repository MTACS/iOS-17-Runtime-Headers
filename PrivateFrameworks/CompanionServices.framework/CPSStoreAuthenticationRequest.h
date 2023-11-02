
@interface CPSStoreAuthenticationRequest : CPSAuthenticationRequest <BSXPCCoding, NSSecureCoding> {
    ACAccount * _account;
    AMSDelegateAuthenticateRequest * _authenticationRequest;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSDelegateAuthenticateRequest *authenticationRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (long long)authType;
- (id)authenticationRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAuthenticationRequest:(id)arg1;

@end
