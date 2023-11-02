
@interface CMSExtensionQueuesContentProtectionEndpointConfiguration : CMSExtensionEndpointConfiguration {
    NSURL * _fairPlayKeySystemCertificateUrl;
    NSString * _keySystemIdentifier;
}

@property (nonatomic, retain) NSURL *fairPlayKeySystemCertificateUrl;
@property (nonatomic, retain) NSString *keySystemIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)fairPlayKeySystemCertificateUrl;
- (id)init;
- (id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4;
- (id)keySystemIdentifier;
- (void)setFairPlayKeySystemCertificateUrl:(id)arg1;
- (void)setKeySystemIdentifier:(id)arg1;

@end
