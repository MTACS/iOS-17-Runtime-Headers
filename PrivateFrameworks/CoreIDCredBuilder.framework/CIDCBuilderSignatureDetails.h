
@interface CIDCBuilderSignatureDetails : NSObject {
    NSArray * _issuerCertificate;
    NSData * _issuerKey;
    NSData * _signature;
    long long  _signingAlgorithm;
}

@property (nonatomic, retain) NSArray *issuerCertificate;
@property (nonatomic, retain) NSData *issuerKey;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) long long signingAlgorithm;

- (void).cxx_destruct;
- (id)initWithSigningAlgorithm:(long long)arg1 issuerCertificate:(id)arg2 issuerKey:(id)arg3 signature:(id)arg4;
- (id)initWithSigningAlgorithm:(long long)arg1 issuerCertificate:(id)arg2 signature:(id)arg3;
- (id)initWithSigningAlgorithm:(long long)arg1 issuerKey:(id)arg2 signature:(id)arg3;
- (id)issuerCertificate;
- (id)issuerKey;
- (void)setIssuerCertificate:(id)arg1;
- (void)setIssuerKey:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSigningAlgorithm:(long long)arg1;
- (id)signature;
- (long long)signingAlgorithm;

@end
