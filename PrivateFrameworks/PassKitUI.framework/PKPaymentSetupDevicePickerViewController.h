
@interface PKPaymentSetupDevicePickerViewController : PKDynamicCollectionViewController <PKPaymentSetupDevicePickerListSectionControllerDelegate, PKViewControllerPreflightable> {
    PKPaymentProvisioningController * _bridgeProvisioningController;
    UIImage * _cardImage;
    <PKPaymentSetupDevicePickerViewControllerFlowDelegate> * _flowDelegate;
    PKPaymentSetupProduct * _nanoProduct;
    PKPaymentWebService * _nanoWebService;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentWebService * _webService;
    NSArray * _webServices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupDevicePickerViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didSelectWebService:(id)arg1;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 webService:(id)arg5 nanoWebService:(id)arg6;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setFlowDelegate:(id)arg1;
- (void)viewDidLoad;

@end
