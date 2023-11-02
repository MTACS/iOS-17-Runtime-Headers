
@interface TSCellularSetupTimeoutFailureViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem> {
    OBBoldTrayButton * _continueButton;
    <TSSIMSetupFlowDelegate> * _delegate;
    id  viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueButtonTapped;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
