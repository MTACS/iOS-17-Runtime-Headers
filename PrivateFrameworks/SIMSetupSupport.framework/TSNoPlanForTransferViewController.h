
@interface TSNoPlanForTransferViewController : TSOBTableWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate> {
    <TSSIMSetupFlowDelegate> * _delegate;
    unsigned long long  _entryPoint;
    bool  _showOtherOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property unsigned long long entryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getTitleAndDetailsForTransferCapability:(unsigned long long)arg1 carrier:(id)arg2 phoneNumber:(id)arg3 sourceDeviceName:(id)arg4 isTransferNotSupportedFromiPhone:(bool)arg5 isTransferBackPlan:(bool)arg6;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_scanButtonTapped;
- (id)delegate;
- (unsigned long long)entryPoint;
- (id)initWithCarrier:(id)arg1 phoneNumber:(id)arg2 transferCapability:(unsigned long long)arg3 showOtherOptions:(bool)arg4 entryPoint:(unsigned long long)arg5 sourceDeviceName:(id)arg6 isTransferNotSupportedFromiPhone:(bool)arg7 isTransferBackPlan:(bool)arg8;
- (bool)isStartOverRequiredOnBackButtonTapped;
- (void)setDelegate:(id)arg1;
- (void)setEntryPoint:(unsigned long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
