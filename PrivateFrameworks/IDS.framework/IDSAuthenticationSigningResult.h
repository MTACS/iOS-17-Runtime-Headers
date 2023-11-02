
@interface IDSAuthenticationSigningResult : NSObject {
    NSArray * _authenticationCertificateSignatures;
    NSData * _inputData;
    NSData * _nonce;
}

@property (nonatomic, readonly) NSArray *authenticationCertificateSignatures;
@property (nonatomic, readonly) NSData *inputData;
@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic, readonly) NSString *serverVerifiableEncoding;

- (void).cxx_destruct;
- (id)authenticationCertificateSignatures;
- (id)description;
- (id)initWithSubscriptionIdentifiers:(id)arg1 authenticationCertificates:(id)arg2 inputData:(id)arg3 nonce:(id)arg4 signature:(id)arg5;
- (id)inputData;
- (id)nonce;
- (id)serverVerifiableEncoding;

@end
