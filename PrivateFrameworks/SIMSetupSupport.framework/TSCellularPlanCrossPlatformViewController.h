
@interface TSCellularPlanCrossPlatformViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem> {
    SSOBBoldTrayButton * _continueButton;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _isScanButtonTapped;
    OBLinkTrayButton * _scanButton;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isScanButtonTapped;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueButtonTapped;
- (void)_scanButtonTapped;
- (long long)backOption;
- (id)delegate;
- (id)initWithPhoneNumber:(id)arg1;
- (bool)isScanButtonTapped;
- (void)setDelegate:(id)arg1;
- (void)setIsScanButtonTapped:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
