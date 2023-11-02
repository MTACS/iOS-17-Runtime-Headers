
@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
    long long  _authenticateResponseType;
    SSAccount * _authenticatedAccount;
    unsigned long long  _credentialSource;
    NSError * _error;
    NSDictionary * _responseDictionary;
}

@property (nonatomic) long long authenticateResponseType;
@property (nonatomic, retain) SSAccount *authenticatedAccount;
@property (nonatomic) unsigned long long credentialSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *responseDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setError:(id)arg1;
- (long long)authenticateResponseType;
- (id)authenticatedAccount;
- (id)copyXPCEncoding;
- (unsigned long long)credentialSource;
- (id)description;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (id)responseDictionary;
- (void)setAuthenticateResponseType:(long long)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (void)setCredentialSource:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end
