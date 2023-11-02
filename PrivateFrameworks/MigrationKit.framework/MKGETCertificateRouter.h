
@interface MKGETCertificateRouter : NSObject <MKHTTPRouter> {
    MKCertificate * _certificate;
    <MKGETCertificateRouterDelegate> * _delegate;
    MKSRPServer * _srp;
}

@property (nonatomic, retain) MKCertificate *certificate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKGETCertificateRouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKSRPServer *srp;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)certificate;
- (id)delegate;
- (id)initWithSRP:(id)arg1 certificate:(id)arg2;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setCertificate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSrp:(id)arg1;
- (id)srp;

@end
