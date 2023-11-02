
@interface TSAddCellularPlanViewController : TSOBWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate> {
    bool  _allowDismiss;
    <TSSIMSetupFlowDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (id)delegate;
- (id)initWithType:(unsigned long long)arg1 allowDismiss:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
