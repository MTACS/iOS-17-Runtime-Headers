
@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse {
    PKDiscoveryManifest * _manifest;
}

@property (nonatomic, readonly) PKDiscoveryManifest *manifest;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithManifest:(id)arg1;
- (id)manifest;

@end
