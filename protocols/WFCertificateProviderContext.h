
@protocol WFCertificateProviderContext <WFProviderContext>

@required

- (void)accept;
- (struct __SecTrust { }*)certificateTrust;
- (void)launchSettings;

@end
