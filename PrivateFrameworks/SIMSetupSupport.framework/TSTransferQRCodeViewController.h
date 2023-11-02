
@interface TSTransferQRCodeViewController : TSOBWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate> {
    UIBarButtonItem * _cancelButton;
    NSString * _carrierName;
    <TSSIMSetupFlowDelegate> * _delegate;
    NSString * _transferCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_userDidTapCancel;
- (id)delegate;
- (id)initWithTransferCredentials:(id)arg1 carrierName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
