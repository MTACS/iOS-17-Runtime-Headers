
@interface PSUIGenerateTransferQRCodeSpecifier : PSSpecifier {
    NSString * _carrierName;
    TSSIMSetupFlow * _flow;
    PSListController * _hostController;
    NSString * _iccid;
    bool  _popViewControllerOnPlanDeletion;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, readonly) NSString *carrierName;
@property (retain) TSSIMSetupFlow *flow;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic) bool popViewControllerOnPlanDeletion;
@property (retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (id)carrierName;
- (id)flow;
- (void)generateTransferQRCodeCellPressed:(id)arg1;
- (id)getLogger;
- (id)hostController;
- (id)iccid;
- (id)initWithHostController:(id)arg1 iccid:(id)arg2 carrierName:(id)arg3;
- (bool)popViewControllerOnPlanDeletion;
- (void)setFlow:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setPopViewControllerOnPlanDeletion:(bool)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setSpinner:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)spinner;

@end
