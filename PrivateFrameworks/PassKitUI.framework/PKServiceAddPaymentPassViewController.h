
@interface PKServiceAddPaymentPassViewController : PKNavigationController <PKServiceAddPaymentPassViewControllerProtocol> {
    PKAddPaymentPassRequestConfiguration * _configuration;
    bool  _entitled;
    PKPaymentWebService * _managingDeviceWebService;
    NSString * _teamID;
    NSArray * _webServices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_applyCancelItem:(id)arg1;
- (void)_cancel;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_launchFlowWithFlowManager;
- (void)dealloc;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)loadView;
- (void)setConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
