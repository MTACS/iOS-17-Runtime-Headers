
@interface EMMessageSigner : NSObject <NSSecureCoding> {
    EMCertificateTrustInformation * _encryptionCertificateTrustInfo;
    NSError * _error;
    EMCertificateTrustInformation * _signingCertificateTrustInfo;
}

@property (nonatomic, retain) EMCertificateTrustInformation *encryptionCertificateTrustInfo;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) bool hasSeparateSigningAndEncryptionCertificates;
@property (nonatomic, retain) EMCertificateTrustInformation *signingCertificateTrustInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionCertificateTrustInfo;
- (id)error;
- (void)evaluateTrustsWithOptions:(unsigned long long)arg1;
- (bool)hasSeparateSigningAndEncryptionCertificates;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)setEncryptionCertificateTrustInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSigningCertificateTrustInfo:(id)arg1;
- (id)signingCertificateTrustInfo;

@end
