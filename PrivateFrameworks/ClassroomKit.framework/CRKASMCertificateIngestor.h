
@interface CRKASMCertificateIngestor : NSObject {
    CRKASMRosterProviderConfiguration * _configuration;
}

@property (nonatomic, readonly) CRKASMRosterProviderConfiguration *configuration;

- (void).cxx_destruct;
- (bool)areCertificatesValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3;
- (id)configuration;
- (bool)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1;
- (bool)isCertificateValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3;
- (bool)storeCertificates:(id)arg1 userIdentifier:(id)arg2 error:(id*)arg3;

@end
