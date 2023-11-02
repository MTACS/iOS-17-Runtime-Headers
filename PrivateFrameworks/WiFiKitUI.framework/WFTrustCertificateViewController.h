
@interface WFTrustCertificateViewController : TrustCertificateViewController <TrustCertificateViewControllerDelegate, WFNetworkView> {
    <WFCertificateProviderContext> * _credentialsContext;
    bool  _wantsModalPresentation;
}

@property (nonatomic, retain) <WFCertificateProviderContext> *credentialsContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsModalPresentation;

- (void).cxx_destruct;
- (id)credentialsContext;
- (id)initWithCertificateProviderContext:(id)arg1;
- (void)setCredentialsContext:(id)arg1;
- (void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2;
- (bool)wantsModalPresentation;

@end
