
@interface WFCertificateContext : NSObject <WFCertificateProviderContext, WFContextPresenting> {
    NSArray * _certificateChain;
    struct __SecTrust { } * _certificateTrust;
    id /* block */  _completionHandler;
    WFNetworkScanRecord * _network;
    WFNetworkProfile * _profile;
    UIViewController<WFNetworkView> * _provider;
    long long  _requestedFields;
}

@property (nonatomic, retain) NSArray *certificateChain;
@property (nonatomic) struct __SecTrust { }*certificateTrust;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDismissal;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFNetworkProfile *profile;
@property (nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic) long long requestedFields;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accept;
- (void)cancel;
- (id)certificateChain;
- (struct __SecTrust { }*)certificateTrust;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 certificateChain:(id)arg3;
- (void)launchSettings;
- (bool)needsDismissal;
- (id)network;
- (id)profile;
- (id)provider;
- (long long)requestedFields;
- (void)setCertificateChain:(id)arg1;
- (void)setCertificateTrust:(struct __SecTrust { }*)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setRequestedFields:(long long)arg1;

@end
