
@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest {
    NSData * _activeCertificateData;
    NSSet * _recipients;
    NSData * _stagedCertificateData;
}

@property (nonatomic, retain) NSData *activeCertificateData;
@property (nonatomic, retain) NSSet *recipients;
@property (nonatomic, retain) NSData *stagedCertificateData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeCertificateData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recipients;
- (void)setActiveCertificateData:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setStagedCertificateData:(id)arg1;
- (id)stagedCertificateData;

@end
