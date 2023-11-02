
@interface CRKASMRosterProviderEnvironment : NSObject {
    CRKASMCertificateVendor * _certificateVendor;
    CRKASMRosterProviderConfiguration * _configuration;
    CRKASMUserFactory * _userFactory;
}

@property (nonatomic, readonly) CRKASMCertificateVendor *certificateVendor;
@property (nonatomic, readonly) CRKASMRosterProviderConfiguration *configuration;
@property (nonatomic, readonly) CRKASMUserFactory *userFactory;

- (void).cxx_destruct;
- (id)certificateVendor;
- (id)configuration;
- (unsigned long long)hash;
- (id)identityVendorForUserIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 certificateVendor:(id)arg2 userFactory:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)userFactory;

@end
