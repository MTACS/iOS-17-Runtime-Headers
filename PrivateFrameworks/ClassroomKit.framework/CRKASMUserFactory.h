
@interface CRKASMUserFactory : NSObject {
    CRKASMCertificateVendor * _certificateVendor;
    CRKASMRosterProviderConfiguration * _configuration;
}

@property (nonatomic, readonly) CRKASMCertificateVendor *certificateVendor;
@property (nonatomic, readonly) CRKASMRosterProviderConfiguration *configuration;

- (void).cxx_destruct;
- (id)cachedTrustedUserForPerson:(id)arg1;
- (id)cachedUserForPerson:(id)arg1;
- (id)certificateVendor;
- (id)configuration;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1 certificateVendor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isUser:(id)arg1 suitableForPerson:(id)arg2;
- (id)makeTrustedUserForPerson:(id)arg1;
- (id)makeUserForPerson:(id)arg1;
- (id)trustedUserForPerson:(id)arg1;
- (id)userForPerson:(id)arg1;

@end
