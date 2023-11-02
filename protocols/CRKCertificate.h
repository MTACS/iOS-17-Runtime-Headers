
@protocol CRKCertificate <CRKKeychainItem>

@required

- (NSArray *)commonNames;
- (NSData *)dataRepresentation;
- (NSString *)fingerprint;
- (unsigned int)hashingAlgorithm;
- (bool)isCertificateAuthority;
- (bool)isTemporallyValid;
- (long long)keySizeInBits;
- (struct __SecCertificate { }*)underlyingCertificate;
- (NSDateInterval *)validityDateInterval;

@end
