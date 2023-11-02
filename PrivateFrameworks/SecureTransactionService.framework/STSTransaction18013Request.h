
@interface STSTransaction18013Request : NSObject {
    NSData * _authenticationACL;
    NSString * _credentialIdentifier;
    NSDictionary * _elementsByNamespace;
    bool  _readerAuthenticated;
    NSString * _readerMerchantId;
}

@property (nonatomic, retain) NSData *authenticationACL;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSDictionary *elementsByNamespace;
@property (nonatomic) bool readerAuthenticated;
@property (nonatomic, retain) NSString *readerMerchantId;

- (void).cxx_destruct;
- (id)authenticationACL;
- (id)credentialIdentifier;
- (id)elementsByNamespace;
- (bool)readerAuthenticated;
- (id)readerMerchantId;
- (void)setAuthenticationACL:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setElementsByNamespace:(id)arg1;
- (void)setReaderAuthenticated:(bool)arg1;
- (void)setReaderMerchantId:(id)arg1;

@end
