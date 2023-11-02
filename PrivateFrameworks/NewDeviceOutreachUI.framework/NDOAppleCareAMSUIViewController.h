
@interface NDOAppleCareAMSUIViewController : AMSUIWebViewController <AMSUIWebDelegate, UINavigationBarDelegate> {
    NSString * _deeplinkParams;
    bool  _initialLoadCompleted;
    bool  _isMultipleDevicePurchaseCall;
    UINavigationController * _navController;
    <NDOAppleCareAMSUIViewPresenterProtocol> * _presenter;
    NSDictionary * _purchaseAPIBody;
    NSString * _serialNumber;
    NSString * _source;
    NSString * _ulSalesURL;
    NDOWarranty * _warranty;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *deeplinkParams;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool initialLoadCompleted;
@property bool isMultipleDevicePurchaseCall;
@property UINavigationController *navController;
@property <NDOAppleCareAMSUIViewPresenterProtocol> *presenter;
@property (retain) NSDictionary *purchaseAPIBody;
@property (retain) NSString *serialNumber;
@property (retain) NSString *source;
@property (readonly) Class superclass;
@property (retain) NSString *ulSalesURL;
@property (retain) NDOWarranty *warranty;

- (void).cxx_destruct;
- (id)_initWithWarranty:(id)arg1 serialNumber:(id)arg2 source:(id)arg3 isMultiCall:(bool)arg4 url:(id)arg5 deeplinkParams:(id)arg6 purchaseBody:(id)arg7;
- (void)cancelTapped:(id)arg1;
- (id)deeplinkParams;
- (id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 source:(id)arg3 deeplinkParams:(id)arg4;
- (id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 source:(id)arg3 url:(id)arg4 purchaseBody:(id)arg5;
- (bool)initialLoadCompleted;
- (bool)isMultipleDevicePurchaseCall;
- (void)loadAMSUIView;
- (void)loadView;
- (id)navController;
- (bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)presenter;
- (id)purchaseAPIBody;
- (id)serialNumber;
- (void)setDeeplinkParams:(id)arg1;
- (void)setInitialLoadCompleted:(bool)arg1;
- (void)setIsMultipleDevicePurchaseCall:(bool)arg1;
- (void)setNavController:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setPurchaseAPIBody:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setUlSalesURL:(id)arg1;
- (void)setWarranty:(id)arg1;
- (id)source;
- (unsigned long long)supportedInterfaceOrientations;
- (id)ulSalesURL;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)warranty;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;

@end
