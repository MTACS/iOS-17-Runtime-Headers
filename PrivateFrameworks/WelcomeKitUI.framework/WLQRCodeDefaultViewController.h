
@interface WLQRCodeDefaultViewController : WLQRCodeViewController <WLQRCodeProviderDelegate> {
    NSArray * _codes;
    OBLinkTrayButton * _continueButton;
    UIActivityIndicatorView * _indicatorView;
    WLQRCodeProvider * _provider;
    bool  _useGooglePlayStore;
}

@property (nonatomic, retain) NSArray *codes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_listButtonTapped:(id)arg1;
- (id)codes;
- (id)initWithDefaultQRCode;
- (void)providerDidProvide:(id)arg1;
- (void)pushListViewController;
- (void)requestCodes;
- (void)setCodes:(id)arg1;
- (void)setIndicatorHidden:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
