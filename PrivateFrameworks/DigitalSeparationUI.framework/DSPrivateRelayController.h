
@interface DSPrivateRelayController : DSOBWelcomeController <DSController> {
    <DSNavigationDelegate> * _delegate;
    OBBoldTrayButton * _enableButton;
    OBLinkTrayButton * _linkButton;
    unsigned long long  _proxyServiceStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) OBBoldTrayButton *enableButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBLinkTrayButton *linkButton;
@property (nonatomic) unsigned long long proxyServiceStatus;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)delegate;
- (id)enableButton;
- (id)enableButtonTitle;
- (id)init;
- (void)learnMorePressed;
- (id)linkButton;
- (id)privateRelayDetailText;
- (unsigned long long)proxyServiceStatus;
- (void)setDelegate:(id)arg1;
- (void)setEnableButton:(id)arg1;
- (void)setLinkButton:(id)arg1;
- (void)setPrivateRelayEnabledWithHandler:(id /* block */)arg1;
- (void)setProxyServiceStatus:(unsigned long long)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)turnOnPrivateRelay;
- (void)viewDidLoad;

@end
