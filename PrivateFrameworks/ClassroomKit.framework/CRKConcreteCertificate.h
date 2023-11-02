
@interface CRKConcreteCertificate : NSObject <CRKCertificate> {
    struct __SecCertificate { } * _underlyingCertificate;
}

@property (getter=isCertificateAuthority, nonatomic, readonly) bool certificateAuthority;
@property (nonatomic, readonly, copy) NSArray *commonNames;
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
@property (nonatomic, readonly) NSDateInterval *validityDateInterval;

+ (id)certificateWithData:(id)arg1;

- (id)commonNames;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (id)fingerprint;
- (unsigned int)hashingAlgorithm;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (bool)isCertificateAuthority;
- (bool)isTemporallyValid;
- (long long)keySizeInBits;
- (struct __SecCertificate { }*)underlyingCertificate;
- (id)validityDateInterval;

@end
