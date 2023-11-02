
@interface TSCellularSetupActivatingViewController : TSOBTableWelcomeController <TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpLabel;
- (void)_setUpSpinner;
- (void)_spinnerStartAnimating;
- (void)_spinnerStopAnimating;
- (id)delegate;
- (id)init;
- (id)label;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
