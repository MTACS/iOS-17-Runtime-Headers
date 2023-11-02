
@interface POWSTrustResponse : NSObject {
    NSString * _assertion;
    NSDate * _created;
    NSString * _endpointURN;
    NSDate * _expires;
    bool  _fault;
    NSString * _faultCodeValue;
    NSString * _faultReason;
    NSString * _faultSubCodeValue;
    NSString * _keyIdentifier;
    NSString * _nonce;
    NSString * _securityExtensionPrefix;
    NSDate * _tokenExpires;
    NSString * _tokenType;
}

@property (nonatomic, retain) NSString *assertion;
@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSString *endpointURN;
@property (nonatomic, retain) NSDate *expires;
@property (getter=isFault, nonatomic) bool fault;
@property (nonatomic, retain) NSString *faultCodeValue;
@property (nonatomic, retain) NSString *faultReason;
@property (nonatomic, retain) NSString *faultSubCodeValue;
@property (nonatomic, retain) NSString *keyIdentifier;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSString *securityExtensionPrefix;
@property (nonatomic, retain) NSDate *tokenExpires;
@property (nonatomic, retain) NSString *tokenType;

- (void).cxx_destruct;
- (id)assertion;
- (id)created;
- (id)endpointURN;
- (id)expires;
- (id)faultCodeValue;
- (id)faultReason;
- (id)faultSubCodeValue;
- (bool)isCredentialFault;
- (bool)isFault;
- (id)keyIdentifier;
- (id)nonce;
- (id)securityExtensionPrefix;
- (void)setAssertion:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setEndpointURN:(id)arg1;
- (void)setExpires:(id)arg1;
- (void)setFault:(bool)arg1;
- (void)setFaultCodeValue:(id)arg1;
- (void)setFaultReason:(id)arg1;
- (void)setFaultSubCodeValue:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setSecurityExtensionPrefix:(id)arg1;
- (void)setTokenExpires:(id)arg1;
- (void)setTokenType:(id)arg1;
- (id)tokenExpires;
- (id)tokenType;

@end
