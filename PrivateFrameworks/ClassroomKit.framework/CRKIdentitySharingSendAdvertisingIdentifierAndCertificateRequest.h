
@interface CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest : CATTaskRequest {
    NSData * _activeCertificateData;
    NSUUID * _advertisingIdentifier;
    NSSet * _recipients;
    NSData * _stagedCertificateData;
}

@property (nonatomic, retain) NSData *activeCertificateData;
@property (nonatomic, retain) NSUUID *advertisingIdentifier;
@property (nonatomic, retain) NSSet *recipients;
@property (nonatomic, retain) NSData *stagedCertificateData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeCertificateData;
- (id)advertisingIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recipients;
- (void)setActiveCertificateData:(id)arg1;
- (void)setAdvertisingIdentifier:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setStagedCertificateData:(id)arg1;
- (id)stagedCertificateData;

@end
