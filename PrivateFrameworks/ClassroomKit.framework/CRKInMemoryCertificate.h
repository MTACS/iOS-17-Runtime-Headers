
@interface CRKInMemoryCertificate : NSObject <CRKCertificate, NSSecureCoding> {
    CRKIdentityConfiguration * _configuration;
    NSDateInterval * _validityDateInterval;
}

@property (getter=isCertificateAuthority, nonatomic, readonly) bool certificateAuthority;
@property (nonatomic, readonly, copy) NSArray *commonNames;
@property (nonatomic, readonly, copy) CRKIdentityConfiguration *configuration;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fingerprint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int hashingAlgorithm;
@property (nonatomic, readonly) long long keySizeInBits;
@property (readonly) Class superclass;
@property (getter=isTemporallyValid, nonatomic, readonly) bool temporallyValid;
@property (nonatomic, readonly) struct __SecCertificate { }*underlyingCertificate;
@property (nonatomic, retain) NSDateInterval *validityDateInterval;

+ (id)certificateWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commonNames;
- (id)configuration;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerprint;
- (unsigned int)hashingAlgorithm;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 validityDateInterval:(id)arg2;
- (bool)isCertificateAuthority;
- (bool)isTemporallyValid;
- (long long)keySizeInBits;
- (void)setValidityDateInterval:(id)arg1;
- (struct __SecCertificate { }*)underlyingCertificate;
- (id)validityDateInterval;

@end
